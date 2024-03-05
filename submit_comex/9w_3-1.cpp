#include <iostream>
using namespace std;

class Matrix {
    int n[4];
public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0)
    {
        n[0] = a; n[1] = b; n[2] = c; n[3] = d;
    }
    void show() 
    {
        cout << "Matrix = { ";
        for(int i = 0 ; i < 4 ; i++)
            cout << n[i] << " ";
        cout << "}" << endl;
    }
    Matrix operator >> (int a[])
    {
        for(int i = 0 ; i < 4 ; i++)
            a[i] = n[i];
        return *this;
    }
    Matrix& operator << (const int a[])
    {
        for(int i = 0 ; i < 4 ; i++)
            n[i] = a[i];
        return *this;
    }
};
int main()
{
    Matrix a(4, 3, 2, 1), b;
    int x[4] = { 1, 2, 3, 4 };
    int y[4] = { 1, 2, 3, 4 };
    a >> x;
    b << y;
    for(int i = 0 ; i < 4 ; i++)
        cout << x[i] << ' ';
    cout << endl;
    b.show();
}