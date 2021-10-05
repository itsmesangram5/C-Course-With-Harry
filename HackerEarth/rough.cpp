#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;
class student
{
protected:
    string name;
    int marks[5];
    char grade;

public:
    void read()
    {
        cin >> name;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void read_grade()
    {
        cin >> grade;
    }
};
class Spercentage : public student
{
public:
    void studpercent()
    {
        float z;
        z = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
        cout<<z;
    }
};
class Sgrade : public Spercentage
{
protected:
    char returngrade()
    {
        return grade;
    }
};
class Report : public Sgrade
{
public:
    void printdata()
    {
        cout << name << endl;
        cout << marks[0] << " ";
        cout << marks[1] << " ";
        cout << marks[2] << " ";
        cout << marks[3] << " ";
        cout << marks[4] << " " << endl;
        cout <<fixed<<setprecision(2)<<float((marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5)<<"% "<<grade;
    }
};
int main()
{
    int n;
    cin >> n;
    Report obj[n];
    for (int i = 0; i < n; i++)
    {
        obj[i].read();
        obj[i].read_grade();
    }
    for (int i = 0; i < n; i++)
    {
        obj[i].printdata();
    }

    return 0;
}