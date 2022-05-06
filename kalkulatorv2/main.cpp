#include <iostream>
using namespace std;

int main(int argc, char** argv) {
char znak;
int q=0, e=0;	


cout<<"1.Dodawanie"<<endl;
cout<<"2.Odejmowanie"<<endl; 
cout<<"3.Mnozenie"<<endl;
cout<<"4.Dzielenie"<< endl;
cin>> znak; 

cout<<"Podaj dzialanie"<<endl;
cin>>q;
cin>>e;	


if(znak == '1'){
	
cout<<"Dodawanie"<<endl; 

cout<< "" << q << "+" << e << "=" << q+e << endl; 

}

if(znak == '2'){
	
cout<<""<< q << "-" << e << "=" << q-e << endl;	
}

if(znak == '3'){
	
cout << "" << q << "*" << e << "=" << q*e << endl;	
}

if(znak == '4'){
	
if(e==0){
	
	std::cout << "nie mozna dzielic przez zero" << std::endl;	
}else{

	std::cout <<"nie dzielisz przez zero " << std::endl;
	
cout << "" << q << "/" << e << "=" << q/e << endl;
	
std::cout <<"Koniec" << endl; 	 
}



		
}


	return 0;
}
