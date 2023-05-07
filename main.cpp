#include <iostream>
using namespace std;

class A1
{
	int x1;
public:
	A1(int x1) :x1(x1) { cout << x1 << endl; }
};
class A2
{
	int x2;
public:
	A2(int x2) :x2(x2) { cout << x2 << endl; }
};

class A
{
	A1 a1;
	A2 a2;
	int x;
public:
	A(int x1, int x2) :a1(x1), a2(x2), x(x1 + x2)
	{
		cout << x << endl;
	}
};
int main()
{
	A a(1, 2);
	A* p = new A(4, 5);

	return 0;
}


