#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A(int x = 3) :x(x)
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
	A a1, a2(4);
	return 0;
}
