#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;
public:
    Converter(double ratio) { this->ratio = ratio; }
    void run()
    {
        double src;
        cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
        cout << getSourceString() << "을 입력하세요>> ";
        cin >> src;
        cout << "반환 결과 : " << convert(src) << getDestString() << endl;
    }
};

class KmToMile : public Converter {
    double n;
public:
    KmToMile(double n) : Converter(n) { this->n = n; }
    double convert(double src) { return src/n; }
    string getSourceString() { return "Mile"; }
    string getDestString() { return "Km"; }
};

int main()
{
    KmToMile toMile(1.609344);
    toMile.run();
}