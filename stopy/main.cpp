#include <iostream>
using namespace std;

int main()
{	
int stopy;
double  metry;
double  przelicznik = 0.3;

std::cout << "Podaj wysoosc w stopach:";
std::cin>>stopy;

metry = stopy*przelicznik;

std::cout<< "\n";

//-----wpisanie wynikow-----
std::cout<<stopy<<"stop -tojest:"<< metry << "metrow\n";






return 0;
}
//===========================================================












