# ifndef ARTICULO_H
# define ARTICULO_H

# include <vector>

# include "autor.h"

using namespace std;

class articulo{
	private:
		string titulo;
		string resumen;
		string cuerpo;
	public:
		vector <string> comentarios;
		vector <int> notas;
		vector <autor> los_autores;
		string aprobado;
	public:
		articulo(string,string,string,vector <string>,vector <int>,string);
		void mostrar_articulo();
		void agregar_autor(autor);
		void agregar_grupo_autores(autor,autor,autor);
		void mostrar_autores();
		void mostrar_autor_principal();
		void actualizar_comentario(string,int);
		//void actualizar_nota(int,int);
		//void actualizar_aprobado(string);
		
};

# endif
