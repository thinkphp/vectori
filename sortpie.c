/*
  Reference: https://www.pbinfo.ro/probleme/514/sortpie
  Se dă un vector cu n elemente, numere naturale. Afișați în ordine descrescătoare valorile din vector care sunt prime cu ultimul element al vectorului.
  
  Input: 
  Programul citește de la tastatură numărul n, iar apoi n numere naturale, reprezentând elementele vectorului
  Output:
  Programul va afișa pe ecran valorile cerute, în ordine descrescătoare, separate prin exact un spațiu.
  
  Restrictii si precizari:
    
   - 1 <= n <= 1000
   - cele n numere citite vor fi mai mici decât 1.000.000.000

Example:

Input:

     8
     16 7 63  1 5 9 14 
     
Output:

     9 5 3 1

*/
  
#include <stdio.h>

void countingsort(long long *p, int n) {

     long long B[n+1], C[n+1], i, j;

     for(i = 0; i < n; ++i) C[i] = p[i];

     for(i = 0; i < n; ++i) B[i] = 0;

     for(i = 0; i < n - 1; ++i) {

         for(j = i + 1; j < n; ++j) {

             if(C[i] < C[j]) {

                 B[i]++;

             } else {

                 B[j]++;
             }

         }
     }

     for(i = 0; i < n; ++i) p[B[i]] = C[i];
 }

 int euclid(int a, int b) {
     int r;
     while(b) {
       r = a % b;
       a = b;
       b = r;
     }
     return a;
 }

int main() {

    int i, j, n, k = 0;

    scanf("%d", &n);

    long long arr[n+1], arr2[n+1];

    for(i = 0; i < n; ++i){

        scanf("%lld", &arr[i]);
    }

   for(i = 0; i < n - 1; ++i) {

       if(euclid(arr[i], arr[n-1]) == 1) {

           arr2[k++] = arr[i];
       }
   }

    countingsort(arr2, k);

    for(i = 0; i < k; ++i) {

        printf("%lld ", arr2[i]);
    }

    return(0);
}
