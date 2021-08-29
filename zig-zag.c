/*
Turnuri in zig-zag. Un copil are n turnuri de inaltimi diferite (numere naturale).
El vrea sa construiasca un zid cu toate turnurile asezandu-le unul langa
altul astfel incat turnurile ce ocupa pozitii pare in zid sa fie mai inalte
decat turnurile vecine. Descoperiti un algoritm cu ajutorul caruia copilul sa
poata construi sirul.

          n = 7

          Input-> 1 7 2 6 4 3 5

          Output-> 1 5 2 6 3 7 4

          n = 6

          Input -> 12 16 14 11 15 13

          Output -> 11 14 12 15 13 16
*/
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int arr[100], n, i, k;

  printf("N = ");

  scanf("%d", &n);

  for(i = 1; i <= n; ++i) {

      printf("vec[%d] = ", i);

      scanf("%d", &arr[i]);
  }

  for(i = 1; i <= n; ++i) {

      printf("%d ", arr[i]);
  }

  printf("\n");

  k = n / 2;

  if(n % 2) k++;

  for(i = k + 1; i <= n; ++i) {

      printf("%d %d ", arr[i - k], arr[ i ]);
  }
  
  if(n % 2) printf("%d", arr[k]);

  printf("\n");

  return 0;
}
