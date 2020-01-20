# include <iostream>

# include "persona.h"
# include "revisor.h"
# include "autor.h"
# include "chair.h"
# include "articulo.h"
# include "conferencia.h"

using namespace std;

int main(){
	cout << "iniciamos pruenas" << endl;
	cout << "-------------persona-------------" << endl;
	persona p("isabel","renca","no tiene");
	p.mostrar_persona();
	cout << "-------------revisor-------------" << endl;
	revisor r("ricardo","talca","ricardovergarat1@gmail.com");
	r.mostrar_persona();
	cout << "-------------autor-------------" << endl;
	autor au("nati","cerca","nati relativa");
	au.mostrar_persona();
	cout << "-------------chair-------------" << endl;
	chair c("omar","quien sabe","ofou");
	c.mostrar_persona();
	cout << "-------------articulo-------------" << endl;
	articulo a("mi libro","el libro es un exito de ventas");
	a.mostrar_articulo();
	cout << "-------------conferencia-------------" << endl;
	conferencia conf("19-01-2020","24-01-2020","chile","talca",p,r);
	conf.mostrar_conferencia();
	

	return 0;
}

