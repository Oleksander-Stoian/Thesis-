#pragma once

//void giveMat(double** mat, int N_m, int N_l);

namespace winform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограміToolStripMenuItem;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограміToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(0, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(400, 295);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(141, 244);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"rand y(s)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(67, 172);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(192, 15);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Кількість точок виходу y(s):";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(267, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"0";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm1::label9_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(301, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"t";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(181, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"X2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"X1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(289, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 110);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(377, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введіть кординати точки виходу y(s)";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(122, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 28);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Додати точку";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(396, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(435, 295);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(184, 244);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"rand u(s)";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(304, 174);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"0";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm1::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(110, 172);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(186, 15);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Кількість точок входу u(s):";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(350, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"t";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(216, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"X2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(68, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"X1";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(331, 110);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox4_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(205, 110);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 20);
			this->textBox6->TabIndex = 7;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(57, 110);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox5_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(367, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введіть кординати точки входу u(s)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(162, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Додати точку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(703, 507);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->настройкиToolStripMenuItem,
					this->оПрограміToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(832, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->вихідToolStripMenuItem });
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->настройкиToolStripMenuItem->Text = L"Вихід";
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::вихідToolStripMenuItem_Click);
			// 
			// оПрограміToolStripMenuItem
			// 
			this->оПрограміToolStripMenuItem->Name = L"оПрограміToolStripMenuItem";
			this->оПрограміToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->оПрограміToolStripMenuItem->Text = L"Про програму";
			this->оПрограміToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::оПрограміToolStripMenuItem_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(315, 412);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(169, 28);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Додати експеримент";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(292, 373);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(205, 18);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Кількість експериментів:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(503, 373);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(18, 20);
			this->label14->TabIndex = 15;
			this->label14->Text = L"0";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm1::label14_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 561);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e); 
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);//Calculate
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void оПрограміToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e); //N_Y

	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e); //N_U
	
		   

		  


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);//random y(s)
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);//add experiments
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e);//number of experiments


};
}
