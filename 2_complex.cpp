#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>

class Two;

class One
{
private:
    int real, img;

public:
    void input()
    {
        cout << "Enter value of real :" << endl;
        cin >> real;
        cout << "Enter value of img :" << endl;
        cin >> img;
    }

    friend void addComple(One o1, Two t1);
    friend void subComple(One o1, Two t1);
};
class Two
{
private:
    int real, img;

public:
    void input()
    {
        cout << "Enter value of real :" << endl;
        cin >> real;
        cout << "Enter value of img :" << endl;
        cin >> img;
    }

    friend void addComple(One o1, Two t1);
    friend void subComple(One o1, Two t1);
};

void addComple(One o1, Two t1)

{
    int  c,d;
    c = o1.real + t1.real;
    d = o1.img + t1.img;

    cout<<"Addition of complex  number is "<<c<<"+i"<<d<<endl;
}


void subComple(One o1, Two t1)

{
    int  c,d;
    c = o1.real - t1.real;
    d = o1.img - t1.img;

    cout<<"Subtraction of complex  number is "<<c<<"+i"<<d<<endl;
}


int main()
{
        One o;
        Two t;
        o.input();
        t.input();

        addComple(o,t);
        subComple(o,t);

        return 0;   
}
