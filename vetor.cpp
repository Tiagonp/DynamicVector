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
  
  
}
