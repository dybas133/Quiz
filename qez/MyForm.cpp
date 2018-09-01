#include "MyForm.h"

//#include "MyForm.h" – ta instrukcja ju¿ powinna byæ
using namespace qez;
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	Application::Run(gcnew MyForm());
	return 0;
}