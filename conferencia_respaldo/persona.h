# ifdef PERSONA_H	
# define PERSONA_H
# include <string>

using namespace std;

class persoan{
	private:
		string nombre;
		string afiliacion;
		string correo;
	public:
		persoan(string,string,string);
		void mostrar_datos_persona();
};
#endif