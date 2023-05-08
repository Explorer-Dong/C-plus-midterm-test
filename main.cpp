#include <iostream>
using namespace std;

class A
{
	int* p;
public:
	A(const int x = 0)
	{
		p = new int;  *p = x;
	}
	A(const A& obj)
	{
		p = new int;  *p = (*obj.p) + 1;
	}
	A& operator=(A& obj)
	{
		if (this == &obj) return *this;
		*p = *obj.p + 10;
		return *this;
	}
	virtual ~A()
	{
		cout << -(*p) << endl; delete p;
	}
};
int main()
{
	A a1(1);
	A a2(a1), a3;
	a3 = a2 = a1;

	return 0;
}
