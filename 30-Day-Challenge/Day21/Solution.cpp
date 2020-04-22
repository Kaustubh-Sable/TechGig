/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

int main()
{
	//Write code here
	int n;
	cin>>n;
	int A[n];
	long oddSum=0, evenSum=0;
	long long ans;
	
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		if(A[i]%2==0)
			evenSum += A[i];
		else
			oddSum += A[i];
	}

	ans = oddSum*evenSum;
	cout<<ans;

	return 0;
}
