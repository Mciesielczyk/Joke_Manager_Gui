#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Utwórz i poka¿ MyForm1 jako pierwsze okno
    Application::Run(gcnew gui2::MyForm1());
    return 0;
}