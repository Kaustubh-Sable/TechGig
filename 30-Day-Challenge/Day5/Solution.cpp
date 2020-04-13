/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int num;
	long long fact = 1;

	cin>>num;
	while(num>1)
	{
		fact *= num;
		num--;
	}

	cout<<fact;

	return 0;
}
