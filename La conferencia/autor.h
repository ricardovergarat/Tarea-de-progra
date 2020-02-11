# ifndef AUTOR_H
# define AUTOR_H

# include <vector>

# include "persona.h"

using namespace std;

class autor : public persona{
	public:
		autor(string,string,string);
		vector <string> crear_articulo();
		
};

# endif
