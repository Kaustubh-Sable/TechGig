/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Write code here
	int num;
	cin>>num;

	int sum = 0, temp = num;

	while(temp>0)
	{
		sum+=pow(temp%10,3);
		temp/=10;
	}

	if(sum==num)
		cout<<"True";
	else
		cout<<"False";

	return 0;
}
