#include "Font_Viewer_Main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FontViewer::Font_Viewer_Main form;
	Application::Run(%form);
}