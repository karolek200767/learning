#include <iostream>
using namespace std;


void wpisz(int &x, int &y){
cout << "Podaj x" << endl;	
cin >>x;	
cout << "Podaj y" << endl;	
cin >>y;	
cout << "Podales x = "	 << x  << " y = " << y << endl;
}


int main(int argc, char** argv){
char znak;	
int x=0 ,y=0;	


while(znak !='q'){

cout << "Wybierz pozycje z menu:" << endl;
cout << "q) aby wpisac" << endl;
cout << "1) Dodawane" << endl; 
cout << "2) Odejmowanie" << endl;
cout << "3) Mnozenie" << endl;
cout << "4) Dzielenie" << endl;
cin >> znak;

if(znak == '1'){
cout << " Dodawanie" << endl;	
wpisz(x,y);
cout << "" << x << " + " << y << " = " << x+y << endl;
}
if(znak == '2'){
cout << "Odejmowanie" << endl;
wpisz(x,y);
cout << "" << x << " - " << y << " = " << x-y << endl; 	
}
if(znak =='3'){
cout << "Mnozenie" << endl;	
wpisz(x,y);	
cout << ""	<< x << " * "<< " = " << x*y << endl;
}
if(znak =='4'){
cout << "Dzielenie" << endl;	
wpisz(x,y);
if( y== 0 ){
cout << "nie mozna dzielic przez zero" << endl;	
}else{
cout << "" << x << " / " << y << " = " << x/y << endl;	
		}	
	
	}
}	
  return 0;	
}

