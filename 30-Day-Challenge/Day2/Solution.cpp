/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool is_number(const string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && (isdigit(*it) || *it=='.' || *it=='-'))
        ++it;
    return !s.empty() && it == s.end();
}

int main()
{
	string i;

	getline (cin,i);
    
    if (is_number(i))
    {
        double lol = stod(i);
        if(floor(lol)-lol==0)
            cout <<"This input is of type Integer.";
        else
            cout<<"This input is of type Float.";
    }
    else
    {
        cout<<"This input is of type string.";
    }

	return 0;
}
