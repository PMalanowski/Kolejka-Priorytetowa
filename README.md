# Kolejka-Priorytetowa
Struktury Danych Projekt 1 - Kolejka Priorytetowa w języku C++

Prosta kolejka priorytetowa na tablicy.


Przez zastosowanie tablicy do stworzenia kolejki priorytetowej złożoność obliczeniowa jest większa niż w przypadku użycia innych struktur i prezentuje się następująco:

Dodanie elementu (enqueue) - O(1)

Usunięcie/Podejrzenie (dequeue/peek) - O(n)


Kolejka nie jest sortowana podczas dodawania elementu, dlatego dodanie zajmuje mało czasu ale żeby znaleźć (lub usunąć) element musimy przejść po całej kolejce.
