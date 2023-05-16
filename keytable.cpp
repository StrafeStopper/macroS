#include "keytable.h"

using namespace std;

string lowercase(string lower)
{
    cout << "Converting " << lower << " to lowercase..." << endl;
    string data = lower;
    transform(data.begin(), data.end(), data.begin(), [](unsigned char c) { return tolower(c); });
    cout << "Done converting, lowercase key is: " << data << endl;
    return data;
}

key_hash hash_key(string key)
{
    //hashes all accepted keys into a custom enum for easy sorting and storing 
    key_hash hash;
    key = lowercase(key);

    if (key == "ctrl")
    {
        hash = CTRL;
        cout << "converted CTRL to ctrl and hashed: " << hash << endl;
    }
    else if (key == "alt")
    {
        hash = ALT;
        cout << "converted ALT to alt and hashed: " << hash << endl;
    }
     else if (key == "shift")
    {
        hash = SHIFT;
        cout << "converted SHIFT to shift and hashed: " << hash << endl;
    } /*
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    }
     else if (key == "")
    {
        hash = ;
    } */


    /*
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
    };*/
}