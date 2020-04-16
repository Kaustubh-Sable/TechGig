/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n1,m1,n2,m2;
	cin>>n1>>m1;
	int a[n1][m1], ans[n1][m1];

	for(int i=0;i<n1;i++)
		for(int j=0;j<m1;j++)
			cin>>a[i][j];
	
	cin>>n2>>m2;
	int b[n2][m2];
	for(int i=0;i<n2;i++)
		for(int j=0;j<m2;j++)
		{
			cin>>b[i][j];
			ans[i][j] = a[i][j] + b[i][j];
		}

	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			if(j<m1-1)
				cout<<ans[i][j]<<" ";
			else
				cout<<ans[i][j];
		}
		if(i<n1-1)
			cout<<endl;
	}
	return 0;
}
