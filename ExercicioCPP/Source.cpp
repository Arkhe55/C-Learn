#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media{ 0.0 };
	char Resposta;
	do
	{
		cout << "Digite um n�mero decimal: " << endl;
		cin >> Num1;
		cout << "Digite outro n�mero decimal: " << endl;
		cin >> Num2;
		cout << "Digite outro n�mero decimal: " << endl;
		cin >> Num3;
		cout << "Todos N�meros digitados: " << Num1 << " " << Num2 << " " << Num3 << " " << endl;
		Media = (Num1 + Num2 + Num3) / 3;
		cout << "Resultado da M�dia: " << fixed << setprecision(2) << Media << endl;
		cout << "Deseja calcular outra M�dia aritmetica?(Responda S para Sim e N para N�o: )";
		cin >> Resposta;
	} while (Resposta == 'S' || Resposta == 's');
	
	cout << "\nSaindo do programa...";
	system("PAUSE");
	return 0;
}