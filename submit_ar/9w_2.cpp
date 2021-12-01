#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << "인 원" << endl; }

    friend Circle operator++(Circle& a);
    friend Circle operator++(Circle& a, int b);
};
Circle operator++(Circle& a)
{
    a.radius++;
    return a;
}

Circle operator++(Circle& a, int b)
{
    Circle c = a;
    a.radius++;
    return c;
}

int main()
{
    Circle a(5), b(4);
    ++a;
    b = a++;
    a.show();
    b.show();
}