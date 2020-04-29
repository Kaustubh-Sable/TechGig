/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	bool is_consecutive = true;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr.begin(), arr.end());

	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1]+1)
			is_consecutive = false;
	}

	if(is_consecutive)
		cout<<"True";
	else
		cout<<"False";

	return 0;
}
