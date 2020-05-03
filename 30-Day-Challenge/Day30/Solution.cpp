/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;

	int mat[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>mat[i][j];

	int sum, maxSum = INT_MIN, rowNum=0;
	bool isEqual = false;

	for(int i=0;i<n;i++)
	{
		sum = 0;
		for(int j=0;j<m;j++)
			sum+=mat[i][j];

		if(sum>maxSum)
		{
			maxSum = sum;
			rowNum = i+1;
			isEqual = false;
		}else if(sum==maxSum)
		{
			isEqual = true;
		}
	}

	if(isEqual)
		cout<<"Equal";
	else
		cout<<"Row "<<rowNum;

	return 0;
}
