#include <iostream>
#include <iomanip>

#include "cuenta.h"
#include "ahorros.h"
#include "cheque.h"

using namespace std; 

int main()
{
	cout << setw(20) << "\n#·······#" << endl;
	cout << "Prueba de la clase cuenta" << endl;
 
	Cuenta cuenta1(-71.4);
	Cuenta cuenta2(3500.7);

	cuenta2.abonar(80.1);
	cuenta2.abonar(-3.5);

	cuenta2.cargar(350.0);
	cuenta2.cargar(90);


	cout << setw(20) << "\n#·······#" << endl;
	cout << "Prueba de la clase CuentaAhorros" << endl;

	CuentaAhorros ahorros1(1000.0, 0.03);

	cout << "\nfunciones de la clase" << endl;
	ahorros1.abonar(90.2);
	ahorros1.cargar(75.9);

	cout << "\nSe agrega interés: " << endl; 
	ahorros1.agr_Interes();


	cout << setw(20) << "\n#·······#" << endl;
	cout << "Prueba de la clase CuentaCheques" << endl;

	CuentaCheques cheques1(1000.0, 8.0);

	cout << "\nfunciones de la clase modificadas" << endl;
	cheques1.abonar(115.1);
	cheques1.cargar(79.7);


	return 0;
}
