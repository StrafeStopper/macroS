#include "record.h"

using namespace std;

string recordString(string message)
{
    string input;
    cout << message << endl;
    cin >> input;

    return input;
}

void recordKeyStroke()
{
    int macroLength;
    string modifierKeys[3];

    cout << "" << endl;
    cin >> macroLength;

    if (macroLength < 1 && macroLength >= 3)
    {
        cout << "Invalid length!" << endl;
    } else {

        string macro[macroLength];
        for ( int i = 0; i < macroLength; i++ )
        {
            cout << "recording key number: " << i << endl;
            
        }
    }
}