#include <iostream>
using namespace std; 
// napisz program wyświetlajoncy szachownie uzyj znaku spacji oraz #
int main(int argc, char** argv) {
char znak;
cout << "podaj znak"<< endl;
cin >> znak;
for (int j=01;j<8;j++) {		
for (int i=0;i<4;i++) {
if (j%2==0){
cout << znak  << " " ;
 }else{	
cout << " " << znak  ; 

	 
}		
}
cout << endl;
}
	return 0;
}
