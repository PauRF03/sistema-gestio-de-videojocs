#include "cercadoraConte.h"

// Constructor: Inicialitza la classe cercadoraConte.
cercadoraConte::cercadoraConte() {
}

// Destructor: Neteja recursos si és necessari.
cercadoraConte::~cercadoraConte() {
}

// Funció cerca: Busca tots els continguts (videojocs o paquets) que coincideixen amb el nom donat.
vector<passarelaConte> cercadoraConte::cerca(std::string n) {
    std::vector<passarelaConte> res;
    pqxx::connection conn(PARAMS); // Estableix connexió amb la base de dades.
    pqxx::work txn(conn); // Inicia una transacció.
    string comanda = "SELECT * FROM conte WHERE paquet = '" + n + "' OR videojoc = '" + n + "';";
    pqxx::result q = txn.exec(comanda); // Executa la consulta SQL.
    txn.commit(); // Finalitza la transacció.
    for (int i = 0; i < q.size(); i++) {
        // Crea i afegeix a la llista els objectes passarelaConte amb les dades obtingudes.
        res.push_back(passarelaConte(q[i][1].c_str(), q[i][0].c_str()));
    }
    return res; // Retorna els resultats.
}
