/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int age;
	cin>>age;
	if(age<10)
		cout<<"I am happy as having no responsibilities.";
	else if(age<18)
		cout<<"I am still happy but starts feeling pressure of life.";
	else
		cout<<"I am very much happy as i handled the pressure very well.";
	
	return 0;
}
