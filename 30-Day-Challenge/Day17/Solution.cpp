/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main()
{
	int n, num;
	cin>>n;
	vector<int> nums;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		nums.push_back(num);
	}

	int target;
	cin>>target;

	unordered_set<int> uset;
	bool flag = false;

	for(int i=0;i<n;i++)
	{
		if(uset.find(target-nums[i])!=uset.end())
		{
			flag = true;
		}
		uset.insert(nums[i]);
	}

	if(flag)
		cout<<"True";
	else
		cout<<"False";

	return 0;
}
