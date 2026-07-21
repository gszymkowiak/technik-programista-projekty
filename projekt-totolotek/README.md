# Totolotek

Prosty program konsolowy napisany w języku C++, symulujący działanie gry lotto. Aplikacja umożliwia użytkownikowi wprowadzenie własnych liczb, losuje zestaw liczb pseudolosowych oraz oblicza liczbę trafień.

Projekt został przygotowany w celach dydaktycznych do nauki:

- programowania w C++,
- obsługi danych wejściowych,
- walidacji danych,
- wykorzystania biblioteki STL,
- generowania liczb pseudolosowych.

---

## Funkcjonalności

Program realizuje następujące funkcje:

- losowanie 6 unikalnych liczb z zakresu 1–49,
- pobieranie od użytkownika 6 unikalnych liczb,
- walidację poprawności danych wejściowych,
- wykrywanie duplikatów,
- obsługę błędnych danych,
- porównanie zestawów liczb,
- wyświetlanie liczby trafień.

---

## Wymagania systemowe

Do uruchomienia programu wymagane są:

- kompilator zgodny z **C++11** lub nowszym,
- system operacyjny obsługujący aplikacje konsolowe,
- standardowa biblioteka STL.

Kompilator:

- MSVC

---

## Uruchomienie

### Uruchomienie

```bash
./projekt-totolotek
```

W systemie Windows:

```bash
projekt-totolotek.exe
```

---

## Zastosowane technologie

Projekt wykorzystuje:

- język **C++**
- bibliotekę STL:
  - `unordered_set`
  - `vector`
  - `random`
  - `iostream`

---

## Zasady działania programu

1. Program losuje 6 unikalnych liczb z zakresu 1–49.
2. Użytkownik podaje własne 6 liczb.
3. Program sprawdza:
   - czy dane są liczbami,
   - czy liczby mieszczą się w zakresie,
   - czy nie występują duplikaty.
4. Następuje porównanie zestawów.
5. Wyświetlana jest liczba trafień.

---

## Przykładowe działanie

```text
Program TOTOLOTEK
-------------------------

Podaj liczbe 1 z zakresu [1, 49]: 7
Podaj liczbe 2 z zakresu [1, 49]: 7
Taka liczba juz byla. Wpisz inna.

Podaj liczbe 2 z zakresu [1, 49]: 55
Liczba poza zakresem. Sprobuj ponownie.

Podaj liczbe 2 z zakresu [1, 49]: 12

...

Wylosowane liczby to:
4 7 19 23 36 49

Twoje liczby to:
7 12 18 22 36 48

Liczba trafien: 2
```

---

## Wymagania funkcjonalne

| ID  | Opis                                   |
| --- | -------------------------------------- |
| F1  | Generowanie 6 unikalnych liczb         |
| F2  | Pobieranie 6 liczb od użytkownika      |
| F3  | Odrzucanie liczb spoza zakresu         |
| F4  | Odrzucanie danych niebędących liczbami |
| F5  | Wykrywanie duplikatów                  |
| F6  | Wyświetlanie wyników                   |
| F7  | Obliczanie liczby trafień              |
| F8  | Obsługa błędów losowania               |

---

## Przykładowe przypadki testowe

| ID   | Test                        | Oczekiwany wynik             |
| ---- | --------------------------- | ---------------------------- |
| TC01 | Poprawne dane               | Program działa poprawnie     |
| TC02 | Powtórzona liczba           | Komunikat o duplikacie       |
| TC03 | Liczba > 49                 | Komunikat błędu              |
| TC04 | Liczba < 1                  | Komunikat błędu              |
| TC05 | Tekst zamiast liczby        | Komunikat błędu              |
| TC06 | Błędne dane, potem poprawne | Program kontynuuje działanie |
| TC07 | Wszystkie trafienia         | Wynik: 6 trafień             |
| TC08 | Brak trafień                | Wynik: 0 trafień             |

---

## Ograniczenia projektu

- aplikacja działa wyłącznie w terminalu,
- brak zapisu wyników do pliku,
- brak obsługi wielu użytkowników,
- brak interfejsu graficznego.

---

## Cel edukacyjny

Projekt został przygotowany jako przykład aplikacji konsolowej do nauki:

- walidacji danych wejściowych,
- wykorzystania struktur STL,
- obsługi wyjątków,
- programowania proceduralnego i obiektowego w C++.

---

# Licencja

Projekt edukacyjny realizowany w celach dydaktycznych
