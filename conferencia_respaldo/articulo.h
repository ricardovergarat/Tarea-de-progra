# ifdef ARTICULO_H
# define ARTICULO_H
# include <string.h>

using namespace std;

class articulo{
	private:
		string titulo;
		string resumen;
		// lista autoro corespondiente o autores corespondientes
		int nota;
		//string comentarios;
	public:
		articulo(string,string);
		void mostrararticulo();
		//void mostrar_articulo();
};
#endif