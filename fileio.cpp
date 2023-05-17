#include "fileio.h"

using namespace std;

void writeMacroFile( string input, string filename )
{
    //writes a given string to a file
    ofstream test_file;
    test_file.open (filename, ios::out);
    test_file << input;
    test_file.close();
};

void newMacroFile(string filename)
{
    ofstream newFile;
    filename.append(".txt");
    newFile.open (filename, ios::out);
    //cout << "New file named: " << filename << " created!" << endl;
    newFile.close();
};