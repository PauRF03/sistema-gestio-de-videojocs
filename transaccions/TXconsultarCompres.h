#pragma once
#include <iostream>
#include <vector>
#include "../videoconsola.h"
#include "../cercadors/cercadoraElementCompra.h"
#include "../passareles/passarelaElementCompra.h"
#include "../cercadors/cercadoraCompra.h"
#include "../passareles/passarelaCompra.h"
#include "../passareles/passarelaConte.h"
#include "../cercadors/cercadoraConte.h"

using namespace std;

class TXconsultarCompres {
	public:
		
		struct element {
			string data, nom, desc, tipus;
			vector<string> nomv;
			vector<string> descv;
			double preu;
		};

		struct res {
			vector<element> elements;
			double total;
		};

		TXconsultarCompres();

		~TXconsultarCompres();

		void executar();

		res obteResultat();

	private:

		res resultat;
};