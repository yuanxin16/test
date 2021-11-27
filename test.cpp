#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int xxxxx=2;

class test
{
public:
	test(int x);
	int cmp(test B);

private:
	int a;
};

test::test(int x)
{
	a = x;
}
int test::cmp(test t)
{
	if (this->a > t.a)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

int main() {
	test A(1);
	test B(-1);
	int cao = A.cmp(B);
	cout << cao << endl; 

	m.find(m);
	return 0;
}
