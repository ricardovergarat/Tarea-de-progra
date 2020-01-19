# ifdef AUTOR_H
# define AUTOR_H
# include <string>
# include "persona.h"

using namespace std;

class autor : public persona{
	public:
		autor(string,string,string);
};
#endif