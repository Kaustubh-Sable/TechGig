/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int num1,num2;
	cin>>num1>>num2;

	int sum1=0,sum2=0, temp1=num1, temp2=num2;

	while(temp1>0)
	{
		sum1+=temp1%10;
		temp1/=10;
	}

	while(temp2>0)
	{
		sum2+=temp2%10;
		temp2/=10;
	}

	if(sum1>sum2)
		cout<<num1;
	else if(sum2>sum1)
		cout<<num2;
	else
		cout<<"Equal";

	return 0;
}
