# include <iostream>
# include <vector>

# include "persona.h"
# include "revisor.h"
# include "autor.h"
# include "chair.h"
# include "articulo.h"
# include "conferencia.h"

using namespace std;

int main(){
	
	cout << "iniciamos pruebas" << endl;
	
	articulo ar("el principito","un libro de un principe");
	articulo ar2("conducion","libro para aprender a manejar");
	articulo ar3("alegra lineal","libro con aplicacion de algebra espacial");
	
	revisor r("levi","cerca de la u","quiensabeun levi");

	autor a("nati","en su casa","ella");
	
	
	a.enviar_articulo(ar,r);
	a.enviar_articulo(ar2,r);
	a.enviar_articulo(ar3,r);
	
	r.mostrar_articulos_pendientes();
	r.evaluar(ar);
	cout << "-------------" << endl;
	r.mostrar_articulos_pendientes();
	return 0;
}
.
