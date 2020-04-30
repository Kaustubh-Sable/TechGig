/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;

	int mat[m][n];

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>mat[i][j];

	int sum1=0,sum2=0;
	for(int i=0;i<m;i++)
	{
		sum1+=mat[i][i];
		sum2+=mat[i][n-1-i];
	}

	if(sum1>sum2)
		cout<<"Diagonal 1";
	else if(sum2>sum1)
		cout<<"Diagonal 2";
	else
		cout<<"Equal";

	return 0;
}
