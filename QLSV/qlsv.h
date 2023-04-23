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
	private: System::Windows::Forms::Panel^ panel_menu;
	protected:
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnSettings;
	private: System::Windows::Forms::Button^ btnScore;
	private: System::Windows::Forms::Button^ btnEnrollments;
	private: System::Windows::Forms::Panel^ panel_course;
	private: System::Windows::Forms::Button^ btnManageCourse;
	private: System::Windows::Forms::Button^ btnNewCourse;
	private: System::Windows::Forms::Button^ btnCourse;
	private: System::Windows::Forms::Panel^ panel_student;
	private: System::Windows::Forms::Button^ btnStatus;
	private: System::Windows::Forms::Button^ btnManageStudent;
	private: System::Windows::Forms::Button^ btnRegistration;
	private: System::Windows::Forms::Button^ btnStudent;
	private: System::Windows::Forms::Button^ btnDashboard;
	private: System::Windows::Forms::Panel^ panel_logo;


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
			this->panel_menu = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnScore = (gcnew System::Windows::Forms::Button());
			this->btnEnrollments = (gcnew System::Windows::Forms::Button());
			this->panel_course = (gcnew System::Windows::Forms::Panel());
			this->btnManageCourse = (gcnew System::Windows::Forms::Button());
			this->btnNewCourse = (gcnew System::Windows::Forms::Button());
			this->btnCourse = (gcnew System::Windows::Forms::Button());
			this->panel_student = (gcnew System::Windows::Forms::Panel());
			this->btnStatus = (gcnew System::Windows::Forms::Button());
			this->btnManageStudent = (gcnew System::Windows::Forms::Button());
			this->btnRegistration = (gcnew System::Windows::Forms::Button());
			this->btnStudent = (gcnew System::Windows::Forms::Button());
			this->btnDashboard = (gcnew System::Windows::Forms::Button());
			this->panel_logo = (gcnew System::Windows::Forms::Panel());
			this->panel_menu->SuspendLayout();
			this->panel_course->SuspendLayout();
			this->panel_student->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_menu
			// 
			this->panel_menu->AutoScroll = true;
			this->panel_menu->BackColor = System::Drawing::Color::LemonChiffon;
			this->panel_menu->Controls->Add(this->btnExit);
			this->panel_menu->Controls->Add(this->btnSettings);
			this->panel_menu->Controls->Add(this->btnScore);
			this->panel_menu->Controls->Add(this->btnEnrollments);
			this->panel_menu->Controls->Add(this->panel_course);
			this->panel_menu->Controls->Add(this->btnCourse);
			this->panel_menu->Controls->Add(this->panel_student);
			this->panel_menu->Controls->Add(this->btnStudent);
			this->panel_menu->Controls->Add(this->btnDashboard);
			this->panel_menu->Controls->Add(this->panel_logo);
			this->panel_menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_menu->Location = System::Drawing::Point(0, 0);
			this->panel_menu->Name = L"panel_menu";
			this->panel_menu->Size = System::Drawing::Size(181, 536);
			this->panel_menu->TabIndex = 2;
			// 
			// btnExit
			// 
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(0, 524);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Padding = System::Windows::Forms::Padding(7, 0, 0, 0);
			this->btnExit->Size = System::Drawing::Size(164, 42);
			this->btnExit->TabIndex = 14;
			this->btnExit->Text = L"Exit";
			this->btnExit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->UseVisualStyleBackColor = true;
			// 
			// btnSettings
			// 
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSettings->FlatAppearance->BorderSize = 0;
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSettings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnSettings->Location = System::Drawing::Point(0, 482);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Padding = System::Windows::Forms::Padding(7, 0, 0, 0);
			this->btnSettings->Size = System::Drawing::Size(164, 42);
			this->btnSettings->TabIndex = 13;
			this->btnSettings->Text = L"Settings";
			this->btnSettings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSettings->UseVisualStyleBackColor = true;
			// 
			// btnScore
			// 
			this->btnScore->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnScore->FlatAppearance->BorderSize = 0;
			this->btnScore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnScore->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnScore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnScore->Location = System::Drawing::Point(0, 440);
			this->btnScore->Name = L"btnScore";
			this->btnScore->Padding = System::Windows::Forms::Padding(7, 0, 0, 0);
			this->btnScore->Size = System::Drawing::Size(164, 42);
			this->btnScore->TabIndex = 12;
			this->btnScore->Text = L"Score";
			this->btnScore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnScore->UseVisualStyleBackColor = true;
			// 
			// btnEnrollments
			// 
			this->btnEnrollments->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEnrollments->FlatAppearance->BorderSize = 0;
			this->btnEnrollments->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrollments->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnrollments->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnEnrollments->Location = System::Drawing::Point(0, 398);
			this->btnEnrollments->Name = L"btnEnrollments";
			this->btnEnrollments->Padding = System::Windows::Forms::Padding(7, 0, 0, 0);
			this->btnEnrollments->Size = System::Drawing::Size(164, 42);
			this->btnEnrollments->TabIndex = 10;
			this->btnEnrollments->Text = L"Enrollments";
			this->btnEnrollments->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEnrollments->UseVisualStyleBackColor = true;
			// 
			// panel_course
			// 
			this->panel_course->Controls->Add(this->btnManageCourse);
			this->panel_course->Controls->Add(this->btnNewCourse);
			this->panel_course->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_course->Location = System::Drawing::Point(0, 324);
			this->panel_course->Name = L"panel_course";
			this->panel_course->Size = System::Drawing::Size(164, 74);
			this->panel_course->TabIndex = 9;
			// 
			// btnManageCourse
			// 
			this->btnManageCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnManageCourse->FlatAppearance->BorderSize = 0;
			this->btnManageCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnManageCourse->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnManageCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnManageCourse->Location = System::Drawing::Point(0, 29);
			this->btnManageCourse->Name = L"btnManageCourse";
			this->btnManageCourse->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->btnManageCourse->Size = System::Drawing::Size(164, 29);
			this->btnManageCourse->TabIndex = 1;
			this->btnManageCourse->Text = L"Manage Course";
			this->btnManageCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnManageCourse->UseVisualStyleBackColor = true;
			// 
			// btnNewCourse
			// 
			this->btnNewCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNewCourse->FlatAppearance->BorderSize = 0;
			this->btnNewCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNewCourse->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNewCourse->Location = System::Drawing::Point(0, 0);
			this->btnNewCourse->Name = L"btnNewCourse";
			this->btnNewCourse->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->btnNewCourse->Size = System::Drawing::Size(164, 29);
			this->btnNewCourse->TabIndex = 0;
			this->btnNewCourse->Text = L"New Course";
			this->btnNewCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNewCourse->UseVisualStyleBackColor = true;
			// 
			// btnCourse
			// 
			this->btnCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCourse->FlatAppearance->BorderSize = 0;
			this->btnCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourse->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCourse->Location = System::Drawing::Point(0, 282);
			this->btnCourse->Name = L"btnCourse";
			this->btnCourse->Padding = System::Windows::Forms::Padding(7, 0, 0, 0);
			this->btnCourse->Size = System::Drawing::Size(164, 42);
			this->btnCourse->TabIndex = 8;
			this->btnCourse->Text = L"Course";
			this->btnCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCourse->UseVisualStyleBackColor = true;
			this->btnCourse->Click += gcnew System::EventHandler(this, &qlsv::btnCourse_Click);
			// 
			// panel_student
			// 
			this->panel_student->Controls->Add(this->btnStatus);
			this->panel_student->Controls->Add(this->btnManageStudent);
			this->panel_student->Controls->Add(this->btnRegistration);
			this->panel_student->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_student->Location = System::Drawing::Point(0, 178);
			this->panel_student->Name = L"panel_student";
			this->panel_student->Size = System::Drawing::Size(164, 104);
			this->panel_student->TabIndex = 7;
			// 
			// btnStatus
			// 
			this->btnStatus->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStatus->FlatAppearance->BorderSize = 0;
			this->btnStatus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStatus->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStatus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnStatus->Location = System::Drawing::Point(0, 58);
			this->btnStatus->Name = L"btnStatus";
			this->btnStatus->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->btnStatus->Size = System::Drawing::Size(164, 29);
			this->btnStatus->TabIndex = 2;
			this->btnStatus->Text = L"Status";
			this->btnStatus->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStatus->UseVisualStyleBackColor = true;
			// 
			// btnManageStudent
			// 
			this->btnManageStudent->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnManageStudent->FlatAppearance->BorderSize = 0;
			this->btnManageStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnManageStudent->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnManageStudent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnManageStudent->Location = System::Drawing::Point(0, 29);
			this->btnManageStudent->Name = L"btnManageStudent";
			this->btnManageStudent->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->btnManageStudent->Size = System::Drawing::Size(164, 29);
			this->btnManageStudent->TabIndex = 1;
			this->btnManageStudent->Text = L"Manage Student";
			this->btnManageStudent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnManageStudent->UseVisualStyleBackColor = true;
			// 
			// btnRegistration
			// 
			this->btnRegistration->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegistration->FlatAppearance->BorderSize = 0;
			this->btnRegistration->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistration->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRegistration->Location = System::Drawing::Point(0, 0);
			this->btnRegistration->Name = L"btnRegistration";
			this->btnRegistration->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->btnRegistration->Size = System::Drawing::Size(164, 29);
			this->btnRegistration->TabIndex = 0;
			this->btnRegistration->Text = L"Registration";
			this->btnRegistration->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegistration->UseVisualStyleBackColor = true;
			// 
			// btnStudent
			// 
			this->btnStudent->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStudent->FlatAppearance->BorderSize = 0;
			this->btnStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStudent->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStudent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnStudent->Location = System::Drawing::Point(0, 136);
			this->btnStudent->Name = L"btnStudent";
			this->btnStudent->Padding = System::Windows::Forms::Padding(7, 0, 0, 0);
			this->btnStudent->Size = System::Drawing::Size(164, 42);
			this->btnStudent->TabIndex = 6;
			this->btnStudent->Text = L"Student";
			this->btnStudent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStudent->UseVisualStyleBackColor = true;
			this->btnStudent->Click += gcnew System::EventHandler(this, &qlsv::btnStudent_Click);
			// 
			// btnDashboard
			// 
			this->btnDashboard->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDashboard->FlatAppearance->BorderSize = 0;
			this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDashboard->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDashboard->Location = System::Drawing::Point(0, 94);
			this->btnDashboard->Name = L"btnDashboard";
			this->btnDashboard->Padding = System::Windows::Forms::Padding(7, 0, 0, 0);
			this->btnDashboard->Size = System::Drawing::Size(164, 42);
			this->btnDashboard->TabIndex = 5;
			this->btnDashboard->Text = L"Dashboard";
			this->btnDashboard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDashboard->UseVisualStyleBackColor = true;
			// 
			// panel_logo
			// 
			this->panel_logo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_logo->Location = System::Drawing::Point(0, 0);
			this->panel_logo->Name = L"panel_logo";
			this->panel_logo->Size = System::Drawing::Size(164, 94);
			this->panel_logo->TabIndex = 0;
			// 
			// qlsv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ClientSize = System::Drawing::Size(922, 536);
			this->Controls->Add(this->panel_menu);
			this->Name = L"qlsv";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Manangement";
			this->Load += gcnew System::EventHandler(this, &qlsv::qlsv_Load);
			this->panel_menu->ResumeLayout(false);
			this->panel_course->ResumeLayout(false);
			this->panel_student->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Void customizeDesign()
	{
		   panel_student->Visible = false;
		   panel_course->Visible = false;
	}
	private: Void hideSubmenu()
	{
		if (panel_student->Visible == true)
			panel_student->Visible = false;
		if (panel_course->Visible == true)
			panel_course->Visible = false;
	}
	private: Void showSubmenu(Panel ^ a)
	{
		if (a->Visible == false)
		{
			hideSubmenu();
			a->Visible = true;
		}
		else a->Visible = false;
	}
private: System::Void qlsv_Load(System::Object^ sender, System::EventArgs^ e) {
	customizeDesign();
	}
private: System::Void btnStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	showSubmenu(panel_student);
}
private: System::Void btnCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	showSubmenu(panel_course);
}
};
}
