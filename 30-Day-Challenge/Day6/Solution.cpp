/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int num;
	cin>>num;

	int count = 0;
	while(num>0)
	{
		count++;
		num /= 10;
	}

	cout<<count;

	return 0;
}
