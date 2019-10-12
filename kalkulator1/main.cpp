#include <iostream>
using namespace std;

void wpisz(float &x, float &y){
cout << "Podaj x" << endl;
cin >> x;
cout << "Podaj y" << endl;
cin >> y;
cout << "POdales x = " << x << " y = " << y << endl;
}
int main(int argc, char** argv){
char znak;
float x=0 ,y=0;
	
while(znak !='q'){

cout << "Wybierz pozycje z menu:" << endl;
cout << "q) aby wyjśc" << endl;
cout << "1) Dodawanie" << endl;
cout << "2) Odejmowanie" << endl;
cout << "3) Mnorzenie" << endl;
cout << "4) Dzielenie" << endl;
cin >> znak;
	
if(znak == '1'){
cout << "Dodawanie" << endl;	
wpisz(x,y);
cout << "" << x << " + " << y << " = " << x+y << endl; 	
}
if(znak =='2'){
cout << "Odejmownie" << endl;	
wpisz(x,y);	
cout << "" << x << " - " << y << " = " << x-y << endl;
}
if(znak =='3'){
cout << "Mnozenie" << endl;	
wpisz(x,y);	
cout << "" << x << " * " << y << " = " << x*y << endl;		
}
if(znak =='4'){
cout << "Dzielenie" << endl;	
wpisz(x,y);	
cout << "" << x << " / " << y << " = " << x/y << endl;
	}
}
return 0;
}
