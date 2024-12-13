#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class student
{
protected:
    string name;
    int M_marks, P_marks, E_marks, C_marks, total;
    float res;

public:
    void get_name()
    {
        cout << "Enter your name " << endl;
        cin >> name;
    }
    void Marks()
    {
        cout << "enter your Maths marks" << endl;
        cin >> M_marks;
        cout << "enter your Physics marks" << endl;
        cin >> P_marks;
        cout << "enter your English marks" << endl;
        cin >> E_marks;
        cout << "enter your Chemistry marks" << endl;
        cin >> C_marks;
    }
    float calcution()
    {
        total = M_marks + P_marks + E_marks + C_marks;
        res = (float)total / 400;
        return res;
    }
};

class DerivedStudent : public student
{
protected:
    float percentage;

public:
    float display_percentage()
    {
        percentage = res * 100;
        return percentage;
    }
};

class grade : public DerivedStudent
{
public:
    void grade_clac(float percentage)
    {
        cout << "Percentage: " << percentage << "%" << endl;
        if (percentage < 60)
        {
            cout << "Your Grade is 'F' " << endl;
        }
        else if (percentage >= 60 && percentage < 63)
        {
            cout << "Your Grade is 'D-' " << endl;
        }
        else if (percentage >= 63 && percentage < 67)
        {
            cout << "Your Grade is 'D' " << endl;
        }
        else if (percentage >= 67 && percentage < 70)
        {
            cout << "Your Grade is 'D+' " << endl;
        }
        else if (percentage >= 70 && percentage < 73)
        {
            cout << "Your Grade is 'C-' " << endl;
        }
        else if (percentage >= 73 && percentage < 77)
        {
            cout << "Your Grade is 'C' " << endl;
        }
        else if (percentage >= 77 && percentage < 80)
        {
            cout << "Your Grade is 'C+' " << endl;
        }
        else if (percentage >= 80 && percentage < 83)
        {
            cout << "Your Grade is 'B-' " << endl;
        }
        else if (percentage >= 83 && percentage < 87)
        {
            cout << "Your Grade is 'B' " << endl;
        }
        else if (percentage >= 87 && percentage < 90)
        {
            cout << "Your Grade is 'B+' " << endl;
        }
        else if (percentage >= 90 && percentage < 93)
        {
            cout << "Your Grade is 'A-' " << endl;
        }
        else
        {
            cout << "Your Grade is 'D' " << endl;
        }
    }
};

int main()
{
    grade g;
    DerivedStudent s;
    s.get_name();
    s.Marks();
    s.calcution();
    s.display_percentage();
    g.grade_clac(s.display_percentage());
    return 0;
}