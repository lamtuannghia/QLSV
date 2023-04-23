#pragma once

namespace QLSV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for qlsv
	/// </summary>
	public ref class qlsv : public System::Windows::Forms::Form
	{
	public:
		qlsv(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~qlsv()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPageDashboard;
	private: System::Windows::Forms::TabPage^ tabPageStudent;
	private: System::Windows::Forms::TabPage^ tabPageCouse;
	private: System::Windows::Forms::TabPage^ tabPageEnnolment;
	private: System::Windows::Forms::TabPage^ tabPageGrades;
	private: System::Windows::Forms::TabPage^ tabPageSettings;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



	protected:







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageDashboard = (gcnew System::Windows::Forms::TabPage());
			this->tabPageStudent = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPageCouse = (gcnew System::Windows::Forms::TabPage());
			this->tabPageEnnolment = (gcnew System::Windows::Forms::TabPage());
			this->tabPageGrades = (gcnew System::Windows::Forms::TabPage());
			this->tabPageSettings = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPageStudent->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageDashboard);
			this->tabControl1->Controls->Add(this->tabPageStudent);
			this->tabControl1->Controls->Add(this->tabPageCouse);
			this->tabControl1->Controls->Add(this->tabPageEnnolment);
			this->tabControl1->Controls->Add(this->tabPageGrades);
			this->tabControl1->Controls->Add(this->tabPageSettings);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(626, 376);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageDashboard
			// 
			this->tabPageDashboard->Location = System::Drawing::Point(4, 22);
			this->tabPageDashboard->Name = L"tabPageDashboard";
			this->tabPageDashboard->Padding = System::Windows::Forms::Padding(3);
			this->tabPageDashboard->Size = System::Drawing::Size(618, 350);
			this->tabPageDashboard->TabIndex = 0;
			this->tabPageDashboard->Text = L"Dashboard";
			this->tabPageDashboard->UseVisualStyleBackColor = true;
			// 
			// tabPageStudent
			// 
			this->tabPageStudent->Controls->Add(this->dataGridView1);
			this->tabPageStudent->Controls->Add(this->label1);
			this->tabPageStudent->Location = System::Drawing::Point(4, 22);
			this->tabPageStudent->Name = L"tabPageStudent";
			this->tabPageStudent->Padding = System::Windows::Forms::Padding(3);
			this->tabPageStudent->Size = System::Drawing::Size(618, 350);
			this->tabPageStudent->TabIndex = 1;
			this->tabPageStudent->Text = L"Student";
			this->tabPageStudent->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(7, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(393, 117);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"STT";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Mã SV";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Họ và tên";
			this->Column3->Name = L"Column3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Danh sách sinh viên";
			// 
			// tabPageCouse
			// 
			this->tabPageCouse->Location = System::Drawing::Point(4, 22);
			this->tabPageCouse->Name = L"tabPageCouse";
			this->tabPageCouse->Padding = System::Windows::Forms::Padding(3);
			this->tabPageCouse->Size = System::Drawing::Size(618, 350);
			this->tabPageCouse->TabIndex = 2;
			this->tabPageCouse->Text = L"Couse";
			this->tabPageCouse->UseVisualStyleBackColor = true;
			// 
			// tabPageEnnolment
			// 
			this->tabPageEnnolment->Location = System::Drawing::Point(4, 22);
			this->tabPageEnnolment->Name = L"tabPageEnnolment";
			this->tabPageEnnolment->Padding = System::Windows::Forms::Padding(3);
			this->tabPageEnnolment->Size = System::Drawing::Size(618, 350);
			this->tabPageEnnolment->TabIndex = 3;
			this->tabPageEnnolment->Text = L"Ennollment";
			this->tabPageEnnolment->UseVisualStyleBackColor = true;
			// 
			// tabPageGrades
			// 
			this->tabPageGrades->Location = System::Drawing::Point(4, 22);
			this->tabPageGrades->Name = L"tabPageGrades";
			this->tabPageGrades->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGrades->Size = System::Drawing::Size(618, 350);
			this->tabPageGrades->TabIndex = 4;
			this->tabPageGrades->Text = L"Grades";
			this->tabPageGrades->UseVisualStyleBackColor = true;
			// 
			// tabPageSettings
			// 
			this->tabPageSettings->Location = System::Drawing::Point(4, 22);
			this->tabPageSettings->Name = L"tabPageSettings";
			this->tabPageSettings->Padding = System::Windows::Forms::Padding(3);
			this->tabPageSettings->Size = System::Drawing::Size(618, 350);
			this->tabPageSettings->TabIndex = 5;
			this->tabPageSettings->Text = L"Settings";
			this->tabPageSettings->UseVisualStyleBackColor = true;
			// 
			// qlsv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 400);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"qlsv";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Manangement";
			this->tabControl1->ResumeLayout(false);
			this->tabPageStudent->ResumeLayout(false);
			this->tabPageStudent->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
