# ifndef CONFERENCIA_H
# define CONFERENCIA_H

# include "revisor.h"


using namespace std;

class conferencia{
	public:
		string nombre;
		string fecha_inicio;
		string fecha_termino;
		string pais;
		string ciudad;
		// vector <chaie> los_chair; char[2]
		// vector <revisor> los_revisores; revisor[3]
		// vector <autor> los_autores; autor[n]
		// vector <articulo> articulos-resividos; articulo[n]
		// vector <articulo> articulos_finales; articulo[n]
	public:
		conferencia(string,string,string,string,string);
		void mostrar_conferencia();
};

# endif
