#ifndef numero_racional_h
#define numero_racional_h
#include <iostream>
#include <cmath>
class NumeroRacional {
private:
  double numerador;
  double denominador;
  double maximoComunDenominador(long, long);
public:
  NumeroRacional(double, double);
  static void imprimirNumeroRacional(NumeroRacional);
  static void imprimirNumeroDecimal(NumeroRacional);
  double getNumerador();
  double getDenominador();
  bool setNumerador(double);
  bool setDenominador(double);
  double convertir_a_punto_flotante();
  static NumeroRacional simplificar(NumeroRacional);
  static NumeroRacional potencia(NumeroRacional, int);
  static NumeroRacional suma(NumeroRacional, NumeroRacional);
  static NumeroRacional resta(NumeroRacional, NumeroRacional);
  static NumeroRacional multiplicacion(NumeroRacional, NumeroRacional);
  static NumeroRacional division(NumeroRacional, NumeroRacional);
};
#endif // numero_racional_h
