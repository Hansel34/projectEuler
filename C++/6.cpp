#include "bits/stdc++.h"
using namespace std;


int main()
{	
	long long int sumOfSquares = 0;
	long long int squareOfSums = 0;
	int x = 1;
	for (int i = 1; i<=100;i++)
	{
		sumOfSquares+= i*i;
		squareOfSums+= i;
	}
	squareOfSums= squareOfSums*squareOfSums;
	printf("%lld",squareOfSums-sumOfSquares);

}

