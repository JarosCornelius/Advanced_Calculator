#pragma once
#include "HelpWindow.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Fields
	/// </summary>
	public ref class Fields : public System::Windows::Forms::Form
	{
	public:
		Fields(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Fields::Width = 300;
			Fields::Height = 425;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Fields()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pinToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  windowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  financialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::TextBox^  display;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Fields::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->windowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->financialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->viewToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(434, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pinToolStripMenuItem,
					this->windowToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// pinToolStripMenuItem
			// 
			this->pinToolStripMenuItem->Name = L"pinToolStripMenuItem";
			this->pinToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->pinToolStripMenuItem->Text = L"Pin";
			this->pinToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fields::pinToolStripMenuItem_Click);
			// 
			// windowToolStripMenuItem
			// 
			this->windowToolStripMenuItem->Name = L"windowToolStripMenuItem";
			this->windowToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->windowToolStripMenuItem->Text = L"Window";
			this->windowToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fields::windowToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fields::exitToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardToolStripMenuItem,
					this->financialToolStripMenuItem, this->gameToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fields::standardToolStripMenuItem_Click);
			// 
			// financialToolStripMenuItem
			// 
			this->financialToolStripMenuItem->Name = L"financialToolStripMenuItem";
			this->financialToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->financialToolStripMenuItem->Text = L"Financial";
			this->financialToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fields::financialToolStripMenuItem_Click);
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->gameToolStripMenuItem->Text = L"Game";
			this->gameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fields::gameToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->helpToolStripMenuItem->Text = L"About";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fields::helpToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button1->Location = System::Drawing::Point(2, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Fields::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button2->Location = System::Drawing::Point(58, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Fields::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button3->Location = System::Drawing::Point(114, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 55);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Fields::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button4->Location = System::Drawing::Point(2, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 55);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Fields::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button5->Location = System::Drawing::Point(58, 209);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Fields::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button6->Location = System::Drawing::Point(114, 209);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 55);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Fields::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Silver;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button7->Location = System::Drawing::Point(2, 153);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 55);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Fields::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button8->Location = System::Drawing::Point(58, 153);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 55);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Fields::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button9->Location = System::Drawing::Point(114, 153);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 55);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Fields::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkGray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button10->Location = System::Drawing::Point(114, 97);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 55);
			this->button10->TabIndex = 12;
			this->button10->Text = L"C";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Fields::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Silver;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button11->Location = System::Drawing::Point(2, 321);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(111, 55);
			this->button11->TabIndex = 13;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Fields::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkGray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button12->Location = System::Drawing::Point(2, 97);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(111, 55);
			this->button12->TabIndex = 14;
			this->button12->Text = L"CE";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Fields::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Silver;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button13->Location = System::Drawing::Point(114, 321);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 55);
			this->button13->TabIndex = 15;
			this->button13->Text = L",";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Fields::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkGray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button14->Location = System::Drawing::Point(170, 265);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 111);
			this->button14->TabIndex = 16;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Fields::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkGray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button15->Location = System::Drawing::Point(170, 209);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 55);
			this->button15->TabIndex = 17;
			this->button15->Text = L"x";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Fields::button15_Click_1);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkGray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button16->Location = System::Drawing::Point(170, 153);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 55);
			this->button16->TabIndex = 18;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Fields::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::DarkGray;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button17->Location = System::Drawing::Point(170, 97);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 55);
			this->button17->TabIndex = 19;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Fields::button17_Click_1);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::SandyBrown;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button18->Location = System::Drawing::Point(226, 97);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 55);
			this->button18->TabIndex = 20;
			this->button18->Text = L"√";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Fields::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::SandyBrown;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button19->Location = System::Drawing::Point(226, 153);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 55);
			this->button19->TabIndex = 21;
			this->button19->Text = L"x²";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Fields::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::SandyBrown;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button20->Location = System::Drawing::Point(226, 209);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 55);
			this->button20->TabIndex = 22;
			this->button20->Text = L"%";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Fields::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::SandyBrown;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button21->Location = System::Drawing::Point(226, 265);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 111);
			this->button21->TabIndex = 23;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Fields::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Silver;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button22->Location = System::Drawing::Point(294, 320);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(130, 55);
			this->button22->TabIndex = 24;
			this->button22->Text = L"markup";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Fields::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Silver;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button23->Location = System::Drawing::Point(294, 264);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(130, 55);
			this->button23->TabIndex = 25;
			this->button23->Text = L"margin";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Fields::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Silver;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button24->Location = System::Drawing::Point(294, 208);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(130, 55);
			this->button24->TabIndex = 26;
			this->button24->Text = L"brutto → netto";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Fields::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Silver;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button25->Location = System::Drawing::Point(294, 152);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(130, 55);
			this->button25->TabIndex = 27;
			this->button25->Text = L"netto → brutto";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Fields::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::SandyBrown;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button26->Location = System::Drawing::Point(6, 410);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(130, 55);
			this->button26->TabIndex = 30;
			this->button26->Text = L"addition";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Fields::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::SandyBrown;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button27->Location = System::Drawing::Point(6, 466);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(130, 55);
			this->button27->TabIndex = 29;
			this->button27->Text = L"subtraction";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Fields::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::SandyBrown;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button28->Location = System::Drawing::Point(6, 522);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(130, 55);
			this->button28->TabIndex = 28;
			this->button28->Text = L"multiplication";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Fields::button28_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(150, 433);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 130);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"pytajnik.png");
			this->imageList1->Images->SetKeyName(1, L"zle.png");
			this->imageList1->Images->SetKeyName(2, L"dobrze.png");
			// 
			// display
			// 
			this->display->BackColor = System::Drawing::SystemColors::MenuText;
			this->display->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->display->Font = (gcnew System::Drawing::Font(L"Open Sans", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->display->ForeColor = System::Drawing::SystemColors::Menu;
			this->display->Location = System::Drawing::Point(2, 34);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(279, 66);
			this->display->TabIndex = 32;
			this->display->Text = L"0";
			this->display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Fields
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(434, 611);
			this->Controls->Add(this->display);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Fields";
			this->Text = L"Calculator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		double first, second, equation;
		char operation;
		bool status = false;
		double test;


#pragma endregion

	private: Void Write(String^ number)
	{
		if (display->Text == "0" || status)
		{
			display->Text = number;
		}
		else
		{
			this->display->Text += number;
		}
		status = false;
	}



	private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		HelpWindow^ About = gcnew HelpWindow();
		About->Show();


	}
	private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		Fields::Width = 300;
		Fields::Height = 425;
		keys(true);



	}
	private: System::Void financialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		Fields::Width = 460;
		Fields::Height = 425;
		keys(true);
	}

	private: System::Void gameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		Fields::Width = 300;
		Fields::Height = 650;
		this->display->Text = "Let's play";
		keys(false);

		
	}

			 private: void keys(bool view)
			 {
				 button14->Visible = view;
				 button15->Visible = view;
				 button16->Visible = view;
				 button17->Visible = view;
				 button18->Visible = view;
				 button19->Visible = view;
				 button20->Visible = view;
			 }



	private: System::Void pinToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		Fields::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		TopMost = true;





	}
	private: System::Void windowToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		Fields::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;


	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Exit Calculator?", "Calculator", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();

		}

	}


			 private: void drawning(int start, int stop, String^ mark)
			 {
				 Random^ draw = gcnew Random;
				 first = draw->Next(start, stop);
				 second = draw->Next(start, stop);
				 if (mark != "-")
				 {
					 second = draw->Next(start, stop);
				 }
				 else
				 {
					 second = draw->Next(start, first);
				 }

				 this->display->Text = first + mark + second + " = ?";
				 status = true;
				 operation = 't';
				 pictureBox1->Image = imageList1->Images[0];

			 }

	private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
		drawning(1, 100, "+");
		test = first + second;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Write("1");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("2");
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("3");
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("4");
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("5");
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("6");
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("7");
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("8");
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("9");
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		Write("0");
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		Write(",");
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {

		first = Convert::ToDouble(display->Text);
		operation = '+';
		//this->display->Text = "0";
		status = true;

	}
	private: System::Void button15_Click_1(System::Object^  sender, System::EventArgs^  e) {
		first = Convert::ToDouble(display->Text);
		operation = '*';
		status = true;

	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		first = Convert::ToDouble(display->Text);
		operation = '-';
		status = true;
	}
	private: System::Void button17_Click_1(System::Object^  sender, System::EventArgs^  e) {
		first = Convert::ToDouble(display->Text);
		operation = '/';
		status = true;
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {

		first = Convert::ToDouble(display->Text);
		equation = Math::Sqrt(first);
		this->display->Text = Convert::ToString(equation);
		status = true;
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		second = Convert::ToDouble(display->Text);


		switch (operation)
		{
		case '+':
			equation = first + second;
			break;

		case '*':
			equation = first * second;
			break;

		case '-':
			equation = first - second;
			break;

		case '/':
			if (second != 0)
				equation = first / second;
			else
				MessageBox::Show("Error! Try again.", "Error", MessageBoxButtons::OK ,MessageBoxIcon::Error);
			break;

		case 'p':
			equation = (first / 100)*second;
			break;

		case 'b':
			equation = first*(1+(second)/100);
			break;

		case 'n':
			equation = first/(1 + (second) / 100);
			break;

		case 'm':
			equation = ((second - first) / second)*100;
			break;

		case 'x':
			equation = ((second - first) / first) * 100;
			break;

		case 't':
			if (second == test)
			{
				this->display->Text = "Good!";
				this->pictureBox1->Image = imageList1->Images[2];
			}
			else
			{
				this->display->Text = "Busted";
				this->pictureBox1->Image = imageList1->Images[1];
			}

			break;

		case 'o':
			if (second == test)
			{
				this->display->Text = "Good!";
				this->pictureBox1->Image = imageList1->Images[2];
			}
			else
			{
				this->display->Text = "Busted";
				this->pictureBox1->Image = imageList1->Images[1];
			}

			break;

		case 'g':
			if (second == test)
			{
				this->display->Text = "Good!";
				this->pictureBox1->Image = imageList1->Images[2];
			}
			else
			{
				this->display->Text = "Busted";
				this->pictureBox1->Image = imageList1->Images[1];
			}

			break;
		}

		status = true;

		if (operation != 't' && operation != 'o' && operation != 'g')
		{
			this->display->Text = Convert::ToString(equation);
		}
		
	}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

	this->display->Text = "0";
	first = 0;
	second = 0;
	status = false;
}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	this->display->Text = "0";

}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

	first = Convert::ToDouble(display->Text);
	equation = Math::Pow(first, 2);
	this->display->Text = Convert::ToString(equation);
	status = true;
}


private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	first = Convert::ToDouble(display->Text);
	status = true;
	operation = 'p';
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	first = Convert::ToDouble(display->Text);
	status = true;
	operation = 'b';
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	first = Convert::ToDouble(display->Text);
	status = true;
	operation = 'n';
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	first = Convert::ToDouble(display->Text);
	status = true;
	operation = 'm';

}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	first = Convert::ToDouble(display->Text);
	status = true;
	operation = 'x';
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {

	drawning(1, 100, "-");
	test = first - second;
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	drawning(1, 10, "*");
	test = first * second;

}
};
}