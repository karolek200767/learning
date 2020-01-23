#include <iostream>
#include <string>
using namespace std;
struct film{
string nazwa;
int rok;

	
};
int main(){	
film f1;
cout <<"urzytkowniku podaj nazwe filmu"<< endl;
cin >> f1.nazwa;
cin >> f1.rok;
cout <<  f1.nazwa  << endl;
cout <<  f1.rok  << endl;
	
return 0;	
}
