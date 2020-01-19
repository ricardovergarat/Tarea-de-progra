# include <iostream>
# include <fstream>
# include <string>
# include <vector>

using namespace std;

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
		//string cuerpo;
		// autor corespondinte dejar en sus_autores[0]
		// autor *sus_autores[n]
	public:
		int nota;
		string comentarios;
	public:
		articulo(string,string);
		void mostrararticulo();
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
		/*
		chair uno;
		chair dos;
		revisor revisor_uno;
		revisor revisor_dos;
		revisor revisor_tres;
		articulo el_articulo;
		*/
		/*
		chair *los_chair[2];
		revisor *los_revisores[3];
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
	
	//conferencia *las_conferencias[n]; 

	return 0;
}
