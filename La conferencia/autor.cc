# include <iostream>

# include "autor.h"
# include "revisor.h"
# include "articulo.h"

using namespace std;

autor::autor(string _nombre, string _afiliacion, string _correo) : persona(_nombre, _afiliacion, _correo){
	
}

void autor::enviar_articulo(articulo &un_articulo, revisor &su_revisor){
	cout << "El articulo se a enviado" << endl;
	su_revisor.articulos_para_revisar.push_back(un_articulo);
}
