/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 14/11/2023
 * @brief este programa devuelve un vector de double aleatorios
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#include "GenerateVector.h"

int main() {
  Vector vector {0, 0.f, 0.f};
  vector.EnterLowerUpperSize();
  std::vector<double> my_vector = vector.GenerateVector();
  std::cout << "El vector generado es ";
  vector.ReadVector(my_vector);
  std::cout << "El vector ordenado es ";
  vector.SortVector(my_vector);
//   std::cout << "El vector sin repetidos es ";
//   vector.UniqueVector(my_vector);
  return 0;
}