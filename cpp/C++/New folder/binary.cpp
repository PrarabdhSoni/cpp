#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("binary_data.bin", ios::out | ios::binary);

    if (!outfile)
    {
        cerr << "Error opening file" << endl;
        return 1;
    }

    int number = 42;
    double pi = 3.14159;
    char data[] = "Hello, world!";

    outfile.write(reinterpret_cast<const char *>(&number), sizeof(number));
    outfile.write(reinterpret_cast<const char *>(&pi), sizeof(pi));
    outfile.write(data, sizeof(data));

    outfile.close();

    return 0;
}
