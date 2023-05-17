#include "record.h"
#include "keytable.h"

//using namespace std;

string recordString(string message)
{
    string input;
    cout << message << endl;
    cin >> input;

    return input;
}

bool registerKey(string keyArray[4])
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


    string macro[macroLength];
    cout << "Accepted modifier keys are CTRL, ALT, SHIFT. Most alpha keys are accepted." << endl;
    cout << "Start with the modifiers and end with your regular key." << endl;

    for (int i = 0; i < macroLength; i++)
    {
        cout << "Please type key number " << i + 1 << ": ";
        cin >> key;
        //cout << "Recorded key was " << key << " converting..." << endl;
        keyH = hash_key(key);

        switch(keyH)
        {
        case CTRL:
            macro[i] = keyH;
            break;
        case ALT:
            macro[i] = keyH;
            break;
        case SHIFT:
            macro[i] = keyH;
            break;
        case F1:
            macro[i] = keyH;
            break;
        case F2:
            macro[i] = keyH;
            break;
        case F3:
            macro[i] = keyH;
            break;
        case F4:
            macro[i] = keyH;
            break;
        case F5:
            macro[i] = keyH;
            break;
        case F6:
            macro[i] = keyH;
            break;
        case F7:
            macro[i] = keyH;
            break;
        case F8:
            macro[i] = keyH;
            break;
        case F9:
            macro[i] = keyH;
            break;
        case F10:
            macro[i] = keyH;
            break;
        case F11:
            macro[i] = keyH;
            break;
        case F12:
            macro[i] = keyH;
            break;
        case F13:
            macro[i] = keyH;
            break;
        case F14:
            macro[i] = keyH;
            break;
        case F15:
            macro[i] = keyH;
            break;
        case F16:
            macro[i] = keyH;
            break;
        case F17:
            macro[i] = keyH;
            break;
        case F18:
            macro[i] = keyH;
            break;
        case F19:
            macro[i] = keyH;
            break;
        case F20:
            macro[i] = keyH;
            break;
        case F21:
            macro[i] = keyH;
            break;
        case F22:
            macro[i] = keyH;
            break;
        case F23:
            macro[i] = keyH;
            break;
        case F24:
            macro[i] = keyH;
            break;
        case Q:
            macro[i] = keyH;
            break;
        case W:
            macro[i] = keyH;
            break;
        case E:
            macro[i] = keyH;
            break;
        case R:
            macro[i] = keyH;
            break;
        case T:
            macro[i] = keyH;
            break;
        case Y:
            macro[i] = keyH;
            break;
        case U:
            macro[i] = keyH;
            break;
        case I:
            macro[i] = keyH;
            break;
        case O:
            macro[i] = keyH;
            break;
        case P:
            macro[i] = keyH;
            break;
        case A:
            macro[i] = keyH;
            break;
        case S:
            macro[i] = keyH;
            break;
        case D:
            macro[i] = keyH;
            break;
        case F:
            macro[i] = keyH;
            break;
        case G:
            macro[i] = keyH;
            break;
        case H:
            macro[i] = keyH;
            break;
        case J:
            macro[i] = keyH;
            break;
        case K:
            macro[i] = keyH;
            break;
        case L:
            macro[i] = keyH;
            break;
        case Z:
            macro[i] = keyH;
            break;
        case X:
            macro[i] = keyH;
            break;
        case C:
            macro[i] = keyH;
            break;
        case V:
            macro[i] = keyH;
            break;
        case B:
            macro[i] = keyH;
            break;
        case N:
            macro[i] = keyH;
            break;
        case M:
            macro[i] = keyH;
            break;
        case ONE:
            macro[i] = keyH;
            break;
        case TWO:
            macro[i] = keyH;
            break;
        case THREE:
            macro[i] = keyH;
            break;
        case FOUR:
            macro[i] = keyH;
            break;
        case FIVE:
            macro[i] = keyH;
            break;
        case SIX:
            macro[i] = keyH;
            break;
        case SEVEN:
            macro[i] = keyH;
            break;
        case EIGHT:
            macro[i] = keyH;
            break;
        case NINE:
            macro[i] = keyH;
            break;
        case ZERO:
            macro[i] = keyH;
            break;
        default:
            cout << "switch failed" << endl;
            break;
        }
    }
    cout << "Full recorded macro was: " << endl;
    cout << macro[0] << endl;
    cout << macro[1] << endl;
    cout << macro[2] << endl;
    cout << macro[3] << endl;
}