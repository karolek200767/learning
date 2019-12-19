#include <iostream>
using namespace std;

int main()
{
int wielkosctablicy = 4;
int t[wielkosctablicy];
for(int i = 0 ;i < wielkosctablicy ;i++){	
cout <<  "wpisz liczbe" << endl;
cin >> t [i];
}
//t[i] = 200 * i;
cout<<"wydruk tresci tablicy: \n";
for(int i = 0;i < wielkosctablicy ;i++)
{
cout <<"Element nr:" << i << "ma wartosc" << t[i] << endl;	
}
return 0;	
}
	
