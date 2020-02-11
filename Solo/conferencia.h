# ifndef CONFERENCIA_H
# define CONFERENCIA_H		

# include "chair.h"
# include "revisor.h"
# include "autor.h"
# include "articulo.h"


using namespace std;

class conferencia{
	public:
		string nombre;
		string fecha_inicio;
		string fecha_termino;
		string pais;
		string ciudad;
		vector <chair> los_chair; 
		vector <revisor> los_revisores;
		vector <articulo> articulos_resividos;
		vector <articulo> articulos_finales;
	public:
		conferencia(string,string,string,string,string);
		void mostrar_conferencia();
		void agregar_chair(chair);
		void agregar_grupo_chair(chair,chair);
		void mostrar_sus_chair();
		void agregar_revisor(revisor);
		void agregar_grupo_revisor(revisor,revisor,revisor);
		void mostrar_sus_revisores();
};

# endif
