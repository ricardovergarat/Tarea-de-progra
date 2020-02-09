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
	// crear conferencias
	conferencia c("tegnologia para ciencias de la computacion","01-02-2020","099-02-2020","chile","talca");
	conferencia c1("biologia en esfuerzo computacional","01-02-2020","099-02-2020","chile","talca");
	conferencia c2("redes neuronales","01-02-2020","099-02-2020","chile","talca");
	conferencia c3("Genetic Algorithm in TSP","11-05-2020","17-05-2020","chile","santiago");
	conferencia c4("Neural Network Applied in Medicine","09-06-2020","17-06-2020","chile","Valparaiso");
	conferencia c5("Image Recognition agro industrial","18-09-2020","24-09-2020","chile","santiago");
	conferencia c6("Inteligencia artificial","24-10-2020","04-11-2020","peru","lima");
	
	// crear chairs
	chair ch("paulo gonzales","tercer piso","paulo@gmail.com");
	chair ch1("Jerman espindola","en el laboratorio","jerman@gmail.com");
	chair ch2("profe hugo","cercaa de la u","hugo@gmail.com");
	chair ch3("ricardo barrientos","aqui","ricardo@gmail.com");
	chair ch4("Jonathan palma","ni puta idea","jonathan@gmail.com");
	chair ch5("Tony stark","en mi corazon","play_boy_millonario@gmail.com");
	
	// crear revisores
	revisor r("Peter parker","En el UCM","spiderman@gmail.com");
	revisor r1("Steve rogers","En el pasadp","no_tiene_email@gmail.com");
	revisor r2("Kakaroto","En el universo 7","blue@gmail.com");
	revisor r3("Vegeta","En el universo 7","segundogmail.com");
	revisor r4("Thanos","En su nave","matar_50%_@gmail.com");
	revisor r5("Broly","Muy lejos","legendario@gmail.com");
	
	// crear autores
	autor a("Python","En .py","python@gmail.com");
	autor a1("C","En .C","Mi_antecesor_es_B@gmail.com");
	autor a2("C++","En .CPP","evolucion@gmail.com");
	autor a3("C#","En visual studio","Muy_lento@gmail.com");
	autor a4("Java","i dont know","Proximamente@gmail.com");
	autor a5("Matlab","En .mat","Matematica@gmail.com");
	
	
	// crear articulos
	
	vector <string> comentarios;
	vector <int> notas;
	comentarios = comentarios_falsos("me gustan los piratas","yo vi los piratas del caribe","no entendi un carajo pero el autor me pago");
	notas = notas_falsas(3,5,3);
	
	//articulo ar("piratas","texto de piratas","los piratas eran ladrones hace muchos años",comentarios,notas);
	/*
	comentarios = comentarios_falsos("solo me gusta dragon ball","origen no muy bien explicado","sus datos estan bien explicados");
	notas = notas_falsas(2,5,3);
	articulo ar1("anime","series animadas","forma de entretenimiento creada en japon",comentarios,notas);
	
	comentarios = comentarios_falsos("ahora entiendo las peliculas","alfin entendi como sobrevir","con razon todos siempre mueren");
	notas = notas_falsas(4,2,1);
	articulo ar2("zombies","habla los tipos de zombies","un tipo de mostruo dificil de matar",comentarios,notas);
	
	comentarios = comentarios_falsos("no puedo parglo","es muy bueno","falta ortografia");
	notas = notas_falsas(2,5,2);
	articulo ar3("netflix","aplicacion para videos","esta aplicaion tiene muchas pelicuas y series",comentarios,notas);
	
	comentarios = comentarios_falsos("es malo para los jovenes","tiene muchos insultos","los autores no saben escribir");
	notas = notas_falsas(3,1,1);
	articulo ar4("league of legends","es un juego","es juego creado en el 2010",comentarios,notas);
	
	comentarios = comentarios_falsos("no esta bien explicado","no explica origen","faltan imagenes");
	notas = notas_falsas(1,5,3);
	articulo ar5("idiomas","la forma de comunicarse","existe una infinidad de idiomas y se pueden crear",comentarios,notas);
	
	comentarios = comentarios_falsos("no queda claro el origen","faltan referencias","no explica como se crean");
	notas = notas_falsas(2,3,3);
	articulo ar6("peliculas","videos de larga duracion","video que cuentan historia por medio de imagenes",comentarios,notas);
	
	comentarios = comentarios_falsos("no explica que es","no menciona referencias","faltan ejemplos");
	notas = notas_falsas(1,4,5);
	articulo ar7("series","video de duracion media","cuentas una historia atravez de varios capitulos",comentarios,notas);
	
	comentarios = comentarios_falsos("no quedan claras las epocas","no se extiende el capitulo 5","faltan imagenes");
	notas = notas_falsas(2,4,5);
	articulo ar8("the big bang theory","teoria del origen del universo","teoria que propone una explosion a bilones de años",comentarios,notas);
	
	comentarios = comentarios_falsos("no menciona a los espartanos","odio este articulo","por estos articulos canlan la psu");
	notas = notas_falsas(1,4,4);
	articulo ar9("historia","tiene la historia del mundo","la historia comezo a ser reistrada en el año ...",comentarios,notas);
	
	comentarios = comentarios_falsos("explica bien los numeros","es muy basico","no explica los cardinales");
	notas = notas_falsas(1,1,1);
	articulo ar10("matematicas","introduce a la matematica","es el uso de numeros para resolver problemas",comentarios,notas);
	
	comentarios = comentarios_falsos("no meciona los idomas","no explica origen idomas","no explica importancia");
	notas = notas_falsas(4,5,3);
	articulo ar11("lenguas muertas","historia idomas que ya no se hablan","esto se debe a que quien conocen el idoma no pudieron eneñarlo",comentarios,notas);
	
	comentarios = comentarios_falsos("faltan dibijos","abusa de los ejemplos","no muy avanzado");
	notas = notas_falsas(3,5,1);
	articulo ar12("codigo binario","explica funcionamiento de los bits","los aparatos funcionan con ausencia o presencia de electricidad",comentarios,notas);
	
	comentarios = comentarios_falsos("falta mas teoria","solo explica autos mecanicos","no explica importancia");
	notas = notas_falsas(1,5,4);
	articulo ar13("cueso de conducion","explica reglas para conducir","este sistema fue creada para previnir las siguies situaciones",comentarios,notas);
	
	comentarios = comentarios_falsos("sub grupos no claros","faltan estadisticas","explica bien los porque");
	notas = notas_falsas(2,5,4);
	articulo ar14("tipos de aprendizaje","explica forma de apreneder","la capacidad de aprender se divide en grupo",comentarios,notas);
	
	comentarios = comentarios_falsos("hace buen uso de los ejemplos","falta tecnicas","es muy corto el articulo");
	notas = notas_falsas(2,5,2);
	articulo ar15("expresionn oral","explica tecnicas de comunicacion","la comunicacion tiene la finalidad de expresar",comentarios,notas);
	
	comentarios = comentarios_falsos("no hay ejemplos","es muy avanzado para principiantes","falta referencias");
	notas = notas_falsas(1,3,5);
	articulo ar16("paginas web","mestra tecnicas de desarrolo web","el desarrolo se basa en la ceracion de objetos en lenguajes",comentarios,notas);
	
	comentarios = comentarios_falsos("no entendi nada","por esto estudie lenguaje","apenas se entendio");
	notas = notas_falsas(2,3,4);
	articulo ar17("matrices","introduce al algebra lineal","son un conjunto de sistema de incognitas",comentarios,notas);
	
	comentarios = comentarios_falsos("tiene buenas imagens","es muy largo","no estan bien divididos los capitulos");
	notas = notas_falsas(3,4,3);
	articulo ar18("calculo diferencial","introdice al calculo","explicaremos primero el teorema fundamentas del calulo",comentarios,notas);
	
	*/
	cout << "termino de creacion" << endl;
	
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

