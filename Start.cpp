#include "Start.h"
#include "JokeManager.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]


//main, lapanie wyjatkow
int main(array<String^>^ args)
{
    JokeManager& jokemanager = JokeManager::getInstance();
    Jokes jok1e("nice joke", "short", "12.04.2022", 9, 3);
    Jokes jok2e("boring jke", "short", "06.11.2011", 2, 4);
    //Jokes jok3e("funnt joke", "long", "22.07.2023", 6, 8);
    //Jokes jok4e("hahaahha", "boring", "30.10.2022", 4, 5);



    jokemanager.addJoke(jok1e);
    jokemanager.addJoke(jok2e);
    //jokemanager.addJoke(jok3e);
    ///jokemanager.addJoke(jok4e);


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


