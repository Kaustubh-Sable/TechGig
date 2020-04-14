/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	//Write code here
	int a,b;
	cin>>a>>b;

	bool prime[100000];
	memset(prime, true, sizeof(bool) * 100000);
	prime[0] = prime[1] = false;
	for(int i=2;i<=(b/2)+1;i++)
	{
		for(int j=2;j*i<=b;j++)
			prime[j*i] = false;
	}

	int count = 0;
	for(int i=a;i<b;i++)
	{
		if(prime[i]==true)
			count++;
	}

	cout<<count;

	return 0;
}
