#include <iostream>
using namespace std;


void woisz(int &x, int &y){
cout << "Podaj x" << endl;	
cin >>x;	
cout << "Podaj y" << endl;	
cin >>y;	
cout << "Podales x = "	 << x  << " y = " << y << endl;
}


int main(int argc, char** argv){
chard znak;	
int x=0 ,y=0;	


while(znak !='q'){

cout << "Wybierz pozycje z menu:" << endl;
cout << "q) aby wpisac" << endl;
cout << "1) Dodawane" << endl; 
cout << "2) Odejmowanie" << endl;
cout << "Mnozenie" << endl;
cout << "Dzielenie" << endl;
cin >> znak;

if(znak == '1'){
cout << " Dodawanie" << endl;	
wpsz(x,y);
cout << "" << x << " + " << y << " = " << x+y << endl;
}
if(znak == '2'){
cout << "Odejmowanie" << endl;
wpisz(x,y);
cout << "" << x << " - " << y << << x-y << endl; 	
}





}	
	
}

