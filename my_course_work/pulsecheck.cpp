#include "pulsecheck.h"
//#include "addperson.h"
#include "beginform.h"

//#define disable(LNK2005)
using namespace mycoursework; //Project2 - name of your project

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew beginform());
	return 0;
}