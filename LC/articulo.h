# ifndef ARTICULO_H
# define ARTICULO_H

using namespace std;

class articulo{
	private:
		string titulo;
		string resumen;
	public:
		int nota;
		string comentario;
	public:
		articulo(string,string);
		void mostrar_articulo();
};

# endif
