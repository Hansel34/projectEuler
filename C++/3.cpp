#include "bits/stdc++.h"
using namespace std;

void checkForLargestPrimeFactor(long long int n)
{

    for (long long int p=sqrt(n); p>=2; p--)
    {	
    	
    	if (n%p==0)
    	{
    		bool isPrime = true;
	        for(long long int temp = 2; temp*temp<p;temp++)
	        {
	        	if (p%temp ==0)
	        	{
	        		isPrime = false;
	        	}
	        }
	    	if (isPrime == true)
	    	{
	    		printf("%lld\n",p);
	    		exit(0);
	    	}
		}
    }
 }


int main()
{
	checkForLargestPrimeFactor(600851475143);	
}

