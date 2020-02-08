# include <iostream>
# include <fstream>

using namespace std;

void lectura(char nombre []){
	char a[6] = "1.txt";
	//string entrada = "1.txt";
	ifstream archivo; // i = input esto es para la lectura de archivos
	string text;
	archivo.open(a,ios::in);
	if (archivo.fail()){
		cout << "ese archivo no existe";
	}
	while (!archivo.eof()){ // mientras no sea el final del archivo
		getline(archivo,text); // estamos recuperando lo escrito en el texto y lo estamos guardando el la variable texto
		// ahora vamos a imprimir en consola el texto del archivo
		cout << text << endl;
	}
	
}

char convertir_a_char(string un_string){
	int x = 0;
	char el_char[un_string.size()];
	while ( x < un_string.size() ){
		el_char[x] = un_string[x];
		x = x + 1;
	}
	return el_char[un_string.size()];
}

int main(){
	/*
	string nombre;
	cout << "nombre del archuivo" << endl;
	getline(cin,nombre);
	char nombre_archivo[nombre.size()];
	int x = 0;
	while ( x < nombre.size() ){
		nombre_archivo[x] = nombre[x];
		x = x + 1;
	}
	*/
	ifstream archivo; // i = input esto es para la lectura de archivos
	string text;
	archivo.open("2.txt");
	if (archivo.fail()){
		cout << "ese archivo no existe";
		exit(1);
	}
	while (!archivo.eof()){ // mientras no sea el final del archivo
		getline(archivo,text); // estamos recuperando lo escrito en el texto y lo estamos guardando el la variable texto
		// ahora vamos a imprimir en consola el texto del archivo
		cout << text << endl;
	}
	
	return 0;
}
