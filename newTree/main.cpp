#include <iostream>
using namespace std;

int main(int argc, char** argv) {
int zmienna=6;
	
for (int i=0;i<zmienna;i++){
cout <<"" ;
	
for (int p=zmienna-i;p>0;p--){
cout <<" " ;	
		}
		
for (int o=0;o<i;o++){
cout <<"*" ;	
	
	}
for (int j=0;j<i;j++){
cout<< "*" ;	
}	

cout << endl;		
}

for (int y=0;y<2;y++){
cout <<"**"<< endl;

for (int t=0;t<1;t++){
cout <<"     "; 	
	} 	
}


	
	
return 0;
}
