#include "numero_racional.h"

// Constructor
NumeroRacional::NumeroRacional(double numerador, double denominador) {
  NumeroRacional::numerador = numerador;
  if (denominador != 0) {
    NumeroRacional::denominador = denominador;
  } else {
    NumeroRacional::denominador = 1;
  }
}

// Imprimir el numero en formato de cociente
void NumeroRacional::imprimirNumeroRacional(NumeroRacional numero) {
  std::cout << numero.getNumerador() << " / " << numero.getDenominador() << std::endl;
}

// Imprimir el numero en formato de punto flotante
void NumeroRacional::imprimirNumeroDecimal(NumeroRacional numero) {
  std::cout << numero.getNumerador() / numero.getDenominador() << std::endl;
}

// Obtener el numerador
double NumeroRacional::getNumerador() {
  return NumeroRacional::numerador;
}

// Obtener el denominador
double NumeroRacional::getDenominador() {
  return NumeroRacional::denominador;
}

// Convertir el numero racional a un numero con punto flotante
double NumeroRacional::convertir_a_punto_flotante() {
  return (double) numerador / (double) denominador;
}

// Modificar el numerador del numero racional
bool NumeroRacional::setNumerador(double numerador) {
  NumeroRacional::numerador = numerador;
  return true;
}

// Modificar el denominador del numero racional
bool NumeroRacional::setDenominador(double denominador) {
  if (denominador != 0) {
    NumeroRacional::denominador = denominador;
    return true;
  } else {
    NumeroRacional::denominador = 1;
  }
  return false;
}

// Simplificar el numero racional
NumeroRacional NumeroRacional::simplificar(NumeroRacional numero) {
  double mcd = numero.maximoComunDenominador((long) numero.numerador, (long) numero.denominador);
  double numerador = (double) (((long) numero.numerador) / ((long) mcd));
  double denominador = (double) (((long) numero.denominador) / ((long) mcd));
  return NumeroRacional(numerador, denominador);
}

// Elevar el numero racional a un potencia
NumeroRacional NumeroRacional::potencia(NumeroRacional numero, int potencia) {
  double numerador =  pow(numero.numerador, potencia);
  double denominador =  pow(numero.denominador, potencia);
  NumeroRacional racionalElevado(numerador, denominador);
  return simplificar(racionalElevado);
}

// Sumar: un numero racional mas otro numero racional
NumeroRacional NumeroRacional::suma(NumeroRacional a, NumeroRacional b) {
  double numerador = a.getNumerador() * b.getDenominador() + b.getNumerador() * a.getDenominador();
  double denominador = a.getDenominador() * b.getDenominador();
  return simplificar(NumeroRacional(numerador, denominador));
}


// Restar: un numero racional menos un numero racional
NumeroRacional NumeroRacional::resta(NumeroRacional a, NumeroRacional b) {
  double numerador = a.getNumerador() * b.getDenominador() - b.getNumerador() * a.getDenominador();
  double denominador = a.getDenominador() * b.getDenominador();
  return simplificar(NumeroRacional(numerador, denominador));
}

// Multiplicar: un numero racional por un numero racional
NumeroRacional NumeroRacional::multiplicacion(NumeroRacional numero1, NumeroRacional numero2) {
  return simplificar(NumeroRacional(numero1.getNumerador() * numero2.getNumerador(), numero1.getDenominador() * numero2.getDenominador()));
}

// // Dividir: un numero racional entre un numero racional
NumeroRacional NumeroRacional::division(NumeroRacional numero1, NumeroRacional numero2) {
  return simplificar(NumeroRacional(numero1.getNumerador() * numero2.getDenominador(), numero1.getDenominador() * numero2.getNumerador()));
}


// Obtener el maximo comun denominador - utilizando el algoritmo de Euclides
double NumeroRacional::maximoComunDenominador(long a, long b) {
  if (a == 0) {
    return (double) b;
  }

  if (b == 0) {
    return (double) a;
  }

  return maximoComunDenominador(a > b ? b : a, a > b ? a % b : b % a);
  // si a > b: a = b y b = a
  // si b <= a: a = a y b = a
}