#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Sum1, Sum2;
	cout << string(30, ' ') << "******* Calculadora Soma *******" << endl;
	cout << string(30, ' ') << "Digite um número: ";
	cin >> Sum1;
	cout << string(30, ' ') << "Digite outro número: ";
	cin >> Sum2;
	int Sum3 = Sum1 + Sum2;
	cout << string(30, ' ') << "*******************************" << endl;
	cout << string(30,' ') << "A soma de " << Sum1 
		<< " + " << Sum2 << " totalizou: " 
		<< Sum3 << endl;
	system("PAUSE");
	
}