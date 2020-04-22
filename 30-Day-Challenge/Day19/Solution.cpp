/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Write code here
	long long bin;
	cin>>bin;

	int i=0, num=0;

	while(bin>0)
	{
		num += (bin%10)*pow(2, i);
		bin/=10;
		i++;
	}

	cout<<num;
  
	return 0;
}
