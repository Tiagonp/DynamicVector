#include "vetor.h"

namespace prg2 {

  VetorDinamico vetor_cria() {
    VetorDinamico v;
    v.len = 0;
    v.capacidade = MinSize;
    v.mem = new int[MinSize];
    
    return v;
  }
  
  void vetor_destroi(VetorDinamico &v) {
    delete[] v.mem;
    v.mem = nullptr;
    v.len = 0;
    v.capacidade = 0;
  }

  void vetor_expande (VetorDinamico &v) {
    auto ptr = new int[capacidade + MinSize];
    for (int i = 0; i<= v.len; i++) {
        ptr[i] = v.mem[i];
    }
    delete[] v.mem;
    v.mem = ptr;
    v.capacidade += MinSize;
  }
  
  void vetor_anexa(VetorDinamico &v, int valor) {
    if (v.len == v.capacidade) vetor_expande(v);
    v.mem[v.len] = valor;
    v.len++;
  }

  void vetor_insere(VetorDinamico &v, int valor) {
     vetor_insere(v, 0,valor);
  }

  void vetor_insere(VetorDinamico &v, int pos, int valor) {
      if (pos > v.len) {
          throw std::invalid_argument("pos invalida");
      }
      if (v.len == v.capacidade) vetor_expande(v);
      for (int j=v.len; j>0; j--) {
          v.mem[j] = v.mem[j-1];
      }
      v.mem[0] = valor;
      v.len++;
  }
  
  int &vetor_frente(VetorDinamico &v) {
    if (v.len == 0) {
      throw std::invalid_argument("Vetor vazio");
    }
    return v.mem[0];
  }
  
  int &vetor_atras(VetorDinamico &v) {
    if (v.len == 0) {
      throw std::invalid_argument("vetor vazio");
    }
    return v.mem[v.len-1];
  }
  
  int &vetor_obtem (VetorDinamico &v, int pos) {
  
    
    return v.mem[pos];
  }
  
  
}
