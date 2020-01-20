# ifndef ARTICULO_H
# define ARTICULO_H

using namespace std;

class articulo{
	private:
		string titulo;
		string resumen;
		int nota;
	public:
		articulo(string,string);
		void mostrar_articulo();
};

# endif
