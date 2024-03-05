
#include <iostream>
#include <string>
using namespace std;

class BaseArray {
	int usage;
	int *p;
protected : 
	BaseArray(int usage = 100) { this->usage = usage; p = new int [usage]; }
	~BaseArray() { delete [] p; }
	void set(int a, int val) { p[a] = val; }
	int get(int a) { return p[a]; }
	int getusage() { return usage; }
};

class MyStack : public BaseArray {
	int max;
public :
	MyStack(int size) : BaseArray(size){ max = 0; }
	void push(int n) { set(max, n); max++; }
	int capacity() { return getusage(); }
	int length() { return max; }
	int pop() { max--; return get(max); }
};

int main() {
	MyStack mStack(100);
	int n;
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for(int i = 0 ; i < 5 ; i++)
    {
		cin >> n;
		mStack.push(n);
	}
	cout << "스택용량:" << mStack.capacity() << ", 스택크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while(mStack.length() != 0) 
    {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}