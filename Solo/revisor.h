# ifndef REVISOR_H
# define REVISOR_H

# include <vector>

# include "persona.h"

using namespace std;

class revisor : public persona{
	public:
		vector <string> articulos_resividos;
		vector <string> articulos_revisados;
	public:
		revisor(string,string,string);
};

# endif
