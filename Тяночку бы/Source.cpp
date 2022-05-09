#include <iostream>

using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}
	return a + b;
}

int main()
{
	unsigned long long a;
	cin >> a;
	
	cout << gcd(a, a + 1) - 1 << endl;
}