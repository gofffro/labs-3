/************************************
 * Автор: Важенин С.С               *
 * Дата:  22.09.2024                *
 * Название: Лабораторная работа №3 *
 ************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  double P;
  const double e = 115.0;
  const double r = 29.7;
  int R = 10;
  
  // Предусловие
  while (R < 50) {
    P = R * (pow((e / (R + r)), 2));

    cout << fixed << setprecision(3) << "R: " << R << " Ом ";
    cout << fixed << setprecision(3) << " P: " << P << " Вт " << endl;

    R = R + 10;
  }
  
  // Постусловие
  do {
    P = R * (pow((e / (R + r)), 2));

    cout << fixed << setprecision(3) << "R: " << R << " Ом ";
    cout << fixed << setprecision(3) << " P: " << P << " Вт " << endl;

    R = R + 50;
  } while (R <= 300);
}
