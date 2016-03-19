#include <iostream>
#include "obras.h"
#include "literatura.h"
#include "desing.h"
#include "pintura.h"
#include "escultura.h"
#include <string>
#include <vector>

using std::cout; 
using std::cin; 
using std::string; 
using std::endl;
using std::vector;  

int main(int argc, char*argv[])

{
	int op,tipoobra; 
	string nombreobra,autor,fecha; 
	vector <obras> nuevo; 
	vector <obras> eliminadas; 

	cout<<"\n-------------------------BIENVENIDO------------------------\nQue desea hacer??\n"
		<<"1 - Agregar nueva obra\n2 - transferir obras a otro museo\n3 - listar Existentes\n4 - salir\nIngrese una opcion"<<endl; 
	cin>>op; 

	while (op != 4)
	{

		if(op == 1)
		{
			cout<<"Ingrese elnombre de la obra:  ";
			cin.ignore(); 
			getline(cin,nombreobra);
			cout<<"Ingrese el autor:  ";
			getline(cin,autor);
			cout<<"Ingrese la fecha"; 
			getline(cin,fecha);
			cout<<endl; 
			cout<<"seleccione que tipo de obra es: 1 - Pintura\n2 - Escultura\n Literatura\nArquitectura\n";
			cin>>tipoobra; 



		}

		cout<<"\n-------------------------BIENVENIDO------------------------\nQue desea hacer??\n"
			<<"1 - Agregar nueva obra\n2 - transferir obras a otro museo\n3 - listar Existentes\n4 - salir\nIngrese una opcion"<<endl; 
		cin>>op;
	}

	return 0;

}