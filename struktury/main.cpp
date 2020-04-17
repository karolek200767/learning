#include <iostream>
#include <string>
#include<fstream>
using namespace std;
ofstream zapis("dane.txt");//obiekt tworzymy tylko raz

struct film{
string nazwa;
int rok;
	
};
int maks=0;
film t[100];
int dlugosc [100];
film f1;
int filmow = 0;


int podajrok(){
int wprowadzona = 0;
cin >> wprowadzona;
if (wprowadzona > 1000){
if (wprowadzona < 3000){
return wprowadzona;	
}else{
cout <<"podana liczba jest za du¿a";	
}

}else{
cout <<"podana liczba jest za mala";
};
	
return podajrok();	
}
void podawanie(){
cout <<"podaj ile chcesz wpisac filmow "<< endl;
cin>> filmow;
for (int i = 0;i < filmow ;i++)
{
cout <<"urzytkowniku podaj nazwe filmu"<< endl;
cin >> t[i].nazwa;
cout <<"urzytkowniku podaj rok"<<  endl;
//cin >> t[i].rok;
t[i].rok = podajrok();
//cout <<"nazwa filmu: "<< endl;
 }

} 

void obliczaniemaks(){
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

cout << "najd³urzszy ma"<< endl;
cout << maks << endl;

}

void wyswietlanie(){
cout <<"L.P| NAZWA";
for (int k = 0;k < maks-3 ;k++){
	cout<< " " ;
}
cout<< "| ROK "<< endl;
for (int pl = 0;pl < maks + 20 ;pl++){
cout << "-" ;	
} 
cout << endl;	
for (int i = 0;i < filmow ;i++){
int lp = i + 1;
cout << lp <<"  |  " ;
int ile = maks-dlugosc[i];

cout << t[i].nazwa ;  

for (int k = 0;k < ile ;k++){
	cout<< " " ;
}

cout <<"  |  "
<< t[i].rok
<< " | "
<< dlugosc [i] << endl;
}

}

void zapisywanie(){
zapis <<"L.P| NAZWA";
for (int k = 0;k < maks-3 ;k++){
	zapis<< " " ;
}
zapis<< "| ROK "<< endl;
for (int pl = 0;pl < maks + 20 ;pl++){
zapis << "-" ;	
} 
zapis << endl;	
for (int i = 0;i < filmow ;i++){
int lp = i + 1;
zapis << lp <<"  |  " ;
int ile = maks-dlugosc[i];

zapis << t[i].nazwa ;  

for (int k = 0;k < ile ;k++){
	zapis<< " " ;
}

zapis <<"  |  "
<< t[i].rok
<< " | "
<< dlugosc [i] << endl;
}

zapis.close(); //obowi¹zkowo nale¿y zamkn¹æ plik
}
int main(){	
podawanie();
obliczaniemaks();
wyswietlanie();
zapisywanie();										
return 0;	
}

