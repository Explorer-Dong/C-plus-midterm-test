#include <iostream>
using namespace std;

class A1
{
	int x1;
public:
	A1(int x1) :x1(x1) { cout << x1 << endl; }
	virtual ~A1() { cout << -x1 << endl; }
};
class A
{
	A1* p1;
	int x;
public:
	A(int x1, int x) :x(x)
	{
		p1 = new A1(x1);
	}
	virtual ~A()
	{
		delete p1;      cout << -x << endl;
	}
};
int main()
{
	A a(1, 2);
	A* p = new A(4, 5);
	delete p;

	return 0;
}



