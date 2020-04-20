/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int i;
  
  // code to find out the left bound for our min array
	for(i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
			break;
	}
	
	int min=arr[i];
	i++;
	while(i<n)
	{
		if(arr[i]<min)
			min = arr[i];
		i++;
	}
	int left;
	for(i=0;i<n;i++)
	{
		if(min<arr[i])
		{
			left = i;
			break;
		}
	}

  // code to find out the right bound for our min array
	for(i=n-2;i>=0;i--)
	{
		if(arr[i]>arr[i+1])
			break;
	}
	
	int max=arr[i];
	i--;
	while(i>=0)
	{
		if(arr[i]>max)
			max = arr[i];
		i--;
	}
	int right;
	for(i=n-1;i>=0;i--)
	{
		if(max>arr[i])
		{
			right = i;
			break;
		}
	}

  // printing the answer.
	for(i=left;i<right;i++)
		cout<<arr[i]<<" ";
	cout<<arr[right];

	return 0;
}
