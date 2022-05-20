#include <iostream>
using namespace std;

int main(int argc, char** argv) {
char znak;
int q=0, e=0;	


while (znak != 'o'){

cout<< "o. EXIT" <<endl; 
cout<<"1.Dodawanie"<<endl;
cout<<"2.Odejmowanie"<<endl; 
cout<<"3.Mnozenie"<<endl;
cout<<"4.Dzielenie"<< endl;
cin>> znak; 



if(znak == '1'){
	
cout<<"Podaj dzialanie"<<endl;
cin>>q;
cin>>e;	
	
cout<<"Dodawanie"<<endl; 

cout<< "" << q << "+" << e << "=" << q+e << endl; 

}

if(znak == '2'){
	
cout<<"Podaj dzialanie"<<endl;
cin>>q;
cin>>e;	
	
cout<<""<< q << "-" << e << "=" << q-e << endl;	
}

if(znak == '3'){
	
cout<<"Podaj dzialanie"<<endl;
cin>>q;
cin>>e;	
	
cout << "" << q << "*" << e << "=" << q*e << endl;	
}

if(znak == '4'){
		
cout<<"Podaj dzialanie"<<endl;
cin>>q;
cin>>e;	

while (e == 0){
	if(e==0){
		std::cout << "nie mozna dzielic przez zero" << std::endl;
		cout<<"podaj nowe e" << endl; 
		cin>> e; 	
	}
}
	std::cout <<"nie dzielisz przez zero " << std::endl;
	
cout << "" << q << "/" << e << "=" << q/e << endl;
	



				
			}
 
}
std::cout <<"Koniec" << endl; 	
	return 0;
}
