#pragma once
#include<iostream>

using namespace std;
class passarelaCompra
{
	private:

		string usuari, element, data;
		double preuPagat;
	
	public:

		passarelaCompra(string u, string e, string d, double p);

		~passarelaCompra();

		string getUsuari();

		string getElement();

		string getData();

		void insereix();

		void modifica();

		void esborra();

};

