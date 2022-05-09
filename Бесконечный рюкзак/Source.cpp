#include <iostream>

using namespace std;

int main()
{
	int a, b;
	
	cin >> a >> b;
	
	if ((b - a + 1) % 2 == 0)
	{
		cout << (a + b) * ((b - a + 1) / 2);
	}
	else
	{
		cout << (a + b) * ((b - a) / 2) + (a + b) / 2;
	}
}