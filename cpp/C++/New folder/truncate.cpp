#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("myFile.txt", ios::out | ios::trunc);

    if (!outfile)
    {
        cerr << "Error opening file" << endl;
        return 1;
    }

    outfile << "This is the new content." << endl;
    outfile.close();

    return 0;
}
