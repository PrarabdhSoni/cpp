#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.dat");
    fin >> ch;
    while (!fin.eof())
    {
        cout << ch;
        fin >> ch;
    }
    fin.close();
    return 0;
}
