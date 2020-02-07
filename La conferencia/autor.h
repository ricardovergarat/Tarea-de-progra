# ifndef AUTOR_H
# define AUTOR_H

# include "revisor.h"
# include "articulo.h"

using namespace std;

class autor : public persona{
	public:
		autor(string,string,string);
};

# endif
