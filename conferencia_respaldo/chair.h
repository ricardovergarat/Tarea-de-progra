# ifdef CHAIR_H
# define CHAIR_H
# include <string>
# include "persona.h"

using namespace std;

class chair : public persona{
	public:
		chair(string,string,string);
};
#endif