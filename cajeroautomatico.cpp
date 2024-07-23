#include <iostream>
using namespace std;

int main ()
{
  const string claveCorrecta = "1234";
  cout << "BIENVENIDO AL CAJERO AUTOMATICO\n";
  cout << "Ingrese la clave: ";
  string clave = "";
  cin >> clave;
  while (clave != claveCorrecta)
    {
      cout << "Error, clave incorrecta" << endl;
      cout << "Introduzca la clave correcta: ";
      cin >> clave;
      cout << "----------------" << endl;
    }
    system("cls");
  cout << "Clave correcta." << endl;
  cout << "BIENVENIDO USUARIO" << endl;

  double fondos = 5000;

  string eleccion = "";
  // MenC:
  while (eleccion != "4")
    {
      cout<<"OPCIONES"<<endl;
      cout <<"1. Retirar dinero\n2. Depositar dinero\n3. Mostrar saldo\n4. Salir\nSeleccione la opcion: ";
      cin >> eleccion;
      system("cls");
      //  Retiro
      if (eleccion == "1")
	{
	    string tipocambio;
	    double retiro;
	    cout<<"RETIRO DE DINERO"<<endl;
	    cout<< "1. Soles"<<endl;
		cout<< "2. Dolares"<<endl;

	  cout << "Ingrese el tipo de cambio (soles o dolares): " << endl;
	  cin >> tipocambio;
	  system("cls");
	  if (tipocambio == "1")
	    {
	      fondos = fondos;
	      cout<<"CUENTA EN SOLES"<<endl;
	      cout << "Saldo actual en soles es de: S/." << fondos << endl;
	      cout << "Ingrese cantidad a retirar: " << endl;
	      cin >> retiro;
	      if (retiro > fondos || retiro <= 0)
		{
		  cout << "No puede retirar esa cantidad"<<endl;
		}
	      else
		{
		  cout << "OK. Ha retirado: S/." << retiro << endl;
		  fondos = fondos - retiro;
		  cout << "Saldo actual en soles es de: S/." << fondos << endl;
		}
	    }


	  if (tipocambio == "2")
	    {
	        cout<<"CUENTA EN DOLARES"<<endl;
	      fondos = fondos / 3.8;
	      cout << "Saldo actual en dolares es de: $" << fondos << endl;
	      cout << "Ingrese cantidad a retirar: " << endl;
	      cin >> retiro;
	      if (retiro > fondos || retiro <= 0)
		{
		  cout << "No puede retirar esa cantidad"<<endl;
		  fondos=fondos*3.8;
		}
	      else
		{
		  cout << "OK. Ha retirado: $" << retiro << endl;
		  fondos = fondos - retiro;
		  cout << "Saldo actual en dolares es de: $" << fondos <<endl;
		  fondos = fondos * 3.8;
		  cout << "Saldo actual en soles es de: S/." << fondos <<endl;
		}
	    }
	    cout << "----------------" << endl;
	}
      //Deposito
      if (eleccion == "2")
	{
	  string tipocambio;
	  double deposito;
	  cout<<"DEPOSITO DE DINERO"<<endl;
	  cout<< "1. Soles"<<endl;
	  cout<< "2. Dolares"<<endl;
	  cout << "Ingrese el tipo de cambio (soles o dolares): " << endl;
	  cin >> tipocambio;
	  system("cls");
	  if (tipocambio == "1")
	    {
	      fondos = fondos;
	      cout<<"CUENTA EN SOLES"<<endl;
	      cout << "Saldo actual en soles es de: S/." << fondos << endl;
	      cout << "Ingrese cantidad a depositar: " << endl;
	      cin >> deposito;
	      cout << "OK. Ha depositado: S/." << deposito << endl;
	      fondos = fondos + deposito;
	      cout << "Saldo actual en soles es de: S/." << fondos << endl;
	    }
	  if (tipocambio == "2")
	    {
	        cout<<"CUENTA EN DOLARES"<<endl;
	      fondos = fondos / 3.8;
	      cout << "Saldo actual en dolares es de: $" << fondos << endl;
	      cout << "Ingrese cantidad a depositar: " << endl;
	      cin >> deposito;
	      cout << "OK. Ha depositado: $" << deposito << endl;
	      fondos = fondos + deposito;
	      cout << "Saldo actual en dolares es de: $" << fondos << endl;
	      fondos = fondos * 3.8;
	      cout << "Saldo actual en soles es de: S/." << fondos << endl;
	    }
	    cout << "----------------" << endl;
	}
      if (eleccion == "3")
	{
	  //Mostrando saldo
	  cout<<"SALDO EN LA CUENTA DEL USUARIO"<<endl;
	  fondos = fondos / 3.8;
	  cout << "Su saldo actual en dolares es de: $" << fondos << endl;
	  fondos = fondos * 3.8;
	  cout << "Su saldo actual en soles es de: S/." << fondos << endl;
	  cout << "----------------" << endl;

	}
	

    }
    cout<<"CERRANDO SISTEMA...."<<endl;
  return 0;
}
