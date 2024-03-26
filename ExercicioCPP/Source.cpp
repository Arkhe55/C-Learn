#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media{ 0.0 };
	
	cout << "Digite um número decimal: " << endl;
	cin >> Num1;
	cout << "Digite outro número decimal: " << endl;
	cin >> Num2;
	cout << "Digite outro número decimal: " << endl;
	cin >> Num3;
	cout << "Todos Números digitados: " << Num1 << " " << Num2 << " " << Num3 << " " << endl;
	Media = (Num1 + Num2 + Num3) / 3;
	cout << "Resultado da Média: " << Media << endl;
	system("PAUSE");
	return 0;
}