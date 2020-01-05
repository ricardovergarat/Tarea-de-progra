# include <iostream>
# include <fstream>
# include <string>

using namespace std;


class persona(){
	private:
		string nombre;
		string afiliacion;
		string correo;
	public:
		persona(string,string,string);
		void mostrar_datos();
};

persona::persona(string _nombre, string _afiliacion, string _correo){
	nombre = _nombre;
	afiliacion = _afiliacion;
	correo = _correo;
}

string pedir_nombre_articulo(){
	string nombre;
	cout << "Ingrese el nombre del archivo" << endl;
	cin >> nombre;
	return nombre;
}

void mostrar(string nombre){
	cout << "el nombbre del archivo es:" << endl;
	cout << nombre << endl;
}
/*
void leer_archivos(string nombre){
	ifstream archivo;
	archivo.open(nombre,ios::in);
	string texto_articulo; 
	if (archivo.fail()){
		cout << "ese archivo no existe" << endl;
	}
	while (!archivo.eof()){ // mientras no sea el final del archivo
		getline(archivo,texto_articulo); // estamos recuperando lo escrito en el texto y lo estamos guardando el la variable texto
		// ahora vamos a imprimir en consola el texto del archivo
		cout << texto_articulo << endl;
	}
}
*/

int main(){
	string nombre;
	nombre = pedir_nombre_articulo();
	mostrar(nombre);
	leer_archivos(nombre);
	return 0;
}
