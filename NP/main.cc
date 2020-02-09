# include <iostream>
# include <vector>
# include <string.h> // para comparar string

# include "conferencia.h"
# include "chair.h"
# include "revisor.h"
# include "autor.h"
# include "articulo.h"

using namespace std;



void menu_selecion(vector <conferencia> &lista,string nombre,int tipo_usuario){
	cout << nombre << endl;
	int x = 0;
	while ( x < lista.size() ){
		switch (tipo_usuario){
			case 1:{
				int y = 0;
				while ( y < lista[x].los_chair.size() ){
					if ( nombre == lista[x].los_chair[y].get_nombre() ){
						lista[x].mostrar_conferencia();
						break;
					}
					y = y + 1;
				}
				break;
			}
			case 2:{
				cout << "2" << endl;
				int y = 0;
				while ( y < lista[x].los_revisores.size() ){
					if ( nombre == lista[x].los_revisores[y].get_nombre() ){
						lista[x].mostrar_conferencia();
						break;
					}
					y = y + 1;
				}
				break;
			}
		}
		x = x + 1;
	}
}

vector <string> comentarios_falsos(string comentario1, string comentario2, string comentario3){
	vector <string > comentarios;
	comentarios.push_back(comentario1);
	comentarios.push_back(comentario2);
	comentarios.push_back(comentario3);
	return comentarios;
}

vector <int> notas_falsas(int nota1, int nota2, int nota3){
	vector <int> notas;
	notas.push_back(nota1);
	notas.push_back(nota2);
	notas.push_back(nota3);
	return notas;
}

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
	
	vector <string> comentarios;
	vector <int> notas;
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","dfjfh");
	notas = notas_falsas(3,5,3);
	
	articulo ar("piratas","texto de piratas","los piratas eran ladrones hace muchos años",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(2,5,3);
	articulo ar1("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(4,2,1);
	articulo ar2("zombies","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(2,5,2);
	articulo ar2("netflix","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(3,1,1);
	articulo ar3("league of legends","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(1,5,3);
	articulo ar4("idiomas","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(2,3,3);
	articulo ar5("peliculas","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(1,4,5);
	articulo ar6("series","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(2,4,5);
	articulo ar7("the big bang theory","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(1,4,4);
	articulo ar8("","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(1,1,1);
	articulo ar9("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(4,5,3);
	articulo ar10("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(3,5,1);
	articulo ar11("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(1,5,4);
	articulo ar12("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(2,5,4);
	articulo ar13("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(2,5,2);
	articulo ar14("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(1,3,5);
	articulo ar1(5"anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(2,3,4);
	articulo ar16("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("djasiodjasldjlasidj","dkfjodifu wirueirou weirouw eri9pu","sds aldhasduh asildh laskdh askljdh jfh");
	notas = notas_falsas(3,4,3);
	articulo ar17("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	
	
	
	c.agregar_grupo_chair(ch,ch5);
	c.agregar_grupo_revisor(r3,r1,r);

	c1.agregar_grupo_chair(ch3,ch2);
	c1.agregar_grupo_revisor(r2,r1,r5);
	
	c2.agregar_grupo_chair(ch2,ch4);
	c2.agregar_grupo_revisor(r,r4,r5);
	
	c3.agregar_grupo_chair(ch,ch5);
	c3.agregar_grupo_revisor(r,r1,r3);
	
	c4.agregar_grupo_chair(ch5,ch2);
	c4.agregar_grupo_revisor(r,r2,r1);
	
	c5.agregar_grupo_chair(ch3,ch);
	c5.agregar_grupo_revisor(r3,r,r2);
	
	c6.agregar_grupo_chair(ch5,ch);
	c6.agregar_grupo_revisor(r3,r,r4);
	
	lista.push_back(c);
	lista.push_back(c1);
	lista.push_back(c2);
	lista.push_back(c3);
	lista.push_back(c4);
	lista.push_back(c5);
	lista.push_back(c6);
	
	cout << "zona de pruebas" << endl;
	
	//menu_selecion(lista,r2.get_nombre(),2);
	
}




int main(){	
	vector <conferencia> las_conferencias;
	
	agregar_conferencias_falsas(las_conferencias);
	
	cout << "fuera" << endl;
	
	return 0;
}

