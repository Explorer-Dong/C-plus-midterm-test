#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A(const int x) :x(x)
	{
		cout << x << endl;
	}
	A(const A& obj) :x(obj.x + 1)
	{
		cout << x << endl;
	}
	virtual ~A()
	{
		cout << -x << endl;
	}
};
int main()
{
	A* p1 = new A(3);
	A* p2 = new A(*p1);
	delete p1;
	delete p2;
	return 0;
}

