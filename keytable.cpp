#include "keytable.h"

using namespace std;

string lowercase(string lower)
{
    //cout << "Converting " << lower << " to lowercase..." << endl;
    string data = lower;
    transform(data.begin(), data.end(), data.begin(), [](unsigned char c) { return tolower(c); });
    //cout << "Done converting, lowercase key is: " << data << endl;
    return data;
}

key_hash hash_key(string key)
{
    //hashes all accepted keys into a custom enum for easy sorting and storing 
    key_hash hash;
    key = lowercase(key);

    if (key == "ctrl") return CTRL;
    if (key == "alt") return ALT;
    if (key == "shift") return SHIFT; 
    if (key == "f1") return F1;
    if (key == "f2") return F2;
    if (key == "f3") return F3;
    if (key == "f4") return F4;
    if (key == "f5") return F5;
    if (key == "f6") return F6;
    if (key == "f7") return F7;
    if (key == "f8") return F8;
    if (key == "f9") return F9;
    if (key == "f10") return F10;
    if (key == "f11") return F11;
    if (key == "f12") return F12;
    if (key == "f13") return F13;
    if (key == "f14") return F14;
    if (key == "f15") return F15;
    if (key == "f16") return F16;
    if (key == "f17") return F17;
    if (key == "f18") return F18;
    if (key == "f19") return F19;
    if (key == "f20") return F20;
    if (key == "f21") return F21;
    if (key == "f22") return F22;
    if (key == "f23") return F23;
    if (key == "f24") return F24;
    if (key == "q") return Q;
    if (key == "w") return W;
    if (key == "e") return E;
    if (key == "r") return R;
    if (key == "t") return T;
    if (key == "y") return Y;
    if (key == "u") return U;
    if (key == "i") return I;
    if (key == "o") return O;
    if (key == "p") return P;
    if (key == "a") return A;
    if (key == "s") return S;
    if (key == "d") return D;
    if (key == "f") return F;
    if (key == "g") return G;
    if (key == "h") return H;
    if (key == "j") return J;
    if (key == "k") return K;
    if (key == "l") return L;
    if (key == "z") return Z;
    if (key == "x") return X;
    if (key == "c") return C;
    if (key == "v") return V;
    if (key == "b") return B;
    if (key == "n") return N;
    if (key == "m") return M;
    if (key == "1" || "one") return ONE;
    if (key == "2" || "two") return TWO;
    if (key == "3" || "three") return THREE;
    if (key == "4" || "four") return FOUR;
    if (key == "5" || "five") return FIVE;
    if (key == "6" || "six") return SIX;
    if (key == "7" || "seven") return SEVEN;
    if (key == "8" || "eight") return EIGHT;
    if (key == "9" || "nine") return NINE;
    if (key == "0" || "zero") return ZERO;
}