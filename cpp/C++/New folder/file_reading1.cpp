#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.dat");
    ch = fin.get();
    while (!fin.eof())
    {
        cout << ch;
        ch = fin.get();
    }
    fin.close();
    return 0;
}
