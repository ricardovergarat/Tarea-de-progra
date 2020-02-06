# ifndef REVISOR_H
# define REVISOR_H

# include <vector>

# include "persona.h"
# include "articulo.h"

using namespace std;

class revisor : public persona{
	public:
		vector <articulo> articulos_resividos;
		vector <articulo> articulos_revisados;
	public:
		revisor(string,string,string);
		revisor();
		void comentar(int);
		void evaluar(int);
		void mostrar_articulos_pendientes();
};

# endif
