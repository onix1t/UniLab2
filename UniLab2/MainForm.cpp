#include "MainForm.h"

using namespace::System;
using namespace::System::Windows::Forms;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UniLab2::MainForm form;
	Application::Run(% form);
}