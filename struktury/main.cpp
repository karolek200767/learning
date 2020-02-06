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
cout <<"urzytkowniku podaj nazwe filmu"<< endl;
cin >> t[0].nazwa;
cout <<"urzytkowniku podaj rok"<<  endl;
cin >> t[0].rok;
cout <<"nazwa filmu: "<< endl;

cout <<"urzytkowniku podaj nazwe filmu"<< endl;
cin >> t[1].nazwa;
cout <<"urzytkowniku podaj rok"<<  endl;
cin >> t[1].rok;
cout <<"nazwa filmu: "<< endl;

cout <<"urzytkowniku podaj nazwe filmu"<< endl;
cin >> t[2].nazwa;
cout <<"urzytkowniku podaj rok"<<  endl;
cin >> t[2].rok;
cout <<"nazwa filmu: "<< endl;

cout <<"urzytkowniku podaj nazwe filmu"<< endl;
cin >> t[3].nazwa;
cout <<"urzytkowniku podaj rok"<<  endl;
cin >> t[3].rok;
cout <<"nazwa filmu: "<< endl;

cout <<"urzytkowniku podaj nazwe filmu"<< endl;
cin >> t[4].nazwa;
cout <<"urzytkowniku podaj rok"<<  endl;
cin >> t[4].rok;
cout <<"nazwa filmu: "<< endl;

cout <<" L.P| NAZWA | ROK "<< endl;
cout <<" ---------------- "<< endl;
cout <<"  |  " << t[0].nazwa <<"  |  "<< t[0].rok << endl;
cout <<"  |  " << t[1].nazwa <<"  |  "<< t[1].rok << endl;
cout <<"  |  " << t[2].nazwa <<"  |  "<< t[2].rok << endl;
cout <<"  |  " << t[3].nazwa <<"  |  "<< t[3].rok << endl;
cout <<"  |  " << t[4].nazwa <<"  |  "<< t[4].rok << endl;
													
return 0;	
}
