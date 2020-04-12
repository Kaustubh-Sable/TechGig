/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Write code here
	double a;
	int b,c;
	cin>>a>>b>>c;

	double ans = (a*b*c)/100;
	cout<<round(ans);
	return 0;
}
