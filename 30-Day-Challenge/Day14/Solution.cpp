/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	cin>>n;

	vector<string> vec;
	string temp;

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		vec.push_back(temp);
	}

	sort(vec.begin(),vec.end());

	for(int i=0;i<n;i++)
	{
		cout<<vec[i];
		if(i!=n-1)
			cout<<endl;
	}

	return 0;
}
