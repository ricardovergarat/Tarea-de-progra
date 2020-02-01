# ifndef CONFERENCIA_H
# define CONFERENCIA_H

# include "revisor.h"


using namespace std;

class conferencia{
	public:
		string fecha_inicio;
		string fecha_termino;
		string pais;
		string ciudad;
		revisor un_revisor;
	public:
		conferencia(string,string,string,string,revisor);
		void mostrar_conferencia();
};

# endif
