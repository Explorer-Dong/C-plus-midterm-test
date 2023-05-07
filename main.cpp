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
	A a[] = { A(1),A(2) };
	A* p[] = { new A(3),new A(4) };

	return 0;
}




