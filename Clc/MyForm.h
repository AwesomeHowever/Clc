#pragma once

namespace Clc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridViewA;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRows;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownColumns;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonChange;
	private: System::Windows::Forms::TextBox^ textBoxComon;
	private: System::Windows::Forms::TextBox^ textBoxSecond;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxK;
	private: System::Windows::Forms::Button^ buttonReplace;
	private: System::Windows::Forms::TextBox^ textBoxFir;
	private: System::Windows::Forms::TextBox^ textBoxSec;
	private: System::Windows::Forms::Button^ buttonMultStr;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxMultStr;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxMultK;
	private: System::Windows::Forms::Button^ buttonUdo;
	private: System::Windows::Forms::Button^ buttonTriangle;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelDet;
	private: System::Windows::Forms::Button^ buttonTest;
	 System::Windows::Forms::Label^ labelTest;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewA = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDownRows = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownColumns = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->textBoxComon = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSecond = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxK = (gcnew System::Windows::Forms::TextBox());
			this->buttonReplace = (gcnew System::Windows::Forms::Button());
			this->textBoxFir = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSec = (gcnew System::Windows::Forms::TextBox());
			this->buttonMultStr = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxMultStr = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxMultK = (gcnew System::Windows::Forms::TextBox());
			this->buttonUdo = (gcnew System::Windows::Forms::Button());
			this->buttonTriangle = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelDet = (gcnew System::Windows::Forms::Label());
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->labelTest = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRows))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownColumns))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewA
			// 
			this->dataGridViewA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridViewA->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewA->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridViewA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewA->Location = System::Drawing::Point(28, 17);
			this->dataGridViewA->MaximumSize = System::Drawing::Size(10000, 10000);
			this->dataGridViewA->Name = L"dataGridViewA";
			this->dataGridViewA->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridViewA->Size = System::Drawing::Size(310, 231);
			this->dataGridViewA->TabIndex = 3;
			// 
			// numericUpDownRows
			// 
			this->numericUpDownRows->Location = System::Drawing::Point(108, 269);
			this->numericUpDownRows->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownRows->Name = L"numericUpDownRows";
			this->numericUpDownRows->Size = System::Drawing::Size(67, 20);
			this->numericUpDownRows->TabIndex = 1;
			this->numericUpDownRows->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownRows->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownRows_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 267);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Строки";
			// 
			// numericUpDownColumns
			// 
			this->numericUpDownColumns->Location = System::Drawing::Point(272, 268);
			this->numericUpDownColumns->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownColumns->Name = L"numericUpDownColumns";
			this->numericUpDownColumns->Size = System::Drawing::Size(67, 20);
			this->numericUpDownColumns->TabIndex = 3;
			this->numericUpDownColumns->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownColumns->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownColumns_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(203, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Столбцы";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(218, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сгенерировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Location = System::Drawing::Point(371, 21);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(114, 29);
			this->buttonChange->TabIndex = 6;
			this->buttonChange->Text = L"Прибавить";
			this->buttonChange->UseVisualStyleBackColor = true;
			this->buttonChange->Click += gcnew System::EventHandler(this, &MyForm::buttonChange_Click);
			// 
			// textBoxComon
			// 
			this->textBoxComon->Location = System::Drawing::Point(464, 68);
			this->textBoxComon->Name = L"textBoxComon";
			this->textBoxComon->Size = System::Drawing::Size(45, 20);
			this->textBoxComon->TabIndex = 7;
			// 
			// textBoxSecond
			// 
			this->textBoxSecond->Location = System::Drawing::Point(464, 106);
			this->textBoxSecond->Name = L"textBoxSecond";
			this->textBoxSecond->Size = System::Drawing::Size(45, 20);
			this->textBoxSecond->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(371, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"опорная строка";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(371, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"прибавить к";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(515, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"строке";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(371, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"коэффициент";
			// 
			// textBoxK
			// 
			this->textBoxK->Location = System::Drawing::Point(464, 145);
			this->textBoxK->Name = L"textBoxK";
			this->textBoxK->Size = System::Drawing::Size(45, 20);
			this->textBoxK->TabIndex = 12;
			// 
			// buttonReplace
			// 
			this->buttonReplace->Location = System::Drawing::Point(375, 185);
			this->buttonReplace->Name = L"buttonReplace";
			this->buttonReplace->Size = System::Drawing::Size(109, 29);
			this->buttonReplace->TabIndex = 14;
			this->buttonReplace->Text = L"Поменять строки";
			this->buttonReplace->UseVisualStyleBackColor = true;
			this->buttonReplace->Click += gcnew System::EventHandler(this, &MyForm::buttonReplace_Click);
			// 
			// textBoxFir
			// 
			this->textBoxFir->Location = System::Drawing::Point(374, 230);
			this->textBoxFir->Name = L"textBoxFir";
			this->textBoxFir->Size = System::Drawing::Size(48, 20);
			this->textBoxFir->TabIndex = 15;
			// 
			// textBoxSec
			// 
			this->textBoxSec->Location = System::Drawing::Point(437, 230);
			this->textBoxSec->Name = L"textBoxSec";
			this->textBoxSec->Size = System::Drawing::Size(48, 20);
			this->textBoxSec->TabIndex = 16;
			// 
			// buttonMultStr
			// 
			this->buttonMultStr->Location = System::Drawing::Point(568, 17);
			this->buttonMultStr->Name = L"buttonMultStr";
			this->buttonMultStr->Size = System::Drawing::Size(103, 44);
			this->buttonMultStr->TabIndex = 17;
			this->buttonMultStr->Text = L"Умножить строку на число";
			this->buttonMultStr->UseVisualStyleBackColor = true;
			this->buttonMultStr->Click += gcnew System::EventHandler(this, &MyForm::buttonMultStr_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(573, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Строка:";
			// 
			// textBoxMultStr
			// 
			this->textBoxMultStr->Location = System::Drawing::Point(662, 75);
			this->textBoxMultStr->Name = L"textBoxMultStr";
			this->textBoxMultStr->Size = System::Drawing::Size(52, 20);
			this->textBoxMultStr->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(573, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"коэффициент";
			// 
			// textBoxMultK
			// 
			this->textBoxMultK->Location = System::Drawing::Point(663, 112);
			this->textBoxMultK->Name = L"textBoxMultK";
			this->textBoxMultK->Size = System::Drawing::Size(50, 20);
			this->textBoxMultK->TabIndex = 21;
			// 
			// buttonUdo
			// 
			this->buttonUdo->Location = System::Drawing::Point(563, 183);
			this->buttonUdo->Name = L"buttonUdo";
			this->buttonUdo->Size = System::Drawing::Size(107, 47);
			this->buttonUdo->TabIndex = 22;
			this->buttonUdo->Text = L"Отменить действие";
			this->buttonUdo->UseVisualStyleBackColor = true;
			this->buttonUdo->Click += gcnew System::EventHandler(this, &MyForm::buttonUdo_Click);
			// 
			// buttonTriangle
			// 
			this->buttonTriangle->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTriangle->Location = System::Drawing::Point(51, 301);
			this->buttonTriangle->Name = L"buttonTriangle";
			this->buttonTriangle->Size = System::Drawing::Size(142, 49);
			this->buttonTriangle->TabIndex = 23;
			this->buttonTriangle->Text = L"Посчитать определитель";
			this->buttonTriangle->UseVisualStyleBackColor = true;
			this->buttonTriangle->Click += gcnew System::EventHandler(this, &MyForm::buttonTriangle_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(53, 367);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 18);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Определитель:";
			// 
			// labelDet
			// 
			this->labelDet->AutoSize = true;
			this->labelDet->Location = System::Drawing::Point(157, 370);
			this->labelDet->Name = L"labelDet";
			this->labelDet->Size = System::Drawing::Size(0, 13);
			this->labelDet->TabIndex = 25;
			// 
			// buttonTest
			// 
			this->buttonTest->Location = System::Drawing::Point(437, 274);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(47, 27);
			this->buttonTest->TabIndex = 26;
			this->buttonTest->Text = L"Тест";
			this->buttonTest->UseVisualStyleBackColor = true;
			this->buttonTest->Click += gcnew System::EventHandler(this, &MyForm::buttonTest_Click);
			// 
			// labelTest
			// 
			this->labelTest->AutoSize = true;
			this->labelTest->Location = System::Drawing::Point(511, 279);
			this->labelTest->Name = L"labelTest";
			this->labelTest->Size = System::Drawing::Size(0, 13);
			this->labelTest->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 400);
			this->Controls->Add(this->labelTest);
			this->Controls->Add(this->buttonTest);
			this->Controls->Add(this->labelDet);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->buttonTriangle);
			this->Controls->Add(this->buttonUdo);
			this->Controls->Add(this->textBoxMultK);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxMultStr);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->buttonMultStr);
			this->Controls->Add(this->textBoxSec);
			this->Controls->Add(this->textBoxFir);
			this->Controls->Add(this->buttonReplace);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxK);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxSecond);
			this->Controls->Add(this->textBoxComon);
			this->Controls->Add(this->buttonChange);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDownColumns);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDownRows);
			this->Controls->Add(this->dataGridViewA);
			this->Name = L"MyForm";
			this->Text = L"МАТРИЦЫ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRows))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownColumns))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void numericUpDownRows_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: void Clc::MyForm::ShowA();
	private: void Clc::MyForm::ShowGrid();
	private: System::Void numericUpDownColumns_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	 double** Clc::MyForm::generation(int rows, int columns);
	 
	 double Clc::MyForm::int_extent(double num, int extent);

		 double Clc::MyForm::determinant(double** A, int rows, int columns);

		 double Clc::MyForm::algapp(double** A, int rows);

	 

private: System::Void buttonChange_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonReplace_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMultStr_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonUdo_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTriangle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTest_Click(System::Object^ sender, System::EventArgs^ e);
};
}
