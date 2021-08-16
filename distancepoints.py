'''
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
Points -> (1, 3) - (2, -4)
'''

import math

def main():
    Abs = [0] * 100
    Ord = [0] * 100
    maxA = 0
    maxB = 0
    dist = 0
    N = int(input("Number of points -> "))
    for i in range(0, N):
        Abs[i] = int(input(f"Abscisa point {i} = "))
        Ord[i] = int(input(f"Ordonata point {i} = "))
    for i in range(0, N - 1):
        for j in range(i + 1, N):
            d = math.sqrt((Abs[i] - Abs[j]) * (Abs[i] - Abs[j]) + (Ord[i] - Ord[j]) * (Ord[i] - Ord[j]))
            if d > dist:
                dist = d
                maxA = i
                maxB = j
    print(f"Largest Segment is { dist } with points: ({Abs[maxA]},{Ord[maxA]}) - ({Abs[maxB]},{Ord[maxB]})")

main()
