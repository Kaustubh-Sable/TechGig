/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//Write code here
	int n;
	cin>>n;
	int num, odd_sum=0, even_sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		if(i%2==0)
			even_sum+=num;
		else
			odd_sum+=num;
	}

	cout<<abs(even_sum-odd_sum);

	return 0;
}
