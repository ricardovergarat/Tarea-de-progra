# ifndef CONFERENCIA_H
# define CONFERENCIA_H

# include "persona.h"
# include "revisor.h"


using namespace std;

class conferencia{
	public:
		string fecha_inicio;
		string fecha_termino;
		string pais;
		string ciudad;
		persona una_persona;
		revisor un_revisor;
	public:
		conferencia(string,string,string,string,persona,revisor);
		void mostrar_conferencia();
};

# endif
