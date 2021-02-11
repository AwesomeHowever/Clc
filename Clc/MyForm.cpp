
//#include <Windows.h>
#include "MyForm.h"
#include <cstdlib>
#include <ctime>
#include "Header.h"
//#include "Source.h"

using namespace System;
using namespace System::Windows::Forms;

double** A;
double** PreA;
int rows = 1, columns = 1;
double det;

void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Clc::MyForm form;
	Application::Run(% form);
	

}



System::Void Clc::MyForm::numericUpDownRows_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	labelDet->Text = "";
	rows = Convert::ToInt32(numericUpDownRows->Value);
	columns = Convert::ToInt32(numericUpDownColumns->Value);


	//создаём таблицу
	dataGridViewA->RowCount = rows;
	dataGridViewA->ColumnCount = columns;

	ShowGrid();


	//ровняем таблицу
	//dataGridViewA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	//dataGridViewA->AutoResizeColumns();
	//dataGridViewA->AutoResizeRows();
	return System::Void();
}

System::Void Clc::MyForm::numericUpDownColumns_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	labelDet->Text = "";
	rows = Convert::ToInt32(numericUpDownRows->Value);
	columns = Convert::ToInt32(numericUpDownColumns->Value);
	

	//создаём таблицу
	dataGridViewA->RowCount = rows;
	dataGridViewA->ColumnCount = columns;
	
	ShowGrid();
	

	//ровняем таблицу
	//dataGridViewA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	//dataGridViewA->AutoResizeColumns();
	//dataGridViewA->AutoResizeRows();
	return System::Void();
}

System::Void Clc::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	labelDet->Text = "";
	int i, j;
	rows = Convert::ToInt32(numericUpDownRows->Value);
	columns = Convert::ToInt32(numericUpDownColumns->Value);
	/*if (A != NULL)
	{
		for (int i = 0; i < rows; i++)
		{
			delete [] A[i];
		}
		delete [] A;
	}*/
	A = new double* [rows];
	for (i = 0; i < rows; i++)
	{
		A[i] = new double[columns];
	}

	PreA = new double* [rows];
	for (i = 0; i < rows; i++)
	{
		PreA[i] = new double[columns];
	}
	// Инициализируем элементы
	A = generation(rows, columns);

	//Инициализация запасного массива
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			PreA[i][j] = A[i][j]; //Копирование
		}
	}

	ShowA();

	return System::Void();
}

System::Void Clc::MyForm::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	labelDet->Text = "";
	if (A == NULL)
	{
		A = new double* [rows];
		//A = (double*)malloc(sizeof(double*)*rows)
		for (int i = 0; i < rows; i++)
		{
			A[i] = new double[columns];
			//A[i] = (double)malloc(sizeof(double)*columns)
		}

		PreA = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			PreA[i] = new double[columns];
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				//вывод значений матрицы
				A[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}

			//Инициализация запасного массива
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					PreA[i][j] = A[i][j]; //Копирование
				}
			}
		}
	}
	if (A != NULL && textBoxComon->Text != "" && textBoxSecond->Text != "" && textBoxK->Text != "")
	{
		int common_row = System::Int32::Parse(textBoxComon->Text) - 1;
		int second_row = System::Int32::Parse(textBoxSecond->Text) - 1;
		int k = System::Int32::Parse(textBoxK->Text);
		
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				//вывод значений матрицы
				A[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}

			//Инициализация запасного массива
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					PreA[i][j] = A[i][j]; //Копирование
				}
			}
		}
		//Алгоритм прибавления строки
		for (int i = 0; i < columns; i++)
		{
			A[second_row][i] += A[common_row][i] * (double)k;
		}

		ShowA();
	}

	return System::Void();
}

System::Void Clc::MyForm::buttonReplace_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (det != NULL)
	{
		det *= (-1.0);
		labelDet->Text = Convert::ToString(det);
	}
	if (A == NULL)
	{
		A = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			A[i] = new double[columns];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				//вывод значений матрицы
				A[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}
		}

		PreA = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			PreA[i] = new double[columns];
		}
		//Инициализация запасного массива
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				PreA[i][j] = A[i][j]; //Копирование
			}
		}
	}

	if (A != NULL && textBoxFir->Text != "" && textBoxSec-> Text != "")
	{
		int first = System::Int32::Parse(textBoxFir->Text)-1;
		int second = System::Int32::Parse(textBoxSec->Text)-1;
		double Inter_value;

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				//вывод значений матрицы
				A[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}

			//Инициализация запасного массива
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					PreA[i][j] = A[i][j]; //Копирование
				}
			}
		}
		//Перемена строк матрицы А местами
		for (int i = 0; i < columns; i++)
		{
			Inter_value = A[first][i];
			A[first][i] = A[second][i];
			A[second][i] = Inter_value;
		}
	}
	
	ShowA();
	return System::Void();
}

System::Void Clc::MyForm::buttonMultStr_Click(System::Object^ sender, System::EventArgs^ e)
{
	labelDet->Text = "";
	int mrow;
	double k;
	if (A == NULL && dataGridViewA->Rows[0]->Cells[0]->Value != NULL)
	{
		A = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			A[i] = new double[columns];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				//вывод значений матрицы
				A[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}
		}

		PreA = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			PreA[i] = new double[columns];
		}
		//Инициализация запасного массива
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				PreA[i][j] = A[i][j]; //Копирование
			}
		}
	}

	if (A != NULL)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				//вывод значений матрицы
				A[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}

			//Инициализация запасного массива
			for (i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					PreA[i][j] = A[i][j]; //Копирование
				}
			}
		}
		if (textBoxMultStr->Text != "" && textBoxMultK->Text != "")
		{
			mrow = System::Int32::Parse(textBoxMultStr->Text)-1;
			k = Convert::ToDouble(textBoxMultK->Text);
			for (int i = 0; i < columns; i++)
			{
				A[mrow][i] *= k;
			}
		}
	}

	ShowA();
	return System::Void();
}

System::Void Clc::MyForm::buttonUdo_Click(System::Object^ sender, System::EventArgs^ e)
{
	labelDet->Text = "";
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			A[i][j] = PreA[i][j];
		}
	}

	ShowA();
	return System::Void();
}

System::Void Clc::MyForm::buttonTriangle_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (A != NULL && columns == rows)
	{
		det = determinant(A, rows, columns);
		labelDet->Text = Convert::ToString(det);
	}
	else if (columns == rows)
	{
		A = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			A[i] = new double[columns];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				//вывод значений матрицы
				A[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}
		}

		PreA = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			PreA[i] = new double[columns];
		}
		//Инициализация запасного массива
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				PreA[i][j] = A[i][j]; //Копирование
			}
		}
		det = determinant(A, rows, columns);
		labelDet->Text = Convert::ToString(det);
	}
	return System::Void();
}

System::Void Clc::MyForm::buttonTest_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

void Clc::MyForm::ShowA()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			//вывод значений матрицы
			dataGridViewA->Rows[i]->Cells[j]->Value = A[i][j];
		}
	}
}

void Clc::MyForm::ShowGrid()
{
	//название таблицы
	dataGridViewA->TopLeftHeaderCell->Value = "Матрица А";
	for (int i = 0; i < rows; i++)
	{
		//вывод номеров строк
		dataGridViewA->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		for (int j = 0; j < columns; j++)
		{
			//вывод номеров столбцов
			dataGridViewA->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

			//вывод значений матрицы
			dataGridViewA->Rows[i]->Cells[j]->Value = 0;
		}
	}
}

double** Clc::MyForm::generation(int rows, int columns)
{
	A = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		A[i] = new double[columns];
	}

	srand(time(NULL));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (rand() % 9 < 5)
				A[i][j] = (-1.) * (rand() % 9);
			else
				A[i][j] = rand() % 9;

		}
	}
	return A;
}

double Clc::MyForm::int_extent(double num, int extent)	// Вещественная степень num^extent
{
	if (num == 0)
	{
		return 0;
	}
	if (extent == 0)
	{
		return 1.0;
	}
	if (extent < 0)
	{
		return int_extent((1.0 / num), (-1) * extent);
	}
	if (extent > 1) {
		return num * int_extent(num, extent - 1);
	}
	else {
		return num;
	}
}

double Clc::MyForm::determinant(double** A, int rows, int columns)
{

	if (columns == rows)
	{
		if (rows == 2)
		{
			return (A[0][0] * A[1][1] - A[0][1] * A[1][0]);
		}
		else if (rows == 1)
		{
			return A[0][0];
		}
		else if (rows < 1)
		{
			return 0;
		}
		else
		{
			/*далее идет алгоритм понижения порядка*/
			double determin = 0.0, multiple;
			double** DET;
			DET = new double* [rows];
			for (int i = 0; i < rows; i++)
			{
				DET[i] = new double[columns];
			}

			int rows_B = rows - 1, column = 0;

			int i = 0;
			while (i < rows)
			{
				if (A[0][i] == 0)
				{
					column++;
					i++;
				}
				else
				{
					i = rows + 1;
				}
			}
			if (column > rows)
			{
				return 0;
			}

			for (int reduceE = 1; reduceE < rows; reduceE++)
			{


				if (A[reduceE][column] > 0 && A[0][column] < 0)
				{
					multiple = (-1) * A[reduceE][column] / A[0][column];

				}
				else if (A[reduceE][column] < 0 && A[0][column] > 0) {
					multiple = (-1) * A[reduceE][column] / A[0][column];
				}
				else if (A[reduceE][column] > 0 && A[0][column] > 0) {
					multiple = (-1) * A[reduceE][column] / A[0][column];
				}
				else {
					multiple = (-1) * A[reduceE][column] / A[0][column];
				}
				for (int matrix_row = 0; matrix_row < rows; matrix_row++)
				{
					A[reduceE][matrix_row] += multiple * A[0][matrix_row];
				}

			}


			if (column == 0) {
				for (int i = 1; i < rows; i++)
				{
					for (int j = 1; j < rows; j++)
					{
						DET[i - 1][j - 1] = A[i][j];
					}
				}
			}
			else {
				for (int i = 1; i < rows; i++)
				{
					for (int j = 0; j < column; j++)
					{
						DET[i - 1][j] = A[i][j];
					}
				}
				for (int i = 1; i < rows; i++)
				{
					for (int j = column + 1; j < rows; j++)
					{
						DET[i - 1][j - 1] = A[i][j];
					}
				}
			}

			determin = int_extent(-1, 2 + column) * (A[0][column]) * determinant(DET, rows_B, rows_B);
			return determin;
		}
	}
	return NULL;
}

double Clc::MyForm::algapp(double** A, int rows)
{
	if (rows == 0)
	{
		return NULL;
	}
	else if (rows == 1)
	{
		return A[0][0];
	}
	else if(rows == 2)
	{
		int minor_row, minor_column;
		double alg_append[2][2];
		for (int row = 0; row < 2; row++)
		{
			if (row = 1)
			{
				minor_row = 0;
			}
			else
			{
				minor_row = 1;
			}
			for (int column = 0; column < 2; column++)
			{
				if (column = 1)
				{
					minor_column = 0;
				}
				else
				{
					minor_column = 1;
				}
				alg_append[row][column] = int_extent(-1, row + column) * A[minor_row][minor_column];
			}
		}
	}
}





