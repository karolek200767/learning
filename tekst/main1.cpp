#include <iostream>
#include <string>
#include <fstream>

using namespace std;



void plakat(string s);

int main(){
	string klub1("Wisla");
string klub2("Unia");

string mias1("Karakow");
string mias2 ("Tarnow");

cout <<"Podaj nazwe drozy1";
cin >> klub1;
cout <<"Podaj nazwe drozy1";
cin >> klub2;
cout <<"Podsaj zawe miasta";	
cin >>	mias1;
cout <<"Podsaj zawe miasta";

string polaczenie;
polaczenie = klub1 + klub2;
cout <<"Dodanie dowch stringow["<< polaczenie << "]\n\n";

string zapowiedz = klub1 + "-" + mias1;

zapowiedz = zapowiedz + "vs.";

zapowiedz += klub2;
zapowiedz += ('-' + mias2);

cout << "!!! Zapraszamy na mecz !!!\n";
plakat(zapowiedz);

zapowiedz +="  Rezultat meczu";

cout << "\n\nPodaj wynik meczu";
string wynik;
cin >> wynik;

cout << "\n\nUWAGA: wczoraj odbyl sie mecz\n";

plakat (zapowiedz + wynik);
return 0;
}
void plakat(string tresc){
	
string gwiazdki(tresc.length() + 6,'*');
cout << gwiazdki <<'\n'<< gwiazdki << "\r"<< "** " << tresc << " **\n"<< gwiazdki << endl;
}

void dopliku(string tresc){
string gwiazdki(tresc.length() + 6,'*');
ofstream zapis("dane.txt");
zapis << gwiazdki <<'\n'<< gwiazdki << "\r"<< "** " << tresc << " **\n"<< gwiazdki << endl;	
}
