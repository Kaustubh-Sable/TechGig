/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	string line;
	getline(cin,line);

	int lower=0,upper=0;

	for(int i=0;i<line.length();i++)
	{
		if(line[i]>='a' && line[i]<='z')
			lower++;
		else if(line[i]>='A' && line[i]<='Z')
			upper++;
	}

	cout<<upper<<endl<<lower;

	return 0;
}
