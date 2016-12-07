#include<iostream>
using namespace std;

void cmp(int a, int b, int *p)
{
	int count = 0;
	int max = (a > b) ? a : b;
	int min = a + b - max;
	if (max >= 2 * min);
	else
	{
		++(*p);
		cmp(max - min, min,p);
		
	}
}

int main()
{
	
	int a, b;
	cin >> a >> b;
	while (a != 0 && b != 0)
	{
		int count = 0;
		int *p = &count;
		cmp(a, b, p);
		if ((*p) % 2 == 0)
			cout << "Stan wins" << endl;
		else
			cout << "Ollie wins" << endl;
		cin >> a >> b;
	}
	return 0;
}
