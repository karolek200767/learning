#include <iostream>
using namespace std;

unsigned int silniaint (int n){	
if (n<2){	
return 1;	
	
	}
return n*silniaint(n-1);			
}

unsigned long long silnialong (int n){
if (n<2){	
return 1;	
	
	}
return n*silnialong(n-1);			
}
int main(int argc, char** argv){
int liczba;
cout << "Podaj liczbe" << endl;	
cin>> liczba;	
cout << "n !=" << silniaint (liczba)<< endl;
cout << "n !=" << silnialong (liczba)<< endl;












	
return 0;		
}















