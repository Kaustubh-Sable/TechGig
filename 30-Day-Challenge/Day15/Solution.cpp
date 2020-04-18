/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

int getPow(int n, int m)
{
	if(m==0)
		return 1;

	return n*getPow(n, m-1);
}

int main()
{
	//Write code here
	int n, m;
	cin>>n>>m;

	cout<<getPow(n,m);

	return 0;
}
