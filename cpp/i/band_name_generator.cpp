#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Name, p_Name;
    cout << "Enter Your Name " << flush;
    cin >> Name;
    cout << "Enter Your Pet Name " << flush;
    cin >> p_Name;
    cout << "Enter Your Band Name is " << Name + " " + p_Name << endl;
    return (0);
}