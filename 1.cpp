#include <iostream>
#include <string>

using namespace std;

int main()
{
string n;
cin >> n;
for (int i=1; i<n.length();i++)
{
	if(n[i]>96)
	{
	cout << n;
	return 0;
	}
}
for (int i=0; i<n.length();i++)
{
	if(n[i]<97)
	n[i]=n[i]+32;
	else
	n[i]=n[i]-32
}
cout << n;
return 0;
}