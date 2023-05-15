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
  
  void vetor_anexa(VetorDinamico &v, int valor) {
    v.
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
