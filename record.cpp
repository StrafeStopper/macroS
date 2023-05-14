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
    cout << "How many keys long is your macro? (including the modifier)" << endl;
    cin >> macroLength;

    if (macroLength < 1 && macroLength >= 3)
    {
        cout << "Invalid length!" << endl;
    } else {
         for ( int i = 0; i < macroLength; i++ )
         {
            cin >> //im making an array for the keystrokes
         }
    }
}