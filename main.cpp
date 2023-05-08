#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A(const int x) :x(x) { cout << x << endl; }
	A(const A& obj) :x(obj.x + 1) { cout << x << endl; }
	virtual ~A() { cout << -x << endl; }
};
A& f(A a1)
{
	A* p = new A(a1);
	return *p;
}
int main()
{
	A a1(1);
	A& a2 = f(a1);
	delete& a2;

	return 0;
}

