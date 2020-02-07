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

void mostrar_todas_las_conferencias(vector <conferencia> &las_conferencias){
	int x = 0;
	while (x < las_conferencias.size() ){
		cout << endl;
		las_conferencias[x].mostrar_conferencia();
		x = x + 1;
	}
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

//1
void crear_conferencia(vector <conferencia> &las_conferencias){
	string omitir,nombre,fecha_inicio,fecha_termino,pais,ciudad;
	omitir = pedir_datos("");
	nombre = pedir_datos("Ingrese el nombre de la conferencia");
	fecha_inicio = pedir_datos("Ingrese la fecha de inicio      ejemplo 24-03-2020");
	fecha_termino = pedir_datos("Ingrese la fecha de termino     ejemplo 30-03-2020");
	pais = pedir_datos("Ingrese el pais");
	ciudad = pedir_datos("Ingrese la ciudad");
	string nombre_revisor;
	nombre_revisor = pedir_datos("Ingrese el nombre de un revisor");
	
	revisor un_revisor(nombre_revisor,"","");
	conferencia una_conferencia(nombre,fecha_inicio,fecha_termino,pais,ciudad);
	
	una_conferencia.agregar_revisor(un_revisor);
	agregar_conferencia(las_conferencias,una_conferencia);
}

//3
void mostrar_mis_conferencias_chair(vector <conferencia> &las_conferencias,chair un_chair){
	int x = 0;
	while ( x < las_conferencias.size() ){
		int y = 0;
		while ( y < las_conferencias[x].los_chair.size() ) {
			if ( las_conferencias[x].los_chair[y].get_nombre().compare( un_chair.get_nombre() ) == 0){
				cout << "Nombre de la conferencia: " << las_conferencias[x].nombre << endl;
				break;
			}
			y = y + 1;
		}
		x = x + 1;
	}
}

int menu_chair(string nombre,string afiliacion,string correo,vector <conferencia> &las_conferencias){
	
	chair un_chair(nombre,afiliacion,correo);
	
	cout << endl;
	cout << "Bienvenido chair" << endl;
	cout << "¿Que quiere hacer?" << endl;
	mostrar_opcion(1,"Crear conferencia");
	mostrar_opcion(2,"Notificar autor");
	mostrar_opcion(3,"Mostrar mis conferencia");
	mostrar_opcion(4,"Modificar una conferencia");
	mostrar_opcion(5,"Mostrar todas las conferencias");
	mostrar_opcion(6,"Salir de la cuenta");
	int opcion;
	cin >> opcion;
	switch (opcion){
		case 1:  crear_conferencia(las_conferencias); break;
		case 2:  cout << "vamos a notificar a un autor" << endl; break;
		case 3:  mostrar_mis_conferencias_chair(las_conferencias,un_chair); break;
		case 4:  cout << "Cambiar algun dato de una conferencia" << endl; break;
		case 5:  mostrar_todas_las_conferencias(las_conferencias);  break;
		case 6:  opcion = -1; break;
		default : cout << "Esa opcion no existe" << endl;
	}
	/*
	solo si selecionamos una conferencia
	1- agregar un chair
	2- agregar revisor
	
	*/
	return opcion;
}

//1
void mostrar_articulos_resividos_revisor(){
	
}










int menu_revisor(string nombre,string afiliacion,string correo,vector <conferencia> &las_conferencias){
	
	revisor un_revisor(nombre,afiliacion,correo);
	
	cout << endl;
	cout << "Bienvenido revisor" << endl;
	cout << "¿Que quiere hacer?" << endl;
	mostrar_opcion(1,"Mostrar articulos resividos");
	mostrar_opcion(2,"Comentar un articulo");
	mostrar_opcion(3,"Evaluar un articulo");
	mostrar_opcion(4,"Mostrar articulos revisados");
	mostrar_opcion(5,"Enviar un articulo revisado");
	mostrar_opcion(6,"Mostrar todas las conferencias");
	mostrar_opcion(7,"Salir de la cuenta");
	int opcion;
	cin >> opcion;
	switch (opcion){
		case 1:  cout << "Proyectamos los articulos resividos" << endl; break;
		case 2:  cout << "Vamos a comentar un articulo" << endl; break;
		case 3:  cout << "Vamos a evaluar un articulo" << endl; break;
		case 4:  cout << "Proyectar articulos revisados" << endl; break;
		case 5:  cout << "Enviar un articulo revisado" << endl; break;
		case 6:  mostrar_todas_las_conferencias(las_conferencias); break;
		case 7:  opcion = -1; break;
		default : cout << "Esa opcion no existe" << endl;
	}
	return opcion;
}























int menu_autor(string nombre,string afiliacion,string correo,vector <conferencia> &las_conferencias){
	
	autor un_autor(nombre,afiliacion,correo);
	
	cout << endl;
	cout << "Bienvenido autor" << endl;
	cout << "¿Que quiere hacer?" << endl;
	mostrar_opcion(1,"Crear un articulo");
	mostrar_opcion(2,"Mostrar mis articulos");
	mostrar_opcion(3,"Mostrar mis conferencias");
	mostrar_opcion(4,"Ver respuesta de las conferencias");
	mostrar_opcion(5,"Enviar articulo");
	mostrar_opcion(6,"Enviar articulo final");
	mostrar_opcion(7,"Mostrar todas las conferencias");
	mostrar_opcion(8,"Salir de la cuenta");
	int opcion;
	cin >> opcion;
	switch (opcion){
		case 1:  cout << "Vamos a crear un articulo" << endl; break;
		case 2:  cout << "Proyectar mis articulos" << endl; break;
		case 3:  cout << "Proyrctar en que conferencias participo" << endl; break;
		case 4:  cout << "Ver respuestas de las conferencias" << endl; break;
		case 5:  cout << "Enviar articulo a uan conferencia" << endl; break;
		case 6:  cout << "Enviar version fina del articulo a la connferencia" << endl; break;
		case 7:  mostrar_todas_las_conferencias(las_conferencias); break;
		case 8:  opcion = -1; break;
		default : cout << "Esa opcion no existe" << endl;
	}
	return opcion;
}

int menu_usuarios(int usuario, vector <conferencia> &las_conferencias,string nombre,string afiliacion,string correo){
	int opcion;
	switch (usuario){
		case 1: opcion = menu_chair(nombre,afiliacion,correo,las_conferencias); break;
		case 2: opcion = menu_revisor(nombre,afiliacion,correo,las_conferencias); break;
		case 3: opcion = menu_autor(nombre,afiliacion,correo,las_conferencias); break;
	}
	return opcion;
}

void agregar_conferencias_falsas(vector <conferencia> &las_conferencias){
	conferencia c("tegnologia para ciencias de la computacion","01-02-2020","099-02-2020","chile","talca");
	conferencia c1("biologia en esfuerzo computacional","01-02-2020","099-02-2020","chile","talca");
	conferencia c2("redes neuronales","01-02-2020","099-02-2020","chile","talca");
	conferencia c3("Genetic Algorithm in TSP","11-05-2020","17-05-2020","chile","santiago");
	conferencia c4("Neural Network Applied in Medicine","09-06-2020","17-06-2020","chile","Valparaiso");
	conferencia c5("Image Recognition agro industrial","18-09-2020","24-09-2020","chile","santiago");
	conferencia c6("Inteligencia artificial","24-10-2020","04-11-2020","peru","lima");
	
	chair ch("paulo gonzales","tercer piso","paulo@gmail.com");
	chair ch1("Jerman espindola","en el laboratorio","jerman@gmail.com");
	chair ch2("profe hugo","cercaa de la u","hugo@gmail.com");
	chair ch3("ricardo barrientos","aqui","ricardo@gmail.com");
	chair ch4("Jonathan palma","ni puta idea","jonathan@gmail.com");
	chair ch5("Tony stark","en mi corazon","play_boy_millonario@gmail.com");
	
	revisor r("Peter parker","En el UCM","spiderman@gmail.com");
	revisor r1("Steve rogers","En el pasadp","no_tiene_email@gmail.com");
	revisor r2("Kakaroto","En el universo 7","blue@gmail.com");
	revisor r3("Vegeta","En el universo 7","segundogmail.com");
	revisor r4("Thanos","En su nave","matar_50%_@gmail.com");
	revisor r5("Broly","Muy lejos","legendario@gmail.com");
	
	autor a("Python","En .py","python@gmail.com");
	autor a1("C","En .C","Mi_antecesor_es_B@gmail.com");
	autor a2("C++","En .CPP","evolucion@gmail.com");
	autor a3("C#","En visual studio","Muy_lento@gmail.com");
	autor a4("Java","i dont know","Proximamente@gmail.com");
	autor a5("Matlab","En .mat","Matematica@gmail.com");
	
	c.agregar_chair(ch);
	c.agregar_chair(ch5);
	//c.agregar_revisor(r3);
	//c.agregar_revisor(r1);
	//c.agregar_revisor(r);
	
	c1.agregar_chair(ch3);
	c1.agregar_chair(ch2);
	//c1.agregar_revisor(r2);
	//c1.agregar_revisor(r1);
	//c1.agregar_revisor(r5);
	
	c2.agregar_chair(ch2);
	c2.agregar_chair(ch4);
	//c2.agregar_revisor(r);
	//c2.agregar_revisor(r4);
	//c2.agregar_revisor(r5);
	
	c3.agregar_chair(ch);
	c3.agregar_chair(ch5);
	//c3.agregar_revisor(r);
	//c3.agregar_revisor(r1);
	//c3.agregar_revisor(r3);
	
	c4.agregar_chair(ch5);
	c4.agregar_chair(ch2);
	//c4.agregar_revisor(r);
	//c4.agregar_revisor(r2);
	//c4.agregar_revisor(r1);
	
	c5.agregar_chair(ch3);
	c5.agregar_chair(ch);
	//c5.agregar_revisor(r3);
	//c5.agregar_revisor(r);
	//c5.agregar_revisor(r2);
	
	c6.agregar_chair(ch5);
	c6.agregar_chair(ch);
	//c6.agregar_revisor(r3);
	//c6.agregar_revisor(r);
	//c6.agregar_revisor(r4);
	
	agregar_conferencia(las_conferencias,c);
	agregar_conferencia(las_conferencias,c1);
	agregar_conferencia(las_conferencias,c2);
	agregar_conferencia(las_conferencias,c3);
	agregar_conferencia(las_conferencias,c4);
	agregar_conferencia(las_conferencias,c5);
	agregar_conferencia(las_conferencias,c6);
	
	cout << "fin base de datos" << endl;
}

int main(){
	int usuario = 0;
	
	vector <conferencia> las_conferencias;
	
	agregar_conferencias_falsas(las_conferencias);
	
	cout << "fuera" << endl;
	cout << "1sdkasdkas" << endl;
	cout << "dasodijawoieu qwpoieu qwoieuq w" << endl;
	/*
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
	*/
}

