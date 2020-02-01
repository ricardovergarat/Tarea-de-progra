# ifndef REVISOR_H
# define REVISOR_H

# include <vector>

# include "persona.h"
# include "articulo.h"

using namespace std;

class revisor : public persona{
	public:
		vector <articulo> articulos_para_revisar;
	public:
		revisor(string,string,string);
		revisor();
		void comentar(articulo&);
		void evaluar(articulo&);
		void mostrar_articulos_pendientes();
};

# endif
