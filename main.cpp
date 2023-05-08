#include <iostream>
using namespace std;

class A
{
	int* p;
public:
	A(int x = 0)
	{
		p = new int;  *p = x;
	}
	bool operator<(A& obj)
	{
		return S(*this) < S(obj);
	}
	virtual ~A()
	{
		cout << S(*this) << endl; delete p;
	}
	friend int S(A& obj)
	{
		int x = *obj.p;
		int s = 0;
		while (x > 0)
			s += x % 10, x = x / 10;
		return s;
	}
};
int main()
{
	A a1(531), a2(246);
	if (a1 < a2)
		cout << S(a1) << endl;
	else
		cout << S(a2) << endl;

	return 0;
}


