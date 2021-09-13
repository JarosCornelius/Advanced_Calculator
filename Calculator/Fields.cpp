#include "Fields.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::Fields form;
	Application::Run(%form);

	return 0;
}