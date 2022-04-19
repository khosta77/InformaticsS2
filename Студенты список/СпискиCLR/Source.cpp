#include "MyForm.h"  // Если форму назвали MyForm, как написано выше

using namespace СпискиCLR;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm()); // Если форму назвали MyForm, как написано выше
	return 0;
}