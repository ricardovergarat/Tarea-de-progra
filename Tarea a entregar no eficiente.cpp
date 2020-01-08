# include <iostream>
# include <fstream>
# include <string>

using namespace std;

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

/*                                estrucutura de datos


struct nodo{
    int numero;
    nodo *sgt;
};


void insertar_elementos(nodo *&lista, int n){
    nodo *espacio_memoria = new nodo();
    espacio_memoria -> numero = n;

    nodo *aux = lista;
    nodo *aux2;

    while ( (aux != NULL) && (aux -> numero < n) ){
        aux2 = aux;
        aux = aux -> sgt;
    }

    if (lista == aux){
        lista = espacio_memoria;
    }else{
        aux2 -> sgt = espacio_memoria;
    }

    espacio_memoria -> sgt = aux;
}

void mostrar_lista(nodo *lista){
    nodo *actual = new nodo();
    actual = lista;
    while (actual != NULL){
        cout << actual -> numero << endl;
        actual = actual -> sgt;
        
    }
}


*/

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||



// ----------------------------------------------------------------------------------------------------------------------
class persona{
	private:
		string nombre;
		string afiliacion;
		string correo;
	public:
		persona(string,string,string);
		void mostrar_datos_persona();
};

persona::persona(string _nombre, string _afiliacion, string _correo){
	nombre = _nombre;
	afiliacion = _afiliacion;
	correo = _correo;
}

void persona::mostrar_datos_persona(){
	cout << "nombre: " << nombre << endl;
	cout << "afiliacion: " << afiliacion << endl;
	cout << "correo: " << correo << endl;
}

class revisor : public persona{
	public:
		revisor(string,string,string);
		//void evaluar(articulo);
		//void comentar(articulo);

};

revisor::revisor(string _nombre, string _afiliacion, string _correo):persona(_nombre,_afiliacion,_correo){

}

/*

void revisor::evaluar(articulo *&un_articulo){
	int una_nota;
	cout << "Ingrese la nota del articulo: " << endl;
	cin >> una_nota;
	un_articulo.nota = una_nota;
}

void revisor::comentar(articulo *&un_articulo){
	cout << "Ingrese el comentario del articulo" << endl;
	cout << "Presione enter para terminar el comentario" endl;
}

*/

class autor : public persona{
	public:
		autor(string,string,string);
		void enviar_articulo();
};

autor::autor(string _nombre, string _afiliacion, string _correo):persona(_nombre,_afiliacion,_correo){

}



void autor::enviar_articulo(){
	cout << "Se a enviado el articulo" << endl;
}



class chair : public persona{
	public:
		chair(string,string,string);
};

chair::chair(string _nombre, string _afiliacion, string _correo):persona(_nombre,_afiliacion,_correo){

}
// ----------------------------------------------------------------------------------------------------------------------

class articulo{
	private:
		string titulo;
		string resumen;
		// lista autoro corespondiente o autores corespondientes
		// autores[n] *autores;
	public:
		int nota;
		string comentarios;
	public:
		articulo(string,string);
		void mostrar_articulo();
		//void mostrar_articulo();
};

articulo::articulo(string _titulo, string _resumen){
	titulo = _titulo;
	resumen = _resumen;
}

void articulo::mostrar_articulo(){
	cout << "Titulo: " << titulo << endl;
	cout << "Resumen: " << resumen << endl;
}



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

conferencia::conferencia(string _fecha_inicio, string _fecha_termino, string _pais, string _ciudad){
	fecha_inicio = _fecha_inicio;
	fecha_termino = _fecha_termino;
	pais = _pais;
	ciudad = _ciudad;
	
}

void conferencia::mostrar_conferencia(){
	cout << "Fecha de inicio: " << fecha_inicio << endl;
	cout << "Fecha de termino: " << fecha_termino << endl;
	cout << "Pais: " << pais << endl;
	cout << "Ciudad: " << ciudad << endl;
} 



int main(){
	/*
	persona p1 = persona("Levi","cerca de la U","LEVISAPE@gmail.com");
	p1.mostrar_datos_persona();
	revisor r = revisor("jerman","en la U","jerman@gmail.com");
	r.mostrar_datos_persona();
	autor a = autor("nati","cerca de los dragones","nati@gmail.com");
	a.mostrar_datos_persona();
	chair c = chair("profe ricardo","nunca esta en la U","ricardobarrientos@gmail.com");
	c.mostrar_datos_persona();
	*/

	articulo a = articulo("luna de pluton","esta siendo un existo de ventas en chile, argentina, uruguai, etc");
	a.mostrar_articulo();

	conferencia con = conferencia("04-01-2020","07-01-2020","chile","talca");
	con.mostrar_conferencia();

	

	return 0;
}
