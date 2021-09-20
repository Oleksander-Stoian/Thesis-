#pragma once
#include "foo.h"
namespace winform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
			double com = compare();
			if ( com== 0)
			{
				label4->Text = "Ìàòğèö³ îäíàêîâ³";
			}
			else if(com == 1)
			{ 
				label4->Text = "Ìàòğèö³ íå îäíàêîâ³";
			}
			else
			{
				label4->Text = "error";
			}

		}
	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîâåğíóòèñÿÍàçàäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàì³ToolStripMenuItem;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîâåğíóòèñÿÍàçàäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàì³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âèõ³äToolStripMenuItem,
					this->îÏğîãğàì³ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1554, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âèõ³äToolStripMenuItem1,
					this->ïîâåğíóòèñÿÍàçàäToolStripMenuItem
			});
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			// 
			// âèõ³äToolStripMenuItem1
			// 
			this->âèõ³äToolStripMenuItem1->Name = L"âèõ³äToolStripMenuItem1";
			this->âèõ³äToolStripMenuItem1->Size = System::Drawing::Size(179, 22);
			this->âèõ³äToolStripMenuItem1->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm2::âèõ³äToolStripMenuItem1_Click);
			// 
			// ïîâåğíóòèñÿÍàçàäToolStripMenuItem
			// 
			this->ïîâåğíóòèñÿÍàçàäToolStripMenuItem->Name = L"ïîâåğíóòèñÿÍàçàäToolStripMenuItem";
			this->ïîâåğíóòèñÿÍàçàäToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->ïîâåğíóòèñÿÍàçàäToolStripMenuItem->Text = L"Ïîâåğíóòèñÿ íàçàä";
			this->ïîâåğíóòèñÿÍàçàäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::ïîâåğíóòèñÿÍàçàäToolStripMenuItem_Click);
			// 
			// îÏğîãğàì³ToolStripMenuItem
			// 
			this->îÏğîãğàì³ToolStripMenuItem->Name = L"îÏğîãğàì³ToolStripMenuItem";
			this->îÏğîãğàì³ToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->îÏğîãğàì³ToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->îÏğîãğàì³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::îÏğîãğàì³ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(331, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ìàòğèöÿ 1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(761, 540);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(779, 59);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(763, 540);
			this->dataGridView2->TabIndex = 4;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView2_CellContentClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1206, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ìàòğèöà 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(434, 422);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(760, 663);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1554, 738);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âèõ³äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void âèõ³äToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïîâåğíóòèñÿÍàçàäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void îÏğîãğàì³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	
	public: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	
	public:	  void lol();
		  void ShowC(int N_u, int N_y, double** matrixC, double** matrixG);

private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);


public: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
