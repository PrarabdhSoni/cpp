// to much important

#include <iostream>
using namespace std;

class stu
{
    int id;
    char name[10];

public:
    friend void operator>>(istream &in, stu &s)
    {
        cout << "Enter the id and Student name ";
        in >> s.id >> s.name;
    }
    friend void operator<<(ostream &out, stu &s)
    {
        out << "ID:= " << s.id << endl;
        out << "name= " << s.name;
    }
};

int main()
{
    stu s;
    cin >> s;
    cout << s;
    return 0;
}