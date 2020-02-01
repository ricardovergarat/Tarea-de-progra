# ifndef AUTOR_H
# define AUTOR_H

# include "persona.h"
# include "revisor.h"
# include "articulo.h"

using namespace std;

class autor : public persona{
	public:
		autor(string,string,string);
		void enviar_articulo(articulo&, revisor&);
};

# endif
