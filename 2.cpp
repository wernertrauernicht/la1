#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "russian");
int n, t;
cout << "Введите размер числа: "; cin >> n;
cout << "Введите число на которое делится: "; cin >> t;
if (n==1 && t==10)
cout << -1;
else
{
cout << t;
if (t==10)
n -= 2;
else
n--;
for(int i=0; i<n; ++i)
cout << 0;
}
return 0;
}