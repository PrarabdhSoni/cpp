#include <iostream>
#include <string>
using namespace std;

class A
{
private:
    float celsius;
    float fehranite;
    string str;

public:
    void calculation()
    {
        cout << "Enter yes for fehranite to celsius or enter no for celsius to frhranite" << endl;
        cin >> str;
        if (str == "yes")
        {
            cout << "Enter temperature in fehranite" << endl;
            cin >> fehranite;
            celsius = (float(5) / float(9)) * (fehranite - float(32));
            cout << celsius << endl;
        }
        else if (str == "no")
        {
            cout << "Enter temperature in celsius" << endl;
            cin >> celsius;
            fehranite = ((float(9) / float(5)) * celsius) + float(32);
            cout << fehranite << endl;
        }
        else
        {
            cout << "Wrong input" << endl;
        }
    }
};

int main()
{
    A a;
    a.calculation();
    return 0;
}