/************************************
 * Автор: Важенин С.С               *
 * Дата:  21.09.2024                *
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
  cout << "Цикл с предусловием: " << endl;
  while (R <= 300) {
    P = R * (pow((e / (R + r)), 2));

    cout << fixed << setprecision(3) << "R: " << R << " Ом ";
    cout << fixed << setprecision(3) << " P: " << P << " Вт " << endl;

    if (R < 50) {
      R = R + 10;
    } else {
      R = R + 50;
    }
  }
  
  R = 10;
  cout << "Цикл с постусловием: " << endl;
  // Постусловие
  do {
    P = R * (pow((e / (R + r)), 2));

    cout << fixed << setprecision(3) << "R: " << R << " Ом ";
    cout << fixed << setprecision(3) << " P: " << P << " Вт " << endl;

    if (R < 50 & R >= 10) {
      R = R + 10;
    } else {
      R = R + 50;
    }
  } while (R <= 300);
}
