#include <iostream>
using namespace std;

int main()
{

int ile;

std::cout<<"ile gwiazdek ma miec kapitan ?:";
std::cin >> ile;
std::cout <<"\n No to narysujmy wszystkie "<< ile <<":";

while(ile)
{
std::cout<<"*";
ile = ile - 1;
}
std::cout<<"\n teraz zmienia ile ma wartosc" << ile;


return 0;
}











