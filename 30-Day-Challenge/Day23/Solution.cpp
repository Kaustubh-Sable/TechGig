/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int n, num, min, max;
	cin>>n;

	cin>>num;
	min = max = num;
	for(int i=1;i<n;i++)
	{
		cin>>num;
		if(num>max)
			max = num;
		if(num<min)
			min = num;
	}

	cout<<min*max;

	return 0;
}
