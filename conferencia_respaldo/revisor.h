# ifdef REVISOR_H
# define REVISOR_H
# include <string>
# include "persona.h"

using namespace std;

class revisor : public persona{
	public:
		revisor(string,string,string);
};
#endif