#include <iostream>
#include <string>
using namespace std;

class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
    void eset(int x, int y) { this->x = x; this->y = y; }
    void eshow() { cout << "(" << x << "," << y << ")"; }
};

class ColorPoint : Point {
    string color;
public:
    ColorPoint(int x = 0, int y = 0) { eset(x, y); color = "BLACK"; }
    void setColor(string color = "BLACK") { this->color = color; }
    void setPoint(int x, int y) { eset(x, y); }
    void show()  
    {
        cout << colo << "색으로 ";
        eshow();
        cout << "에 위치한 점입니다." << endl;
    }
};

int main()
{
    ColorPoint zeroPoint;
    zeroPoint.show();

    ColorPoint cp(5, 5);
    cp.setColor("BLUE");
    cp.show();   
}