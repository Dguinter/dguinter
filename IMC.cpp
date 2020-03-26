//IMC Aula 07
//Daniel Guinter
//25-03-2020 1:45-AM

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>


using namespace std;

int main()
{
	
	double altura;
	double peso;
	altura = 0;
	peso = 0;
	cout <<"Digite sua altura: ";
	cin >> altura;
	cout <<"Digite seu peso: ";
	cin >> peso;

	
	double altura2;
	altura2 = altura * altura;
    double imc;
	imc = peso / altura2;
	
	printf("Seu IMC e: " "%.2f\n" , imc);
	
	if (imc<18){
		cout <<"Voce esta abaixo do peso, precisa cuidar da alimentacao" <<endl;
	}
	if (imc=24>18){
		cout <<"Parabens voce esta no peso correto" <<endl;
	}
	if(imc>24){
		cout <<"Voce esta de sobre peso" <<endl;
	}
	system("pause");
	return 0;
} 