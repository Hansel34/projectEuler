#include "bits/stdc++.h"
using namespace std;

long long int fibonacciSum(int n)
{

	long long int sum = 2;
	long long int val1 = 1;
	long long int val2 = 2;
	long long int current = 0;
	while(current <= n)
	{
		current = val1+val2;
		val1 = val2;
		val2 = current;
		if(current%2==0)
			sum+=current;

	}

	return sum;
	
}

int main()
{
	printf("%lld\n",fibonacciSum(4000000));
}