# ifndef PERSONA_H
# define PERSONA_H

using namespace std;

class persona{
	private:
		string nombre;
		string afiliacion;
		string correo;
	public:
		persona(string Nombre,string Afiliacion, string Correo);
		persona();
		void mostrar_persona();
};
# endif
