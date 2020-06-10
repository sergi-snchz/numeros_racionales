#include "numero_racional.h"

/************************************************************************
 *
 * Creado por: Sergio Sanchez - 09 Junio 2020
 * 
 * **********************************************************************/

int maximoComunDenominador(int, int);

int main() {
  NumeroRacional a(4, 12);
  NumeroRacional b(5, 25);
  std::cout << "Imprimiendo a de forma racional: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(a);
  std::cout << "Imprimiendo a de forma decimal: " << std::endl;
  NumeroRacional::imprimirNumeroDecimal(a);
  std::cout << "Imprimiendo b de forma racional: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(b);
  std::cout << "Imprimiendo b de forma decimal: " << std::endl;
  NumeroRacional::imprimirNumeroDecimal(b);
  NumeroRacional c = NumeroRacional::multiplicacion(a, b);
  std::cout << "Imprimiendo c de forma racional: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(c);
  NumeroRacional d = NumeroRacional::division(a, b);
  std::cout << "Imprimiendo d de forma racional: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(d);
  NumeroRacional e = NumeroRacional::suma(a, b);
  std::cout << "Imprimiendo e de forma racional: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(e);
  NumeroRacional f = NumeroRacional::resta(a, b);
  std::cout << "Imprimiendo f de forma racional: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(f);
  NumeroRacional g = NumeroRacional::simplificar(a);
  NumeroRacional h = NumeroRacional::simplificar(b);
  std::cout << "Imprimiendo a de forma racional simplificada: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(g);
  std::cout << "Imprimiendo b de forma racional simplificada: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(h);
  NumeroRacional i = NumeroRacional::potencia(a, 2);
  std::cout << "Imprimiendo i de forma racional simplificada: " << std::endl;
  NumeroRacional::imprimirNumeroRacional(i);
  return 0;
}


