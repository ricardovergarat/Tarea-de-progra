# ifndef ARTICULO_H
# define ARTICULO_H

using namespace std;

class articulo{
	private:
		string titulo;
		string resumen;
		string cuerpo;
	public:
		bool aprobado;
		int nota;
		string comentario;
	public:
		articulo(string,string,string);
		void mostrar_articulo();
};

# endif
