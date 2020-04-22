/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
			if(j!=4)
				cout<<" ";
		}
		if(i!=4)
			cout<<endl;
	}

	return 0;
}
