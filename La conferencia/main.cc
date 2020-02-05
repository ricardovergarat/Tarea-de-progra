# include <iostream>
# include <vector>
# include <string.h> // para comparar string

# include "persona.h"
# include "revisor.h"
# include "autor.h"
# include "chair.h"
# include "articulo.h"
# include "conferencia.h"

using namespace std;

void mostrar_opcion(int n, string mensaje){
	cout << n << "- " << mensaje << endl;
}

int pedir_tipo_usuario(){
	int opcion;
	bool aceptado = false;
	system("cls");
	while (aceptado != true){
		cout << "Ingrese que tipo de usario es usted" << endl;
		mostrar_opcion(1,"chair");
		mostrar_opcion(2,"revisor");
		mostrar_opcion(3,"autor");
		mostrar_opcion(4,"Salir del programa");
		cin >> opcion;
		switch (opcion){
			case 1: aceptado = true; break;
			case 2: aceptado = true; break;
			case 3: aceptado = true; break;
			case 4: aceptado = true; break;
			default : cout << "Esa opcion no existe" << endl;
		}
	system("cls");
	}
	return opcion;
}

int menu_chair(string nombre,string afiliacion,string correo){
	
	chair un_chair(nombre,afiliacion,correo);
	
	cout << "Bienvenido chair" << endl;
	cout << "�Que quiere hacer?" << endl;
	mostrar_opcion(1,"Crear conferencia");
	mostrar_opcion(2,"Notificar autor");
	mostrar_opcion(3,"Mostrar conferencia");
	mostrar_opcion(4,"Modificar una conferencia");
	mostrar_opcion(5,"Salir de la cuenta");
	int opcion;
	cin >> opcion;
	switch (opcion){
		case 1:  cout << "vamos a cerar una conferencia" << endl; break;
		case 2:  cout << "vamos a notificar a un autor" << endl; break;
		case 3:  cout << "vamos a mostrar mis conferencias" << endl; break;
		case 4:  cout << "Cambiaremos una conferencia" << endl; break;
		case 5:  opcion = -1; break;
		default : cout << "Esa opcion no existe" << endl;
	}
	return opcion;
}

int menu_revisor(string nombre,string afiliacion,string correo){
	
	revisor un_revisor(nombre,afiliacion,correo);
	
	cout << "Bienvenido revisor" << endl;
	cout << "�Que quiere hacer?" << endl;
	mostrar_opcion(1,"Mostrar articulos resividos");
	mostrar_opcion(2,"Comentar un articulo");
	mostrar_opcion(3,"Evaluar un articulo");
	mostrar_opcion(4,"Mostrar articulos revisados");
	mostrar_opcion(5,"Enviar un articulo revisado");
	mostrar_opcion(6,"Salir de la cuenta");
	int opcion;
	cin >> opcion;
	switch (opcion){
		case 1:  cout << "Proyectamos los articulos resividos" << endl; break;
		case 2:  cout << "Vamos a comentar un articulo" << endl; break;
		case 3:  cout << "Vamos a evaluar un articulo" << endl; break;
		case 4:  cout << "Proyectar articulos revisados" << endl; break;
		case 5:  cout << "Enviar un articulo revisado" << endl; break;
		case 6:  opcion = -1; break;
		default : cout << "Esa opcion no existe" << endl;
	}
	return opcion;
}

int menu_autor(string nombre,string afiliacion,string correo){
	
	autor un_autor(nombre,afiliacion,correo);
	
	
	cout << "Bienvenido autor" << endl;
	cout << "�Que quiere hacer?" << endl;
	mostrar_opcion(1,"Crear un articulo");
	mostrar_opcion(2,"Mostrar mis articulos");
	mostrar_opcion(3,"Mostrar mis conferencias");
	mostrar_opcion(4,"Ver respuesta de las conferencias");
	mostrar_opcion(5,"Enviar articulo");
	mostrar_opcion(6,"Enviar articulo final");
	mostrar_opcion(7,"Salir de la cuenta");
	int opcion;
	cin >> opcion;
	switch (opcion){
		case 1:  cout << "Vamos a crear un articulo" << endl; break;
		case 2:  cout << "Proyectar mis articulos" << endl; break;
		case 3:  cout << "Proyrctar en que conferencias participo" << endl; break;
		case 4:  cout << "Ver respuestas de las conferencias" << endl; break;
		case 5:  cout << "Enviar articulo a uan conferencia" << endl; break;
		case 6:  cout << "Enviar version fina del articulo a la connferencia" << endl; break;
		case 7:  opcion = -1; break;
		default : cout << "Esa opcion no existe" << endl;
	}
	return opcion;
}

int menu_usuarios(int usuario, vector <conferencia> &las_conferencias,string nombre,string afiliacion,string correo){
	int opcion;
	switch (usuario){
		case 1: opcion = menu_chair(nombre,afiliacion,correo); break;
		case 2: opcion = menu_revisor(nombre,afiliacion,correo); break;
		case 3: opcion = menu_autor(nombre,afiliacion,correo); break;
	}
	return opcion;
}

void agregar_conferencia(vector <conferencia> &lista, conferencia dato){
	lista.push_back(dato);
}

string pedir_datos(string mensaje){
	string dato;
	cout << mensaje <<endl;
	getline(cin,dato);
	return dato;
}

int main(){
	int usuario = 0;
	
	vector <conferencia> las_conferencias;
	
	conferencia c("tegnologia","01-02-2020","099-02-2020","chile","talca");
	conferencia c1("biologia","01-02-2020","099-02-2020","chile","talca");
	conferencia c2("redes","01-02-2020","099-02-2020","chile","talca");
	
	while ( usuario != 4 ){
		usuario = pedir_tipo_usuario();
		if (usuario != 4){
			string omitir,nombre,afiliacion,correo;
			omitir = pedir_datos(""); //// ------------> esto es por que el primer getline no lo toma, entonces esto esta para que si funciones los siguietenes getline
			nombre = pedir_datos("Ingrese su nombre");
			afiliacion = pedir_datos("Ingrese su afiliacion");
			correo = pedir_datos("Ingrese su correo");
			system("cls");
			int opcion = 0;
			while (opcion != -1){
				opcion = menu_usuarios(usuario,las_conferencias,nombre,afiliacion,correo);
			}
		}
	}
	cout << "El programa a terminado" << endl;

	return 0;
}

