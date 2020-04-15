/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	// We can also use a priority queue of length two for this solution.
	int n, temp, max=0;
	
	cin>>n;
	
	vector<int> nums;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		nums.push_back(temp);

		if(temp>max)
			max = temp;
	}

	int max1=0;
	for(int i=0;i<n;i++)
	{
		if(nums[i]!=max && nums[i]>max1)
			max1 = nums[i];
	}

	cout<<max1;

	return 0;
}
