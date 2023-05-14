#include "keytable.h"

using namespace std;

string toTable(key_hash key)
{
    switch (key)
    {
        CTRL:
            cout << "CTRL converted" << endl;
            break;
        ALT:
            cout << "ALT was converted" << endl;
            break;
        SHIFT:
            cout << "SHIFT was converted" << endl;
            break;
        default:
            cout << "Conversion error" << endl;
    }
}