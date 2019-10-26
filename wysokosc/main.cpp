#include <iostream>
using namespace std;

int main()
{
int wys, punkty_karne;

std::cout <<  " Na jakiej wysokosci lecimy ? [w metrach]: ";
std::cin >>wys;
//-----rozwarzamy sytułacje-----
if(wys<500)
{
std::cout<<"\n"<<wys<<" metrow to za nisko !\n ";
punkty_karne = 1;
}
else
{
std::cout<<"\n"<< wys <<" metrow jestes juz bezpieczny \n ";
punkty_karne = 0;
}
std::cout<<" Masz "<< punkty_karne <<" punktow karnych \n ";
if(punkty_karne) std::cout<<" Popraw sie ! ";

return 0;
}













