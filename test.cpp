#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static int abcd = 5;
int ghfhfh;

class test
{
public:
	test(int x);
	int cmp(test B);

private:
	int a;
	int b;
	string x;
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
	test x(2);
	string m = "123";
	test B(-1);
	int cao = A.cmp(B);
	cout << cao << endl; 

	m.find(m);
	return 0;
}
