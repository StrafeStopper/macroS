#include "header.h"

using namespace std;

string line;

void fileio()
{
    ofstream test_file;
    test_file.open ("test.txt");
    test_file << "this is a test";
    test_file.close();
}

int main( int argc, char* args[])
{
    cout << "Welcome to simple-macro!" << endl << "This is a simple command line tool that allows the user to run code, commands, long macros, etc with the push of a button. " << endl;

    fileio();

    return 0;
}