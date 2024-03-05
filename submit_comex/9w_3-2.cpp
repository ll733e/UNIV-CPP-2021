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
    friend Matrix operator <<(Matrix& a, const int b[]);
    friend Matrix operator >>(const Matrix a, int b[]);
};

Matrix operator <<(Matrix& a, const int b[])
{
    for(int i = 0 ; i < 4 ; i++)
        a.n[i] = b[i];
    return a;
}

Matrix operator >>(const Matrix a, int b[])
{
    for(int i = 0 ; i < 4 ; i++)
        b[i] = a.n[i];
    return a;
}
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