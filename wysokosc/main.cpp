#include <iostream>
using namespace std;

int main()
{	
int wys, punkty_karne=0;	
while (wys>0){
std::cout <<  " Na jakiej wysokosci lecimy ? [w metrach]: ";
std::cin >>wys;
//-----rozwarzamy sytułacje-----
if(wys<500)
{
std::cout<<"\n"<<wys;
if(wys ==1){ cout <<" metr ";}
if((wys >1)&&(wys <5) ){cout<< " metry ";}
if(wys >=5){cout<<" metrow "; }
cout << " to za nisko !\n ";
punkty_karne =punkty_karne +1;
}
else
{
std::cout<<"\n"<< wys <<" metrow jestes juz bezpieczny \n ";
punkty_karne = 0;
}
std::cout<<" Masz "<< punkty_karne; 
if (punkty_karne ==1){cout<<" punkt karny" ;} 
if (punkty_karne >1){cout<<"punkty karne" ;} 
if (punkty_karne >=5){cout<<"punktow karnych";}

//if(){cout << "karny \n ";}
if(punkty_karne) std::cout<<" Popraw sie ! ";


}
return 0;
}
