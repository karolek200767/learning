#include <iostream>
#include <string>
using namespace std;
struct film{
string nazwa;
int rok;

	
};

film t[100];
int main(){
film f1;
int filmow = 0;
cout <<"podaj ile chcesz wpisac filmow "<< endl;
cin>> filmow;
for (int i = 0;i < filmow ;i++)
{
cout <<"urzytkowniku podaj nazwe filmu"<< endl;
cin >> t[i].nazwa;
cout <<"urzytkowniku podaj rok"<<  endl;
cin >> t[i].rok;
cout <<"nazwa filmu: "<< endl;
}
cout <<" L.P| NAZWA | ROK "<< endl;
cout <<" ---------------- "<< endl;
	
for (int i = 0;i < filmow ;i++){
cout <<"  |  " << t[i].nazwa <<"  |  "<< t[i].rok << endl;
}
												
return 0;	
}
