/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;

	int odd_sum=0, even_sum=0, temp;

	while(num>0)
	{
		temp = num%10;
		if(temp%2==0)
			even_sum += temp;
		else
			odd_sum += temp;

		num/=10;
	}

	if(even_sum>odd_sum)
		cout<<even_sum-odd_sum;
	else
		cout<<odd_sum-even_sum;

	return 0;
}
