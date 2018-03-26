#include "bits/stdc++.h"
using namespace std;


int main()
{	
	int largest = 0;
	for(int x = 999; x>1;x--)
		for(int y = 999; y>1;y--)
		{
			int temp = x*y;
			string palindrome = to_string(temp);
			if(palindrome == string(palindrome.rbegin(), palindrome.rend()))
			{
				temp = atoi(palindrome.c_str());
				if (temp > largest)
					largest = temp;
			}
		}
	cout << largest << endl;
}

