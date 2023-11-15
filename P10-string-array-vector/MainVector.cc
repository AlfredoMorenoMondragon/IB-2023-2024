/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 14/11/2023
 * @brief Este programa se encarga de realizar diferentes operaciones con vectores, como generarlos, leerlos, ordenarlos, etc. 
 * @brief Esta "Clase" esta muy orientada a lo que solicita la práctica, no es tanto orientadas a objetos
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#include "Vector.h"

int main() {
  // FASE I
  Vector vector {0, 0.f, 0.f};
  vector.EnterLowerUpperSize();
  std::vector<double> my_vector = vector.GenerateVector();
  std::cout << "El vector generado es ";
  vector.ReadVector(my_vector);
  std::cout << "El vector ordenado es ";
  vector.SortVector(my_vector);
  //  std::cout << "El vector sin repetidos es ";
  //  vector.UniqueVector(my_vector);

  // FASE II
  std::cout << "La suma de los elementos del vector es: ";
  vector.SumVector(my_vector);

  // FASE III
  vector.MMAVector(my_vector);
  // std::cout << "El valor maximo del vector es: ";
  // vector.MaximunValue(my_vector);
  // std::cout << "El valor minimo del vector es: ";
  // vector.MinimunValue(my_vector);
  // std::cout << "El valor medio del vector es: ";
  // vector.AverageValue(my_vector);

  // FASE IV
  Vector vector2 {0, 0.f, 0.f};
  std::cout << "Introduzca el tamaño, valor minimo y valor maximo del segundo vector \n";
  vector2.EnterLowerUpperSize();
  std::vector<double> my_vector2 = vector2.GenerateVector();
  std::cout << "El vector generado es ";
  vector2.ReadVector(my_vector2);
  std::cout << "El vector ordenado es ";
  vector2.SortVector(my_vector2);
  std::vector<double> my_vector3 = vector.ConcatenateVectors(my_vector, my_vector2);
  Vector vector3 {0, 0.f, 0.f};
  vector3.PropertiesVector(my_vector3);
  std::cout << "El vector concatenado es ";
  vector3.ReadVector(my_vector3);
  
  return 0;
}