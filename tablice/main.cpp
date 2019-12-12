#include <iostream>
using namespace std;

int main()
{
int t[4];	
for(int i = 0 ;i < 4 ;i++)
t[i] = 100 * i;
cout<<"wydruk tresci tablicy: \n";
for(int i = 0;i < 4 ;i++)
{
cout <<"Element nr:" << i << "ma wartosc" << t[i] << endl;	
}
return 0;	
}
