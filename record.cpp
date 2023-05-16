#include "record.h"
#include "keytable.h"

using namespace std;

string recordString(string message)
{
    string input;
    cout << message << endl;
    cin >> input;

    return input;
}

void registerKey(string keyArray[4])
{
    //register a windows hotkey difined by user input
}

void recordKeyStroke()
{
    int macroLength = 0;
    string modifierKeys[2];
    string key;
    int ascii_value;
    string keyBuffer;
    key_hash keyH;
    int lengthI = 0;

    while (lengthI == 0)
    {
        cout << "How long is your macro? Please include the modifier keys. Max length is 4 keys long." << endl;
        cin >> macroLength;
        if (macroLength < 1 && macroLength >= 4)
        {
            cout << "Invalid length macro length!" << endl;
        } else {
            lengthI++;
        }
    }
/*
    cout << "Please choose up to two modifier keys: " << endl << "1) CTRL" << endl << "2) ALT" << endl << "3) SHIFT" << endl << "4) No key " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Select modifier " << i +1 << ": ";
        cin >> modifierKeys[i];
    }
    */

    string macro[macroLength];
    for (int i = 0; i < macroLength; i++)
    {
        cout << "Accepted modifier keys are CTRL, ALT, SHIFT. Most alpha keys are accepted." << endl;
        cout << "Please type key number " << i + 1 << ": ";
        cin >> key;
        cout << "Recorded key was " << key << " converting..." << endl;
        keyH = hash_key(key);

        // put a switch here

        /*
        key = _getch();
        ascii_value = key;
        cout << "Recorded key --> " << key << endl;
        cout << "Recorded async value --> " << ascii_value << endl;
        if (7 < ascii_value && ascii_value < 256)
        {
            if (GetAsyncKeyState(VK_F24))
            {
                cout << "[F24]";
            }
            else if (GetAsyncKeyState(VK_F24))
            {
                cout << "[F24]";
            }
            else
            {
                cout << key;
            }
        } */
    }
}