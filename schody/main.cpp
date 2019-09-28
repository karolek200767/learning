#include <iostream>
using namespace std;

//najysuj schody
void karol(){
	int wysokosc=0;
	int zadanawysokosc;
	int wysokocschodka;
cin >> zadanawysokosc;	
cin >> wysokocschodka;	

for (;wysokosc<zadanawysokosc;wysokosc++) {     		
	for (int schodek=0;schodek<wysokocschodka;schodek++) {
	for (int szerokosc2=0;szerokosc2<wysokosc*2;szerokosc2 = szerokosc2 + 1){
	cout << "*" ;	
	}
	cout << endl;
	}
 }	

}

 
int main(int argc, char** argv){
cout << "podaj wysokosc" << endl;	
cout << "wysokosc schodka" << endl;	
karol();		    		

return 0;
}
