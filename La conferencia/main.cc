# include <iostream>
# include <vector>
# include <string.h> // para comparar string
# include <math.h> // para convertir a numero

# include "conferencia.h"
# include "chair.h"
# include "revisor.h"
# include "autor.h"
# include "articulo.h"

using namespace std;

void agregar_conferencias_falsas(vector <conferencia> & lista){
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
	c.agregar_revisor(r3);
	c.agregar_revisor(r1);
	c.agregar_revisor(r);
	c1.agregar_chair(ch3);
	c1.agregar_chair(ch2);
	c1.agregar_revisor(r2);
	c1.agregar_revisor(r1);
	c1.agregar_revisor(r5);
	c2.agregar_chair(ch2);
	c2.agregar_chair(ch4);
	c2.agregar_revisor(r);
	c2.agregar_revisor(r4);
	c2.agregar_revisor(r5);
	c3.agregar_chair(ch);
	c3.agregar_chair(ch5);
	c3.agregar_revisor(r);
	c3.agregar_revisor(r1);
	c3.agregar_revisor(r3);
	c4.agregar_chair(ch5);
	c4.agregar_chair(ch2);
	c4.agregar_revisor(r);
	c4.agregar_revisor(r2);
	c4.agregar_revisor(r1);
	c5.agregar_chair(ch3);
	c5.agregar_chair(ch);
	c5.agregar_revisor(r3);
	c5.agregar_revisor(r);
	c5.agregar_revisor(r2);
	c6.agregar_chair(ch5);
	c6.agregar_chair(ch);
	c6.agregar_revisor(r3);
	c6.agregar_revisor(r);
	c6.agregar_revisor(r4);

	lista.push_back(c);
	lista.push_back(c1);
	lista.push_back(c2);
	lista.push_back(c3);
	lista.push_back(c4);
	lista.push_back(c5);
	lista.push_back(c6);
}

void mostrar_todas_las_conferencias(vector <conferencia> lista){
	int x = 0;
	while ( x < lista.size() ){
		cout << endl;
		lista[x].mostrar_conferencia();
		cout << endl;
		x = x + 1;
	}
}

bool es_numero(string dato){
	int x = 0;
	while ( x < dato.size() ){
		if ( isdigit(dato[x]) == 0 ){
			return false;
		}
		x = x + 1;
	}
	return true;
}

int convertir_a_numero(string dato){
	int x = 0;
	int suma = 0;
	while ( x < dato.size() ){
		int potencia = ( dato.size() - 1 ) - x;
		switch (dato[x]){
			case '0': suma = suma + 0 * pow(10,potencia); break;
			case '1': suma = suma + 1 * pow(10,potencia); break;
			case '2': suma = suma + 2 * pow(10,potencia); break;
			case '3': suma = suma + 3 * pow(10,potencia); break;
			case '4': suma = suma + 4 * pow(10,potencia); break;
			case '5': suma = suma + 5 * pow(10,potencia); break;
			case '6': suma = suma + 6 * pow(10,potencia); break;
			case '7': suma = suma + 7 * pow(10,potencia); break;
			case '8': suma = suma + 8 * pow(10,potencia); break;
			case '9': suma = suma + 9 * pow(10,potencia); break;
		}
		x = x + 1;
	}
	int numero = suma;
	return numero;
}

vector <string> crear_usuario(){
	string omitir,nombre,afiliacion,correo;
	cout << "" << endl;
	getline(cin,omitir);
	cout << "Ingrese su nombre" << endl;
	getline(cin,nombre);
	cout << "Ingrese su afiliacion" << endl;
	getline(cin,afiliacion);
	cout << "Ingrese su correo" << endl;
	getline(cin,correo);
	vector <string> usuario;
	usuario.push_back(nombre);
	usuario.push_back(afiliacion);
	usuario.push_back(correo);
	return usuario;
}

void menu_chair(){
	vector <string> usuario;
	usuario = crear_usuario();
	chair un_chair(usuario[0],usuario[1],usuario[2]);
	system("cls");
	int opcion = 0;
	while ( opcion != -1 ){
		cout << endl;
		cout << "Bienvenido chair" << endl;
		cout << "¿Quq quiere hacer?" << endl;
		cout << "1- Crear conferencia" << endl;
		cout << "2- Notificar autor" << endl;
		cout << "3- Mostrar mis conferencais" << endl;
		cout << "4- Modificar una conferencia" << endl;
		cout << "5- Mostrar todas las conferencias" << endl;
		cout << "6- Salir de la cuenta" << endl;
		string elecion;
		cin >> elecion;
		bool aceptado = es_numero(elecion);
		if ( aceptado == true ){
			opcion = convertir_a_numero(elecion);
			switch (opcion){
				case 1: cout << "Crearemos una conferencia" << endl; break;
				case 2: cout << "Notificaremos a un autor" << endl; break;
				case 3: cout << "Proyectar mis conferencias" << endl; break;
				case 4: cout << "Modificaremos una conferencias" << endl; break;
				case 5: cout << "Proyectaremos todas las conferencias" << endl; break;
				case 6: opcion = -1; system("cls"); break;
				default: cout << "Esa opcion no existe" << endl;
			}
		}else{
			system("cls");
			cout << "No ingreso un numero" << endl; 
		}
	}
}

void menu_revisor(){
	vector <string> usuario;
	usuario = crear_usuario();
	revisor un_revisor(usuario[0],usuario[1],usuario[2]);
	system("cls");
	int opcion = 0;
	while ( opcion != -1 ){
		cout << endl; 
		cout << "Bienvenido revisor" << endl;
		cout << "¿Que quiere hacer?" << endl;
		cout << "1- mostrar articulos resividos" << endl;
		cout << "2- comentar un articulo" << endl;
		cout << "3- Evaluar un articulo" << endl;
		cout << "4- Mostrar articulos revisados" << endl;
		cout << "5- enviar articulo revisado" << endl;
		cout << "6- mostrar todas las conferencias" << endl;
		cout << "7- salir de la cuenta" << endl;
		string elecion;
		cin >> elecion;
		bool aceptado = es_numero(elecion);
		if ( aceptado == true ){
			opcion = convertir_a_numero(elecion);
			switch (opcion){
				case 1: cout << "proyectar articulos resividos" << endl; break;
				case 2: cout << "comentar un articulo" << endl; break;
				case 3: cout << "evaluar un articulo" << endl; break;
				case 4: cout << "proyectar articulo revisados" << endl; break;
				case 5: cout << "enviar articulo" << endl; break;
				case 6: cout << "proyectar todas las conferencias" << endl; break;
				case 7: opcion = -1; system("cls"); break;
				default: cout << "Esa opcion no existe" << endl;
			}
		}else{
			system("cls");
			cout << "No ingreso un numero" << endl;
		}
	}
}

void menu_autor(){
	vector <string> usuario;
	usuario = crear_usuario();
	autor un_autor(usuario[0],usuario[1],usuario[2]);
	system("cls");
	int opcion = 0;
	while ( opcion != -1 ){
		cout << endl;
		cout << "Bienvenido autor" << endl;
		cout << "¿Que quiere hacer?" << endl;
		cout << "1- crear un articulo" << endl;
		cout << "2-mostrar mis articulos" << endl;
		cout << "3- mostrar mis conferencias" << endl;
		cout << "4- ver respuesta de las conferencias" << endl;
		cout << "5- enviar articulo" << endl;
		cout << "6- enviar articulo final" << endl;
		cout << "7- mostrar todas las conferencias" << endl;
		cout << "8- salir de la cuenta" << endl;
		string elecion;
		cin >> elecion;
		bool aceptado = es_numero(elecion);
		if ( aceptado == true ){
			opcion = convertir_a_numero(elecion);
			switch (opcion){
				case 1: cout << "crearemos un articulo" << endl; break;
				case 2: cout << "proyectaremos mis articulos" << endl; break;
				case 3: cout << "proyectar mis conferencias" << endl; break;
				case 4: cout << "mostrar resúestas de las conferencias" << endl; break;
				case 5: cout << "enviar un articulo" << endl; break;
				case 6: cout << "enviar articulo final" << endl; break;
				case 7: cout << "proyectar todas las comferencias" << endl; break;
				case 8: opcion = -1; system("cls"); break;
				default: cout << "Esa opcion no existe" << endl;
			}
		}else{
			system("cls");
			cout << "No ingreso un numero" << endl;
		}
	}
}

void menu_usuarios(int opcion){
	switch (opcion){
		case 1: menu_chair(); break;
		case 2: menu_revisor(); break;
		case 3: menu_autor(); break;
		case 4: break;
		default: cout << "Esa opcion no existe" << endl;
	}
}

int pedir_tipo_usuario(){
	cout << "Ingrese que tipo de usario es usted" << endl;
	cout << "1- chair" << endl;
	cout << "2- revisor" << endl;
	cout << "3- autor" << endl;
	cout << "4- salir del programa" << endl;
	string elecion;
	cin >> elecion;
	int opcion = 0;
	bool aceptado = es_numero(elecion);
	if ( aceptado == true ){
		opcion = convertir_a_numero(elecion);
		system("cls");
		menu_usuarios(opcion);
	}else{
		system("cls");
		cout << "No ingreso un numero" << endl;
	}
	return opcion;
}

void menu(){
	int tipo_usuario = 0;
	while ( tipo_usuario != 4 ){
		tipo_usuario = pedir_tipo_usuario();
	}
}

int main(){	
	vector <conferencia> las_conferencias;
	
	agregar_conferencias_falsas(las_conferencias);
	
	menu();
	
	cout << "El programa a terminado" << endl;
	
	
	return 0;
}

