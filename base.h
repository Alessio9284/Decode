#include <iostream>
#include <math.h>

using namespace std;

long get_numero(string);

long all_to_dec()
{
	long risultato = 0;
	string numero;

	cout<<"Inserisci il numero: ";
	cin>>numero;
	
	int base = get_numero("Inserisci la base: ");
	
	for(int j = numero.length() - 1, i = 0; j >= 0; j--, i++)
	{
		if(numero[j] != '0')
		{
			if(numero[j] > '9')
			{
				risultato += pow(base, i) * (numero[j] - '7');
			}
			else
			{
				risultato += pow(base, i) * (numero[j] - '0');
			}
		}
	}
	
	return risultato;
}

string dec_to_all()
{
	string str = "";
	char cifra;
	
	long numero = get_numero("Inserisci il numero: ");
	int base = get_numero("Inserisci la base: ");
	
	while (numero > 0)
	{
		if((numero%base) > 9)
			cifra = '7' + (numero%base);
		else
			cifra = '0' + (numero%base);

		str = cifra + str;
		
		numero /= base;
	}
	
	return str;
}

// controllo del numero inserito
long get_numero(string testo)
{
	long num;
	
	do
	{
		cout<<testo;
		cin>>num;
	}
	while(num < 2);
	
	return num;
}
