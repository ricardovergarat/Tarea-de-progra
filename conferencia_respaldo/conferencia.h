# ifdef CONFERENCIA_H
# define CONFERENCIA_H
# include <string>

using namespace std;

class conferencia{
	private:
		string fecha_inicio;
		string fecha_termino;
		string pais;
		string ciudad;
		/*
		chair uno;
		chair dos;
		revisor revisor_uno;
		revisor revisor_dos;
		revisor revisor_tres;
		articulo el_articulo;
		*/
	public:
		conferencia(string,string,string,string);
		void mostrar_conferencia();
};

#endif