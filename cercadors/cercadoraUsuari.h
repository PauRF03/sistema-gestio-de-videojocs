#include<pqxx/pqxx>
#include<iostream>
#include "../passareles/passarelaUsuari.h"

class cercadoraUsuari
{
	private:

	public:
		
		cercadoraUsuari();

		~cercadoraUsuari();

		passarelaUsuari cercaPerSobrenom(string sn);

};