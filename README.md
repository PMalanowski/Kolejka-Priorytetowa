# Kolejka-Priorytetowa
Struktury Danych Projekt 1 - Kolejka Priorytetowa w języku C++

Prosta kolejka priorytetowa na tablicy.


Przez zastosowanie tablicy do stworzenia kolejki priorytetowej złożoność obliczeniowa jest większa niż w przypadku użycia innych struktur i prezentuje się następująco:

Dodanie elementu (enqueue) - O(1)

Usunięcie/Podejrzenie (dequeue/peek) - O(n)


Kolejka nie jest sortowana podczas dodawania elementu, dlatego dodanie zajmuje mało czasu ale żeby znaleźć (i usunąć) element musimy przejść po całej kolejce.
Implementacja z użyciem tablicy generuje dodatkowe problemy np. niemożliwość łatwego sprawdzenia czy kolejka jest pusta bez wprowadzenia specjalnych warunków (np. uznajemy, że priorytety nie mogą być zerowe i sprawdzamy czy priotytet pierwszego elementu jest zerowy, jeśli tak to kolejka jest pusta itd.).
