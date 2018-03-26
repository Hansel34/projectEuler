#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int x = 0; x < 1000; x++)
	{
		if ( (x%5==0) || (x%3==0) )
			sum += x;
	}

	cout << sum;
}