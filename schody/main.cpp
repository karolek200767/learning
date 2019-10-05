#include <iostream>
using namespace std;

//najysuj schody
void schodki(int wysokosc){

 for (int szerokosc2=0;szerokosc2<wysokosc*2;szerokosc2 = szerokosc2 + 1){
	cout << "*" ;}	
	{
	cout << endl;
    }
    
}
void karol(){
	int wysokosc=0;
	int zadanawysokosc;
	int wysokocschodka;
	cout << "podaj wysokosc" << endl;
cin >> zadanawysokosc;
cout << "wysokosc schodka" << endl;	
cin >> wysokocschodka;	

for (;wysokosc<zadanawysokosc;wysokosc++) {     		
	for (int schodek=0;schodek<wysokocschodka;schodek++) {
	schodki(wysokosc);	
	//for (int szerokosc2=0;szerokosc2<wysokosc*2;szerokosc2 = szerokosc2 + 1){
	//cout << "*" ;	
	//}
	//cout << endl;
	}
 }	

}

	
int main(int argc, char** argv){
	
	
karol();		    		

return 0;
}
