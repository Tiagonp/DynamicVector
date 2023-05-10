#include <iostream>
#include "vetor.h"

using namespace std;

void mostra_vetor(const VetorDinamico<int> & v) {
    for (int i = 0; i < vetor_tamanho(v); i++) {
        cout << vetor_obtem(v, 1) << ' ';
    }
}

int main() {

    //construtor de vetor
    auto v = vetor_cria<int>();

    //acrescenta um dado ao final do vetor
    vetor_anexa(v, 5);
    vetor_anexa(v, 6);
    vetor_anexa(v, 7);

    cout << "Tamanho: " << vetor_tamanho(v) << endl;
    cout << "Posição 1: " << vetor_obtem(v, 1) << endl;

    // remove dados em uma posição do vetor
    vetor_remove(v, 1);

    cout << "Tamanho: " << vetor_tamanho(v) << endl;
    cout << "Posição 1: " << vetor_obtem(v, 1) << endl;

    // insere dados em uma posição do vetor
    vetor_insere(v, 1, 10);

    cout << "Tamanho: " << vetor_tamanho(v) << endl;
    cout << "Posição 1: " << vetor_obtem(v, 1) << endl;

    // insere dados no inicio do do vetor
    vetor_insere(v, 11);
    mostra_vetor(v);

    // ordena vetor em ordem crescente
    vetor_ordena(v);
    mostra_vetor(v);

    // inverte os dados do vetor
    vetor_inverte(v);
    mostra_vetor(v);

    // remove dados duplicados
    vetor_unicos(v);
    mostra_vetor(v);

    // remove tudo do vetor
    vetor_limpa(v);

    // destroi um vetor
    prg2::vetor_destroi(v);


    return 0;
}
