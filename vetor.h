#ifndef DYNARRAY_VETOR_H
#define DYNARRAY_VETOR_H

#include <cstdint>

namespace prg2 {

    //tamanho de cada expansão de capacidade do vetor, em posições
    const int MinSize = 8;

    //o tipo VetorDinamico
    struct VetorDinamico {
        // Como Definir a area de memória de armazenamento ???
        int * mem;
        
        uint32_t len; // quantos dados estão armazenados
        uint32_t capacidade; // qual a capacidade
    };

    // operações do VetorDinamico
    // cria um VetorDinamico com capacidade inicial dada por MinSize
    VetorDinamico vetor_cria();

    // destroi um vetor (destrutor)
    void vetor_destroi(VetorDinamico &v);

    // acrescenta um valor ao final do vetor
    // expande o vetor, caso necessario. A expansão aloca uma capacidade adicional dada por MinSize
    // dispara exceção se pos > tamanho do vetor
    void vetor_insere(VetorDinamico & v, int pos, int valor);

    // acessa um dado que esta na posição pos do vetor
    // obtem uma referencia ao dado
    // se pos > tamanho - 1, dispara exceção
    int& vetor_obtem(VetorDinamico & v, int pos);

    // remove um dado da posição pos do vetor
    // se pos > tamanho - 1, dispara exceção
    void vetor_remove(VetorDinamico & v, int pos);

    // obtem o tamanho do vetor
    int vetor_tamanho(const VetorDinamico & v);

    // esvazia o vetor
    void vetor_limpa(VetorDinamico & v);

    // ordena o vetor
    void vetor_ordena(VetorDinamico & v);

    // Inverte o vetor
    void vetor_inverte(VetorDinamico & v);

    // remove dados contiguos duplicados
    void vetor_unicos(VetorDinamico & v);

    // expande a capacidade do vetor
    // a nova capacidade será >= capacidade solicitada
    void vetor_expande(VetorDinamico & v, int capacidade);


}




#endif //DYNARRAY_VETOR_H
