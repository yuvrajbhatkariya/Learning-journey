// Multi level inheritance:-

#include <iostream>
using namespace std;
class student // Base class for 'marks' class
{
protected:
    int id;
    int static count;

public:
    int age;
    void setid(int a)
    {
        count++;
        id = a;
    }
    void getid(void)
    {
        cout << "The id of student " << count << " is : " << id << endl;
    }
};
int student ::count = 0;
class marks : public student // Base class for 'result' class
{
protected:
    float maths, physics;

public:
    void setmarks(float v1, float v2)
    {
        maths = v1;
        physics = v2;
    }
    void getmarks(void)
    {
        cout << "The marks int maths is : " << maths << endl;
        cout << "The marks int physic is : " << physics << endl;
    }
};
class result : public marks
{
protected:
    float avg;

public:
    void display(void)
    {
        cout << "The average of student " << count << " marks is : " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    // marks y;
    // y.setdata(5);
    // y.getdata();
    result r, s;
    r.setid(6);
    r.setmarks(49, 69);
    r.display();
    s.setid(106);
    s.setmarks(54, 61);
    s.display();
    return 0;
}