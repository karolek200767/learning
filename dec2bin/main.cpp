#include <iostream>
using namespace std;

void dec2bin(int liczba){
if (liczba>0){
dec2bin(liczba/2);	
}		
cout << liczba%2 << endl;	
	
}

int main(int argc, char** argv){
int liczba;	
cout << "Podaj liczbe" << endl;
cin >> liczba;	
cout << "Postac binarna liczby to" << endl;		
dec2bin(liczba);
	
	
return 0;	
}










