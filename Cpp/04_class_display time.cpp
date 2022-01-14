//4_class_display time
#include<iostream.h>
#include<conio.h>
class complex
{
    int a, b, c;

public:

    void setdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void add(complex A)
    {
        a += A.a;
        b += A.b;
        c += A.c;

        if (c > 60)
        {
            b = b + (c / 60);
            c = c % 60;
        }

        if (b > 60)
        {
            a = a + (b / 60);
            b = b % 60;
        }
        cout << a << " hour " << b << " minute " << c << " second " << "\n";
    }

};
void main()
{
    complex t1, t2;
    t1.setdata(10, 20, 30);
    t2.setdata(20, 30, 40);
    t1.add(t2);
    getch();

}