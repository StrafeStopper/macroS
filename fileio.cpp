#include "fileio.h"

using namespace std;

void fileio( string input, string filename )
{
    //writes a given string to a file
    ofstream test_file;
    test_file.open (filename);
    test_file << input;
    test_file.close();
}