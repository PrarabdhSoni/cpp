#include <iostream>
#include <conio.h>
using namespace std;

class A
{
public:
    void getdata()
    {
        cout << "I am the class A" << endl;
    }
};

class B
{
public:
    void putdata()
    {
        cout << "I am the class B" << endl;
    }
};

class C : public A, public B
{
public:
    void showdata()
    {
        cout << "I am class c";
    }
};

int main()
{
    C object;
    object.getdata();
    object.putdata();
    object.showdata();
    getch();
    return 0;
}