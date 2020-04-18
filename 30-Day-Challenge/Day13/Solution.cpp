/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;

	int mat[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>mat[i][j];

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j!=n-1)
				cout<<mat[j][i]<<" ";
			else
				cout<<mat[j][i];
		}
		if(i!=m-1)
			cout<<endl;
	}

	return 0;
}
