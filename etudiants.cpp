/*
At school, invatatoarea unei clase aseaza cei n students din clasa
in urmatoarea ordine: c1, c2, c3, ..., cn unde ci reprezinta inaltimea
studentului care ocupa pozitia i in sir. Invatatoarea considera ca elevii
sunt bine asezati in sir daca fiecare elev vede, privind de-a lungul sirului, cel putin
unul dintre elevii aflati la extremitatile sirului. Acest lucru este posibil
daca intre acest elev si cel aflat la un capat nu exista un alt elev cu o inaltime
mai mare sau egala cu a lui. Se cere sa se conceapa un program care sa verifice
daca elevii sunt bine asezati in sirul format de invatatoare, afisand mesajul
corect in acest caz, sau mesajul incorect in caz contrar.
exemplu:
n = 6
V = [1.2, 1.4, 1.5, 1.6, 1.3, 1.1] este un sir bine format intrucat elevii
din pozitiile 1,2,3 vad extremitatea stanga a sirului, al patruleaa vede
ambele extremitati. Elevii din pozitiile 5 si 6 vad extremitatea din dreapta a sirului.
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  float etudiants[] = {1.2, 1.3, 1.4, 5.5, 4.1, 1.2, -1.2};

  int n = sizeof(etudiants) / sizeof(etudiants[0]);

  for(int i = 0; i < n; ++i) cout<<etudiants[i]<<" ";

  int i = 0;

  if(etudiants[0] < etudiants[1]) {

      while(i < n - 1 && etudiants[i] < etudiants[i+1]) i++;

      while(i < n - 1 && etudiants[i] > etudiants[i+1]) i++;
  }

  if(i == n - 1 || i == 0) cout<<"\nThe students are arranged correct.\n";
               else
                           cout<<"\nThe students aren't arranged correct.\n";
  return 0;
}
