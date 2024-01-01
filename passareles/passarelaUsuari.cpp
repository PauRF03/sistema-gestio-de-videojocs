#include "passarelaUsuari.h"

passarelaUsuari::passarelaUsuari(string n, string sn, string c, string cE, string dN) {
	nom = n;
	sobrenom = sn;
	contrasenya = c;
	correuE = cE;
	dataN = dN;
}

passarelaUsuari::~passarelaUsuari() {

}

string passarelaUsuari::getNom() {
	return nom;
}

string passarelaUsuari::getSobrenom() {
	return sobrenom;
}

string passarelaUsuari::getContrasenya() {
	return contrasenya;
}

string passarelaUsuari::getCorreu() {
	return correuE;
}

string passarelaUsuari::getDataN() {
	return dataN;
}

void passarelaUsuari::setNom(string n) {
	nom = n;
}

//No hi ha setter pel sobrenom ja que es l'id

void passarelaUsuari::setContrasenya(string c) {
	contrasenya = c;
}

void passarelaUsuari::setCorreu(string cE) {
	correuE = cE;
}

void passarelaUsuari::setDataN(string dN) {
	dataN = dN;
}

void passarelaUsuari::insereix() {
		pqxx::connection conn(PARAMS);
		if (conn.is_open()) {
			cout << "Connexio exitosa amb la base de dades." << endl;
			pqxx::work txn(conn);
			string comanda = "INSERT INTO public.\"Usuari\" VALUES('"+sobrenom+"', '"+nom+"', '"+contrasenya+"', '"+correuE+"', '"+dataN+"');";
			pqxx::result result = txn.exec(comanda);
			txn.commit();
		}
		else {
			cerr << "Error de connexio amb la base de dades." << endl << endl;
		}

	
}

void passarelaUsuari::modifica() {

}

void passarelaUsuari::esborra() {
	pqxx::connection conn(PARAMS);
	pqxx::work txn = pqxx::work(conn);
	string comanda = "DELETE FROM public.\"Usuari\" WHERE sobrenom = '" + sobrenom + "';";
	txn.exec(comanda);
	txn.commit();
}