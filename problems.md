# Arhiva de probleme:

## #1
Coordonatele a N puncte in planul cartezian sunt
memorate in doi vectori:
Abs - vectorul absciselor
Ord - vectorul ordonatelor
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

Output -> 
Max Segment -> 7.07107

Points -> (1,3) - ( 2, -4)

## #2
Se citeste un vector V cu N elemente intregi si un numar natural p. Sa se elimine elementul de pe pozitia p din vectorul V
mutand elementele de pe pozitiile p+1,p+2,... cu o pozitie spre stanga. Sa se afiseze vectorul astfel obtinut.
Exemple:
n = 6, V = [10,20,30,40,50]
p = 3
Intrucat primul element al vectorului este retinut in V[0], elementul de pe pozitia p este 40. 
Output -> Nou Vector va fi: V = [10,20,30,50]

## #3
Se citeste un vector V cu N Elemente intregi si un numar natural p. Sa se introduca elementul cu valoarea 100 pe pozitia p, in vectorul V,
mutand elementele de pe pozitiile p,p+1,p+2,cu o pozitie spre dreapta. Sa se afiseze vectorul astfel obtinut.

Exemple:

N = 6, V = [10,20,30,40,50]
p = 3
Output -> 
Intrucat primul element al vectorului este retinut de V[0], noul vector va fi:
V = [10,20,30,100,40,50]

## #4
Sa se introduca intr-un vector V cu N elemente intregi, dupa fiecare element par, un element cu valoarea 0.
N = 5, V = [2,3,4,7,8]
Output -> V = [2,0,3,4,0,7,8,0]

## #5
Sa se elimine dintr-un vector V cu N elemente intregi toate elementele pare , stiind ca vectorul are cel putin un element impar.

Input -> N = 6, V = [1,2,3,4,5,6,7]
Output -> V = [1,3,5,7]

## #6
Se citeste un vector V cu N elemente intregi. Sa se mute primul element la sfarsitul vectorului.

Input -> N = 4, V = [10,20,30,40]
Output -> V = [20,30,40,10]

## #7
Se citeste un vector V cu N elemente intregi. Sa se mute ultimul element la inceputul vectorului.

Input -> N = 4, V = [10,20,30,40]
Output -> V = [40,10,20,30]

## #8

Se citesc n numere naturale nenule. Sa se determine in cate zerouri se termina produsul
lor fara a efectua operatia de inmultire.

Exemple:

Input -> n = 5; V = [4,50,48,72,25]
Output -> se termina in 4 zerouri.
