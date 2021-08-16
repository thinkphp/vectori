/*
Coordonatele a N puncte in planul cartezian sunt
memorate in doi vectori:
A - vectorul absciselor
N - vectorul ordonatelor
Output: Sa se determine in plan segmentul de lungime maxima.
De precizat ca se cere o singura solutie, daca sunt mai multe
segmente de lungime maxima.

Example:
Introduceti numarul de puncte -> 3
Introduceti coordonatele punctelor ->
Abscisa punctului 0 -> 1
Ordonata punctului 0 -> 3
Abscisa punctului 1 -> -1
Ordonata punctului 1 -> 1
Abscisa punctului 2 -> 2
Ordonata punctului 2 -> -4
Max Segment -> 7.07107
Points -> (1,3) - ( 2, -4)
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {

  int N, A[100], O[100], maxA, maxB;
  float dist, d;

  dist = maxA = maxB = 0;

  cout<<"Introduceti numarul de puncte -> \n";
  cin>>N;
  cout<<"Introduceti coordonatele punctelor -> \n";

  for(int i = 0; i < N; i++) {
      cout<<"Abscisa punctului "<<i<<" -> ";
      cin>>A[i];
      cout<<"Ordonata punctului "<<i<<" -> ";
      cin>>O[i];
  }

  for(int i = 0; i < N - 1; ++i) {

      for(int j = i + 1; j < N; j++) {

         d = sqrt((A[i] - A[j])*(A[i] - A[j]) + (O[i] - O[j])*(O[i] - O[j]));

         if(d > dist) {

            dist = d;

            maxA = i;

            maxB = j;

         }
      }
  }

  cout<<"Max Segment -> "<<dist<<"\n";

  cout<<"Points -> "<<"("<<A[maxA]<<", "<<O[maxA]<<")"<<" - ("<<A[maxB]<<", "<<O[maxB]<<")";

  return 0;
}
