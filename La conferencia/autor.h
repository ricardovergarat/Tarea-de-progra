# ifndef AUTOR_H
# define AUTOR_H

# include <vector>

# include "persona.h"

using namespace std;

class autor : public persona{
	private:
		vector <string> notificaciones;
	public:
		autor(string,string,string);
		vector <string> crear_articulo();
		void notificar(string,string);
		void mostrar_notificaciones();
};

# endif
