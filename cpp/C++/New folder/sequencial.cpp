#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ofstream outfile("myfile.dat");
    if (outfile.is_open())
    {
        outfile << "record 1" << endl;
        outfile << "record2" << endl;
        outfile << "record3" << endl;
        outfile.close();
    }
    ifstream infile("myfile.dat");
    if (infile.is_open())
    {
        string line;
        while (getline(infile, line))
        {
            cout << line << endl;
        }
        infile.close();
    }
    return 0;
}
