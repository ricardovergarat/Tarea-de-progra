# ifndef AUTOR_H
# define AUTOR_H

# include <vector>

# include "revisor.h"
# include "articulo.h"

using namespace std;

class autor : public persona{
	public:
		vector <string> articulos_resividos;
		vector <string> articulos_revisados;
	public:
		autor(string,string,string);
};

# endif
