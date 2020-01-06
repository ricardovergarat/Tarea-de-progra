# include <iostream>
# include <fstream>
# include <string>

using namespace std;
/*
class persona{
	private:
		string nombre;
		int edad;
	public:
		persona(string,int);
		void mostrar_datos_persona();

};
*/


class grupo{
	private:
		class persona{
			public:
				string nombre;
				int edad;
			public:
				persona(string,int);
				//void mostrar_datos_persona();
		};

		persona p;
		
	public:
		grupo(string,int);
		//void mostrar_grupo();

};

persona::persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

void persona::mostrar_datos_persona(){
	cout << "nombre: " << nombre << endl;
	cout << "edad: " << edad << endl;
}
grupo::grupo(string nombre, int edad){
	p = persona(nombre,edad);
}

void grupo::mostrar_grupo(){
	p.mostrar_datos_persona();
}

int main(){
	grupo g = grupo("izi",20);	

	return 0;
}