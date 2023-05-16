#include "common.h"

using namespace std;

enum key_hash
{
    CTRL,
    ALT,
    SHIFT,
};

key_hash hash_key(string key);
string lowercase(string lower);