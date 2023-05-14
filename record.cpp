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
    char key;
    int ascii_value;

    cout << "macro length" << endl;
    cin >> macroLength;

    if (macroLength < 1 && macroLength >= 3)
    {
        cout << "Invalid length!" << endl;
    } else {

        string macro[macroLength];
        for ( int i = 0; i < macroLength; i++ )
        {
            cout << "recording key number: " << i << endl;
            key = getch();
            ascii_value = key;
            cout << "Here --> " << key << endl;
            cout << "Async --> " << ascii_value << endl;
            if(7 < ascii_value && ascii_value < 256)
            {
                if (GetAsyncKeyState(VK_SHIFT))
                {
                    cout << "[SHIFT]";
                }
                else if (GetAsyncKeyState(VK_CONTROL))
                {
                    cout << "[CONTROL]";
                }
                else if (GetAsyncKeyState(VK_MENU))
                {
                    cout << "[ALT]";
                }
                else
                {
                    cout << key;
                }
            }
        }
    }
}