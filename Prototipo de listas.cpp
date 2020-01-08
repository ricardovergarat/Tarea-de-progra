#include <iostream>
#include <string>

using namespace std;

struct nodo{
    int numero;
    nodo *sgt;
};


void insertar_elementos(nodo *&lista, int n){
    nodo *espacio_memoria = new nodo();
    espacio_memoria -> numero = n;

    nodo *aux = lista;
    nodo *aux2;

    while ( (aux != NULL) && (aux -> numero < n) ){
        aux2 = aux;
        aux = aux -> sgt;
    }

    if (lista == aux){
        lista = espacio_memoria;
    }else{
        aux2 -> sgt = espacio_memoria;
    }

    espacio_memoria -> sgt = aux;
}

void mostrar_lista(nodo *lista){
    nodo *actual = new nodo();
    actual = lista;
    while (actual != NULL){
        cout << actual -> numero << endl;
        actual = actual -> sgt;
        
    }
}

int main(){
    nodo *lista = NULL;
    insertar_elementos(lista,1);
    insertar_elementos(lista,3);
    insertar_elementos(lista,5);
    insertar_elementos(lista,7);
    mostrar_lista(lista);
    return 0;
}
