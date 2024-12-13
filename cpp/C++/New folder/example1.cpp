#include <iostream>
using namespace std;

class Complex
{
public:
    int real, img;
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator<<(istream &in, Complex &c);
};

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.img << endl;
    return out;
}

istream &operator>>(istream &in, Complex &c)
{
    cout << "enter real part";
    in >> c.real;
    cout << "Enter Imaginary Part";
    in >> c.img;
    return in;
}

int main()
{
    Complex cl;
    cin >> cl;
    cout << "The complex object is";
    cout << cl;
    return 0;
}