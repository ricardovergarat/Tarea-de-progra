# ifndef CONFERENCIA_H
# define CONFERENCIA_H		

# include "chair.h"
# include "revisor.h"


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
		// vector <autor> los_autores; autor[n]
		// vector <articulo> articulos-resividos; articulo[n]
		// vector <articulo> articulos_finales; articulo[n]
	public:
		conferencia(string,string,string,string,string);
		void mostrar_conferencia();
		void agregar_chair(chair);
		void mostrar_sus_chair();
		void agregar_revisor(revisor);
		void mostrar_sus_revisores();
};

# endif
