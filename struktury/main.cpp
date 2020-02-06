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
cout <<"urzytkowniku podaj rok"<<  endl;
cin >> f1.rok;
cout <<"nazwa filmu: "<< endl;
cout <<  f1.nazwa  << endl;
cout <<"rok:"<< endl;
cout <<  f1.rok  << endl;

cout <<" L.P| NAZWA | ROK "<< endl;
cout <<" ---------------- "<< endl;
cout <<"  |  " << f1.nazwa <<"      |      "<< f1.rok << endl;
cout <<"  |          |        "<< endl;
cout <<"  |          |        "<< endl;
													
return 0;	
}
