#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A(int x) :x(x) { }
	A(A& obj) :x(obj.x + 1)
	{
		cout << x << endl;
	}
	virtual ~A()
	{
		cout << -x << endl;
	}
};
void f(A& a1, A a2)
{
	A a3(a1);
}
int main()
{
	A a1(1), a2(2);
	f(a1, a2);

	return 0;
}

