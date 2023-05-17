#include "main.h"
#include "fileio.h"
#include "record.h"
#include "keytable.h"

using namespace std;

int menuOption = NULL;
string fileName = "New.txt";
char keyPress;
int ascii_value;


int menu()
{
    int m;
    cout << endl << "Select an option from the below list:" << endl;
    cout << "1) New macro" << endl 
    << "2) Edit Macro" << endl
    << "3) Exit" << endl;
    cin >> m;
    return m;
};

int main( int argc, char* args[])
{
    cout << "Welcome to simple-macro!" << endl << "This is a simple command line tool that allows the user to run code, commands, long macros, etc with the push of a button. " << endl;
    
    /*
    while ( !_kbhit() )
    {
        _cputs( "Waiting for key press" );
    }
    */

    menuOption = menu();
    switch(menuOption)
    {
        case 1:
            //cout << "make_macro" << endl;
            fileName = recordString( "Please enter name for new macro: " );
            newMacroFile(fileName);
            //cout << "You can have up to two modifier keys and one regualar key. " << endl;
            recordKeyStroke();
            break;
        
        case 2:
            cout << "edit_macro" << endl;
            break;

        case 3:
            cout << "exiting...." << endl;
            return 0;

        default:
            cout << "Invalid menu option." << endl;
            break;
    }

   

    return 0;
};