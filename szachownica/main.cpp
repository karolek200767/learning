#include <iostream>
using namespace std; 
// napisz program wyświetlajoncy szachownie uzyj znaku spacji oraz #
int main(int argc, char** argv) {
//for (;i<8;i++{
//for  (int s=8-i);s>0-;s--){				
//}
//for (int j=0;j<i;j = j + 1){ 
//cout << "#" ;		
//}

//}
for (int j=0;j<8;j++) {		
for (int i=0;i<4;i++) {
if (j%2==0){
cout << "# " ;
 }else{	
cout << " #" ;	 
}		
}
cout << endl;
}
	return 0;
}
