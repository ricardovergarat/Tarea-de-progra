#ifdef PERSONA_H
#define PERSONA_H

using namespace std;

class persona{
    public:
    	persona();
        persona(string,string,string);
        void mostrar_persona();
    public:
        string nombre;
        string afiliacion;
        string correo;
};

#endif
