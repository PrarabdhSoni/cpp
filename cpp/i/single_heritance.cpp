#include <iostream>
#include <conio.h>
using namespace std;

class A
{
public:
    int i;
    void getdata()
    {
        cout << "\nI am from class A\n";
        cout << "Enter the value of i";
        cin >> i;
    }
};
class B : public A
{
public:
    void showdata()
    {
        cout << "\nI am from Class B\n";
        i++;
        cout << "\n"
             << "Entered value is increamented by 1 so i=" << i;
    }
};
int main()
{
    B obj;
    obj.getdata();
    obj.showdata();
    getch();
    return 0;
}