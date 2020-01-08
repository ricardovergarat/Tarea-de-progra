# include <iostream>
# include <string>
#include <stdlib.h>

using namespace std;

class persona{
	public:
		string nombre;
		int edad;
    public:
        persona(string,int);
        void mostrar_persona();
};

persona::persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void persona::mostrar_persona(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

class conferencia{
	public:
		string fecha;
		persona *una_persona;

	public:
		conferencia(string,string);
		void mostrar_conferencia();
};

conferencia::conferencia(string _fecha, persona *la_persona){
	fecha = _fecha;
	una_persona.nombre = la_persona;
}

void conferencia::mostrar_conferencia(){
	cout << "Fecha: " << fecha << endl;
    //cout << "persona: " << una_persona.nombre << endl;
}




int main(){
    persona p = persona("paulo",42);
    p.mostrar_persona();	
	conferencia c = conferencia("06-01-2020",&p);
	c.mostrar_conferencia();
    
	return 0;
}
