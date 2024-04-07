#pragma once

namespace UniLab2 {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: System::DateTime startTime;
	private: System::DateTime endTime;
	private: System::Windows::Forms::Timer^ timer;

	public:
		MainForm(void)
		{
			InitializeComponent();
			timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 1000;
			timer->Tick += gcnew System::EventHandler(this, &MainForm::UpdateTimer);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: array<long>^ arr;

	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::RadioButton^ arrType1Btn;
	private: System::Windows::Forms::RadioButton^ arrType2Btn;
	private: System::Windows::Forms::RadioButton^ arrType3Btn;
	private: System::Windows::Forms::RadioButton^ radixSortBtn;
	private: System::Windows::Forms::RadioButton^ insertionSortBtn;
	private: System::Windows::Forms::RadioButton^ bubbleSortBtn;
	private: System::Windows::Forms::RadioButton^ shakerSortBtn;

	private: System::Windows::Forms::RadioButton^ quickSortBtn;
	private: System::Windows::Forms::Button^ runBtn;
	private: System::Windows::Forms::Button^ resetBtn;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ timerLabel;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ inputLabel;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ outputLabel;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->arrType1Btn = (gcnew System::Windows::Forms::RadioButton());
			this->arrType2Btn = (gcnew System::Windows::Forms::RadioButton());
			this->arrType3Btn = (gcnew System::Windows::Forms::RadioButton());
			this->radixSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->insertionSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->bubbleSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->shakerSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->quickSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->runBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timerLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->inputLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->outputLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->nameLabel->Location = System::Drawing::Point(12, 9);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(195, 20);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"Сортировка массивов";
			// 
			// arrType1Btn
			// 
			this->arrType1Btn->AutoSize = true;
			this->arrType1Btn->Location = System::Drawing::Point(6, 18);
			this->arrType1Btn->Name = L"arrType1Btn";
			this->arrType1Btn->Size = System::Drawing::Size(38, 17);
			this->arrType1Btn->TabIndex = 2;
			this->arrType1Btn->Text = L"A1";
			this->arrType1Btn->UseVisualStyleBackColor = true;
			this->arrType1Btn->CheckedChanged += gcnew System::EventHandler(this, &MainForm::arrType1Btn_CheckedChanged);
			// 
			// arrType2Btn
			// 
			this->arrType2Btn->AutoSize = true;
			this->arrType2Btn->Location = System::Drawing::Point(6, 41);
			this->arrType2Btn->Name = L"arrType2Btn";
			this->arrType2Btn->Size = System::Drawing::Size(38, 17);
			this->arrType2Btn->TabIndex = 3;
			this->arrType2Btn->Text = L"A2";
			this->arrType2Btn->UseVisualStyleBackColor = true;
			this->arrType2Btn->CheckedChanged += gcnew System::EventHandler(this, &MainForm::arrType2Btn_CheckedChanged);
			// 
			// arrType3Btn
			// 
			this->arrType3Btn->AutoSize = true;
			this->arrType3Btn->Location = System::Drawing::Point(6, 64);
			this->arrType3Btn->Name = L"arrType3Btn";
			this->arrType3Btn->Size = System::Drawing::Size(38, 17);
			this->arrType3Btn->TabIndex = 4;
			this->arrType3Btn->Text = L"A3";
			this->arrType3Btn->UseVisualStyleBackColor = true;
			this->arrType3Btn->CheckedChanged += gcnew System::EventHandler(this, &MainForm::arrType3Btn_CheckedChanged);
			// 
			// radixSortBtn
			// 
			this->radixSortBtn->AutoSize = true;
			this->radixSortBtn->Location = System::Drawing::Point(6, 19);
			this->radixSortBtn->Name = L"radixSortBtn";
			this->radixSortBtn->Size = System::Drawing::Size(93, 17);
			this->radixSortBtn->TabIndex = 6;
			this->radixSortBtn->Text = L"Поразрядная";
			this->radixSortBtn->UseVisualStyleBackColor = true;
			// 
			// insertionSortBtn
			// 
			this->insertionSortBtn->AutoSize = true;
			this->insertionSortBtn->Location = System::Drawing::Point(6, 42);
			this->insertionSortBtn->Name = L"insertionSortBtn";
			this->insertionSortBtn->Size = System::Drawing::Size(81, 17);
			this->insertionSortBtn->TabIndex = 7;
			this->insertionSortBtn->Text = L"Вставками";
			this->insertionSortBtn->UseVisualStyleBackColor = true;
			// 
			// bubbleSortBtn
			// 
			this->bubbleSortBtn->AutoSize = true;
			this->bubbleSortBtn->Location = System::Drawing::Point(6, 65);
			this->bubbleSortBtn->Name = L"bubbleSortBtn";
			this->bubbleSortBtn->Size = System::Drawing::Size(94, 17);
			this->bubbleSortBtn->TabIndex = 8;
			this->bubbleSortBtn->Text = L"Пузырьковая";
			this->bubbleSortBtn->UseVisualStyleBackColor = true;
			// 
			// shakerSortBtn
			// 
			this->shakerSortBtn->AutoSize = true;
			this->shakerSortBtn->Location = System::Drawing::Point(6, 88);
			this->shakerSortBtn->Name = L"shakerSortBtn";
			this->shakerSortBtn->Size = System::Drawing::Size(64, 17);
			this->shakerSortBtn->TabIndex = 9;
			this->shakerSortBtn->Text = L"Шейкер";
			this->shakerSortBtn->UseVisualStyleBackColor = true;
			// 
			// quickSortBtn
			// 
			this->quickSortBtn->AutoSize = true;
			this->quickSortBtn->Location = System::Drawing::Point(6, 111);
			this->quickSortBtn->Name = L"quickSortBtn";
			this->quickSortBtn->Size = System::Drawing::Size(69, 17);
			this->quickSortBtn->TabIndex = 10;
			this->quickSortBtn->Text = L"Быстрая";
			this->quickSortBtn->UseVisualStyleBackColor = true;
			// 
			// runBtn
			// 
			this->runBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->runBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->runBtn->Location = System::Drawing::Point(6, 251);
			this->runBtn->Name = L"runBtn";
			this->runBtn->Size = System::Drawing::Size(179, 54);
			this->runBtn->TabIndex = 11;
			this->runBtn->TabStop = false;
			this->runBtn->Text = L"Запуск";
			this->runBtn->UseVisualStyleBackColor = false;
			this->runBtn->Click += gcnew System::EventHandler(this, &MainForm::runBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->resetBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->resetBtn->Location = System::Drawing::Point(6, 311);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(179, 36);
			this->resetBtn->TabIndex = 12;
			this->resetBtn->TabStop = false;
			this->resetBtn->Text = L"Сброс";
			this->resetBtn->UseVisualStyleBackColor = false;
			this->resetBtn->Click += gcnew System::EventHandler(this, &MainForm::resetBtn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->resetBtn);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->runBtn);
			this->groupBox1->Location = System::Drawing::Point(16, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(191, 411);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->arrType2Btn);
			this->groupBox5->Controls->Add(this->arrType3Btn);
			this->groupBox5->Controls->Add(this->arrType1Btn);
			this->groupBox5->Location = System::Drawing::Point(9, 14);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(176, 91);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Вариант массива";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->insertionSortBtn);
			this->groupBox4->Controls->Add(this->radixSortBtn);
			this->groupBox4->Controls->Add(this->bubbleSortBtn);
			this->groupBox4->Controls->Add(this->shakerSortBtn);
			this->groupBox4->Controls->Add(this->quickSortBtn);
			this->groupBox4->Location = System::Drawing::Point(9, 111);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(176, 134);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Вариант сортировки";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(6, 382);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 23);
			this->button2->TabIndex = 14;
			this->button2->TabStop = false;
			this->button2->Text = L"Проверка ошибок";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(6, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 23);
			this->button1->TabIndex = 13;
			this->button1->TabStop = false;
			this->button1->Text = L"Информация";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// timerLabel
			// 
			this->timerLabel->AutoSize = true;
			this->timerLabel->Location = System::Drawing::Point(230, 419);
			this->timerLabel->Name = L"timerLabel";
			this->timerLabel->Size = System::Drawing::Size(170, 13);
			this->timerLabel->TabIndex = 16;
			this->timerLabel->Text = L"Время выполнения сортировки:";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->inputLabel);
			this->panel1->Location = System::Drawing::Point(6, 14);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(225, 356);
			this->panel1->TabIndex = 17;
			// 
			// inputLabel
			// 
			this->inputLabel->AutoSize = true;
			this->inputLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->inputLabel->Location = System::Drawing::Point(3, 9);
			this->inputLabel->Name = L"inputLabel";
			this->inputLabel->Size = System::Drawing::Size(208, 26);
			this->inputLabel->TabIndex = 0;
			this->inputLabel->Text = L"Здесь будет отображаться выбранный \r\nвами неотсортированный массив";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->panel1);
			this->groupBox2->Location = System::Drawing::Point(233, 32);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(236, 376);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Входные данные";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->panel2);
			this->groupBox3->Location = System::Drawing::Point(475, 32);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(236, 376);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Результат";
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->outputLabel);
			this->panel2->Location = System::Drawing::Point(6, 14);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(225, 356);
			this->panel2->TabIndex = 17;
			// 
			// outputLabel
			// 
			this->outputLabel->AutoSize = true;
			this->outputLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->outputLabel->Location = System::Drawing::Point(3, 9);
			this->outputLabel->Name = L"outputLabel";
			this->outputLabel->Size = System::Drawing::Size(208, 26);
			this->outputLabel->TabIndex = 0;
			this->outputLabel->Text = L"Здесь будет отображаться выбранный \r\nвами массив в отсортированном виде";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(725, 455);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->timerLabel);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->nameLabel);
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"Лабораторная работа №2 - Сортировка";
			this->groupBox1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void UpdateTimer(Object^ sender, EventArgs^ e)
		{
			TimeSpan elapsedTime = endTime - startTime;
			timerLabel->Text = "Время выполнения сортировки: " + elapsedTime.ToString("mm\\:ss\\.ff");
		}

		private: System::Void arrType1Btn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			long massA1[] = { 31295, 12351, 21840, 27420, 19503, 27968, 31262, 3202, 20171, 28226, 9432, 10835, 9633, 14889, 11302 };
			arr = gcnew array < long > ((sizeof(massA1) / sizeof(massA1[0])));
			for (int i = 0; i < (sizeof(massA1) / sizeof(massA1[0])); i++) {
				arr[i] = massA1[i];
			}


			this->inputLabel->Text = "";
			this->SuspendLayout();
			this->arrType1Btn->Enabled = false;
			this->arrType2Btn->Enabled = false;
			this->arrType3Btn->Enabled = false;
			this->radixSortBtn->Enabled = false;
			this->insertionSortBtn->Enabled = false;
			this->bubbleSortBtn->Enabled = false;
			this->shakerSortBtn->Enabled = false;
			this->quickSortBtn->Enabled = false;

			for (int i = 0; i < (sizeof(massA1) / sizeof(massA1[0])); ++i) {

				this->inputLabel->Text += massA1[i].ToString() + " ";

				if ((i + 1) % 6 == 0) {
					this->inputLabel->Text += "\n";
				}

			}
			this->ResumeLayout();
			this->arrType1Btn->Enabled = true;
			this->arrType2Btn->Enabled = true;
			this->arrType3Btn->Enabled = true;
			this->radixSortBtn->Enabled = true;
			this->insertionSortBtn->Enabled = true;
			this->bubbleSortBtn->Enabled = true;
			this->shakerSortBtn->Enabled = true;
			this->quickSortBtn->Enabled = true;
		}

		private: System::Void arrType2Btn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			long massA2[] = { 19, 15, 16, 20, 20, 13, 12, 12, 10, 20, 17, 20, 19, 16, 13, 19, 13, 14, 13, 19, 17, 13, 17, 20 };
			arr = gcnew array < long >((sizeof(massA2) / sizeof(massA2[0])));
			for (int i = 0; i < (sizeof(massA2) / sizeof(massA2[0])); i++) {
				arr[i] = massA2[i];
			}

			this->inputLabel->Text = "";
			this->SuspendLayout();
			this->arrType1Btn->Enabled = false;
			this->arrType2Btn->Enabled = false;
			this->arrType3Btn->Enabled = false;
			this->radixSortBtn->Enabled = false;
			this->insertionSortBtn->Enabled = false;
			this->bubbleSortBtn->Enabled = false;
			this->shakerSortBtn->Enabled = false;
			this->quickSortBtn->Enabled = false;

			for (int i = 0; i < (sizeof(massA2) / sizeof(massA2[0])); ++i) {
				
				this->inputLabel->Text += massA2[i].ToString() + " ";

				if ((i + 1) % 13 == 0) {
					this->inputLabel->Text += "\n";
				}

			}
			this->ResumeLayout();
			this->arrType1Btn->Enabled = true;
			this->arrType2Btn->Enabled = true;
			this->arrType3Btn->Enabled = true;
			this->radixSortBtn->Enabled = true;
			this->insertionSortBtn->Enabled = true;
			this->bubbleSortBtn->Enabled = true;
			this->shakerSortBtn->Enabled = true;
			this->quickSortBtn->Enabled = true;
		}

		private: System::Void arrType3Btn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

			long massA3[] = { 2358, 4552, 4993, 7671, 27107, 13734, 12151, 10149, 22378, 25503, 32546, 29733 };
			arr = gcnew array < long >((sizeof(massA3) / sizeof(massA3[0])));
			for (int i = 0; i < (sizeof(massA3) / sizeof(massA3[0])); i++) {
				arr[i] = massA3[i];
			}
			
			this->inputLabel->Text = "";
			this->SuspendLayout();
			this->arrType1Btn->Enabled = false;
			this->arrType2Btn->Enabled = false;
			this->arrType3Btn->Enabled = false;
			this->radixSortBtn->Enabled = false;
			this->insertionSortBtn->Enabled = false;
			this->bubbleSortBtn->Enabled = false;
			this->shakerSortBtn->Enabled = false;
			this->quickSortBtn->Enabled = false;

			for (int i = 0; i < (sizeof(massA3) / sizeof(massA3[0])); ++i) {

				this->inputLabel->Text += massA3[i].ToString() + " ";

				if ((i + 1) % 6 == 0) {
					this->inputLabel->Text += "\n";
				}

			}
			this->ResumeLayout();
			this->arrType1Btn->Enabled = true;
			this->arrType2Btn->Enabled = true;
			this->arrType3Btn->Enabled = true;
			this->radixSortBtn->Enabled = true;
			this->insertionSortBtn->Enabled = true;
			this->bubbleSortBtn->Enabled = true;
			this->shakerSortBtn->Enabled = true;
			this->quickSortBtn->Enabled = true;
		}

		void radixSort(array<long>^ arr) {
			startTime = System::DateTime::Now;
			int n = arr->Length;
			array<long>^ output = gcnew array<long>(n);
			long max = arr[0];
			for (int i = 1; i < n; i++) {
				if (arr[i] > max)
					max = arr[i];
			}
			for (long exp = 1; max / exp > 0; exp *= 10) {
				array<int>^ count = gcnew array<int>(10);
				for (int i = 0; i < 10; i++)
					count[i] = 0;
				for (int i = 0; i < n; i++)
					count[(arr[i] / exp) % 10]++;
				for (int i = 1; i < 10; i++)
					count[i] += count[i - 1];
				for (int i = n - 1; i >= 0; i--) {
					output[count[(arr[i] / exp) % 10] - 1] = arr[i];
					count[(arr[i] / exp) % 10]--;
				}
				for (int i = 0; i < n; i++)
					arr[i] = output[i];
			}
			this->outputLabel->Text = "";
			for (int i = 0; i < arr->Length; ++i) {
				this->outputLabel->Text += arr[i].ToString() + " ";
				if ((i + 1) % 6 == 0) {
					this->outputLabel->Text += "\n";
				}
			}
			endTime = System::DateTime::Now;
			TimeSpan elapsedTime = endTime - startTime;
			timerLabel->Text = "Время выполнения сортировки: " + elapsedTime.ToString("mm\\:ss\\.ff");
		}

		void insertionSort(array<long>^ arr) {
			startTime = System::DateTime::Now;
			int n = arr->Length;
			for (int i = 1; i < n; i++) {
				long key = arr[i];
				int j = i - 1;
				while (j >= 0 && arr[j] > key) {
					arr[j + 1] = arr[j];
					j--;
				}
				arr[j + 1] = key;

			}
			this->outputLabel->Text = "";
			for (int i = 0; i < arr->Length; ++i) {
				this->outputLabel->Text += arr[i].ToString() + " ";
				if ((i + 1) % 6 == 0) {
					this->outputLabel->Text += "\n";
				}
			}
			endTime = System::DateTime::Now;
			TimeSpan elapsedTime = endTime - startTime;
			timerLabel->Text = "Время выполнения сортировки: " + elapsedTime.ToString("mm\\:ss\\.ff");
		}


		void bubbleSort(array<long>^ arr) {
			startTime = System::DateTime::Now;
			int n = arr->Length;
			for (int i = 0; i < n - 1; i++) {
				for (int j = 0; j < n - i - 1; j++) {
					if (arr[j] > arr[j + 1]) {
						long temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
				}
			}
			this->outputLabel->Text = "";
			for (int i = 0; i < arr->Length; ++i) {
				this->outputLabel->Text += arr[i].ToString() + " ";
				if ((i + 1) % 6 == 0) {
					this->outputLabel->Text += "\n";
				}
			}
			endTime = System::DateTime::Now;
			TimeSpan elapsedTime = endTime - startTime;
			timerLabel->Text = "Время выполнения сортировки: " + elapsedTime.ToString("mm\\:ss\\.ff");
		}

		void shakerSort(array<long>^ arr) {
			startTime = System::DateTime::Now;
			int n = arr->Length;
			int left = 0, right = n - 1;
			while (left <= right) {
				for (int i = left; i < right; i++) {
					if (arr[i] > arr[i + 1]) {
						long temp = arr[i];
						arr[i] = arr[i + 1];
						arr[i + 1] = temp;
					}
				}
				right--;
				for (int i = right; i > left; i--) {
					if (arr[i] < arr[i - 1]) {
						long temp = arr[i];
						arr[i] = arr[i - 1];
						arr[i - 1] = temp;
					}
				}
				left++;
			}
			this->outputLabel->Text = "";
			for (int i = 0; i < arr->Length; ++i) {
				this->outputLabel->Text += arr[i].ToString() + " ";
				if ((i + 1) % 6 == 0) {
					this->outputLabel->Text += "\n";
				}
			}
			endTime = System::DateTime::Now;
			TimeSpan elapsedTime = endTime - startTime;
			timerLabel->Text = "Время выполнения сортировки: " + elapsedTime.ToString("mm\\:ss\\.ff");
		}

		void quickSort(array<long>^ arr, int low, int high) {
			startTime = System::DateTime::Now;
			if (low < high) {
				int pi = partition(arr, low, high);
				quickSort(arr, low, pi - 1);
				quickSort(arr, pi + 1, high);
			}
			this->outputLabel->Text = "";
			for (int i = 0; i < arr->Length; ++i) {
				this->outputLabel->Text += arr[i].ToString() + " ";
				if ((i + 1) % 6 == 0) {
					this->outputLabel->Text += "\n";
				}
			}
			endTime = System::DateTime::Now;
			TimeSpan elapsedTime = endTime - startTime;
			timerLabel->Text = "Время выполнения сортировки: " + elapsedTime.ToString("mm\\:ss\\.ff");
		}

		int partition(array<long>^ arr, int low, int high) {
			long pivot = arr[high];
			int i = low - 1;
			for (int j = low; j <= high - 1; j++) {
				if (arr[j] < pivot) {
					i++;
					long temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
			long temp = arr[i + 1];
			arr[i + 1] = arr[high];
			arr[high] = temp;
			return i + 1;
		}



		private: System::Void runBtn_Click(System::Object^ sender, System::EventArgs^ e) {

			if (radixSortBtn->Checked) {
				radixSort(arr);
			}
			else if (insertionSortBtn->Checked) {
				insertionSort(arr);
			}
			else if (bubbleSortBtn->Checked) {
				bubbleSort(arr);
			}
			else if (shakerSortBtn->Checked) {
				shakerSort(arr);
			}
			else if (quickSortBtn->Checked) {
				quickSort(arr, 0, arr->Length - 1);
			}
			else {
				MessageBox::Show("Выберите метод сортировки!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		private: System::Void resetBtn_Click(System::Object^ sender, System::EventArgs^ e) {

			arrType1Btn->Checked = false;
			arrType2Btn->Checked = false;
			arrType3Btn->Checked = false;
			radixSortBtn->Checked = false;
			insertionSortBtn->Checked = false;
			bubbleSortBtn->Checked = false;
			shakerSortBtn->Checked = false;
			quickSortBtn->Checked = false;

			timerLabel->Text = "Время выполнения сортиовки:";
			outputLabel->Text = "Здесь будет отображаться выбранный\nвами массив в отсортированном виде";
			inputLabel->Text = "Здесь будет отображаться выбранный\nвами неотсортированный массив";

			timer->Stop();
		}
};
}
