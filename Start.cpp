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
        // Obs³uga wyj¹tku - wyœwietlenie komunikatu o b³êdzie
        MessageBox::Show("Wyst¹pi³ wyj¹tek: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}


