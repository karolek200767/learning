#include <iostream>
#include <string>
using namespace std;
struct film{
string nazwa;
int rok;
	
};
int maks=0;
film t[100];
int dlugosc [100];
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
for (int i = 0;i < filmow ;i++){
int tmp=t[i].nazwa.length();
//if jezeli tmp jest wienkszy od maks to maks=tmp;
if (tmp>maks){
maks=tmp;
cout << maks << endl;	
 }
}
for (int i = 0;i < filmow ;i++){
dlugosc[i] = t[i].nazwa.length();
//if jezeli tmp jest wienkszy od maks to maks=tmp;
}

cout << "najdłurzszy ma"<< endl;
cout << maks << endl;
cout <<" L.P| NAZWA | ROK "<< endl;
cout <<" ---------------- "<< endl;	
for (int i = 0;i < filmow ;i++){
cout <<"  |  " ;
int ile = maks-dlugosc[i];
for (int k = 0;k < ile ;k++){
	cout<< " " ;
	}
cout << t[i].nazwa 
<<"  |  "
<< t[i].rok
<< " | "
<< dlugosc [i] << endl;
}
											
return 0;	
}
