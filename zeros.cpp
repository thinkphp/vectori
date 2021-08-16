/*
Se citesc n numere naturale nenule. Sa se determine in cate zerouri se termina produsul
lor fara a efectua operatia de inmultire.

Exemple:

Input -> n = 5; V = [4,50,48,72,25]
Output -> se termina in 4 zerouri.
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int vec[] = { 4, 50, 48, 72, 25 },

      n = sizeof(vec) / sizeof(vec[0]), two = 0, five = 0;

      for(int i = 0; i < n; ++i) {

          int num = vec[i];

          while(num % 2 == 0) {
                two++;
                num /= 2;
          }
          while(num % 5 == 0) {
                five++;
                num /= 5;
          }
      }

      if(two < five) {
        cout<<two;
      } else {
        cout<<five;
      }


  return 0;
}
