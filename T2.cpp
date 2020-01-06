# include <iostream>
# include <fstream>
# include <string>

using namespace std;

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
/*

struct nodo{
	conferencia una_conferencia;
	nodo *sgt;
};

void agregar_elementos(nodo *&lista, conferencia c){
	nodo *espacio = new nodo();
	espacio -> una_conferencia = c;
	cout << espacio -> una_conferencia << endl;
	espacio -> sgt = lista;
	cout << espacio-> sgt << endl;
	lista = espacio;

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
};

revisor::revisor(string _nombre, string _afiliacion, string _correo):persona(_nombre,_afiliacion,_correo){

}

class autor : public persona{
	public:
		autor(string,string,string);
};

autor::autor(string _nombre, string _afiliacion, string _correo):persona(_nombre,_afiliacion,_correo){

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
		int nota;
		//string comentarios;
	public:
		articulo(string,string);
		void mostrararticulo();
		//void mostrar_articulo();
};

articulo::articulo(string _titulo, string _resumen){
	titulo = _titulo;
	resumen = _resumen;
}

void articulo::mostrararticulo(){
	cout << "Titulo: " << titulo << endl;
	cout << "Resumen: " << resumen << endl;
}



class conferencia{
	private:
		string fecha_inicio;
		string fecha_termino;
		string pais;
		string ciudad;
		//articulo el_articulo;
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
	//a.mostrararticulo();

	conferencia con = conferencia("04-01-2020","07-01-2020","chile","talca");
	con.mostrar_conferencia();

	

	return 0;
}
