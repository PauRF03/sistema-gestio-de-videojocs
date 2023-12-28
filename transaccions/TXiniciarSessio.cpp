#include "TXiniciarSessio.h"

TXiniciarSessio::TXiniciarSessio(string sn, string cs) {
	sobrenom = sn;
	contrasenya = cs;
	resultat = false;
}

TXiniciarSessio::~TXiniciarSessio() {

}

void TXiniciarSessio::executar(){
	cercadoraUsuari us = cercadoraUsuari();
	passarelaUsuari pus = us.cercaPerSobrenom(sobrenom);
	if(pus.getContrasenya() == contrasenya){
		resultat = true;
		Videoconsola& vid = Videoconsola::getInstance();
		vid.iniciarSessio(sobrenom);
	}else{
		throw exception("Contrasenya incorrecta");
	}
}

bool TXiniciarSessio::obteResultat(){
	return resultat;
}