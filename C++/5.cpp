#include "bits/stdc++.h"
using namespace std;


int main()
{	
	int x = 1;
	while(true)
	{
		bool isDivisible = true;
		for(int i = 1; i <= 20;i++)
		{
			if (x%i != 0)
				isDivisible = false;
		}
		if (isDivisible)
		{
			printf("%d",x);
			exit(0);
		}
		x++;
	}
}

