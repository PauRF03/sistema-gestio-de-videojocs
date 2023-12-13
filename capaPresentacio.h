#include <iostream>
#include "capaDomini.h"

using namespace std;

class capaPresentacio {
private:

	capaDomini cDom;

public:
	capaPresentacio();

	~capaPresentacio();

	void iniciarSessioPres();

	void registrarUsuariPres();

	void consultarUsuariPres();

	void modificarUsuariPres();

	void esborrarUsuariPres();

	void comprarVideojocPres();

	void comprarPaquetPres();

	void consultarCompresPres();

	void consultarVideojocPres();

	void consultarVideojocsPres(); //mirar si vol dir que es paquet

	void consultarVideojocsEdatPres();

	void consultarNovetatsPres();

};