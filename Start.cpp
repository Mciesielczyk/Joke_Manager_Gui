#include "Start.h"
#include "JokeManager.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]



int main(array<String^>^ args)
{



    try
    {
        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        gui2::Start form;
        Application::Run(% form);
    }
    catch (Exception^ ex)
    {
        // Obs�uga wyj�tku - wy�wietlenie komunikatu o b��dzie
        MessageBox::Show("Wyst�pi� wyj�tek: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}


