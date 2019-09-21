#include <iostream>
using namespace std;

//najysuj schody
int zadanawysokosc; 
int main(int argc, char** argv){
cout << "podaj wysokosc" << endl;	
cin >> zadanawysokosc; 	
int wysokosc=0;
	for (;wysokosc<zadanawysokosc;wysokosc++) {     		
	for (int szerokosc=0;szerokosc<wysokosc*2;szerokosc = szerokosc + 1){
	cout << "*" ;
	} cout << endl;
	for (int szerokosc2=0;szerokosc2<wysokosc*2;szerokosc2 = szerokosc2 + 1){
	cout << "*" ;	
	}
	cout << endl;
	
	
}

return 0;
}







