# include <iostream>
# include <fstream>
# include <string>

using namespace std;

class persona{
	private:
		string nombre;
		int edad;
	public:
		persona(string,int);
		void mostrar_datos_persona();

};

persona::persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

void persona::mostrar_datos_persona(){
	cout << "nombre: " << nombre << endl;
	cout << "edad: " << edad << endl;
}



int main(){
	persona p = persona("izi",20);
	p.mostrar_datos_persona();	

	return 0;
}