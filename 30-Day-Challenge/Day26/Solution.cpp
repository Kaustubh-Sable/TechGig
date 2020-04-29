/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int temp,num,max=0;
	cin>>num;
	while(num>0)
	{
		temp = num%10;
		if(temp>max)
			max = temp;
		num/=10;
	}

	cout<<max;

	return 0;
}
