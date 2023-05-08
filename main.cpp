#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A(int x = 0) :x(x) { cout << x << endl; }
	A(const A& obj) :x(obj.x + 1) { cout << x << endl; }
	virtual ~A() { cout << -x << endl; }
};
A f(A a1)
{
	return a1;
}
int main()
{
	A a1;
	A a2 = f(a1);

	return 0;
}
