# Mój plan lekcji

## Opis projektu

"Mój plan lekcji" to aplikacja konsolowa napisana w języku C++, umożliwiająca zarządzanie planem lekcji ucznia. Program pozwala na dodawanie, odczytywanie, edytowanie oraz usuwanie zajęć zapisanych w pliku tekstowym.

Projekt został przygotowany w celu ćwiczenia:

- programowania obiektowego z klasą abstrakcyjną,
- obsługi plików,
- pracy z metodami,
- obsługi menu w aplikacjach konsolowych,
- podstawowych mechanizmów CRUD.

---

## Funkcjonalności

Aplikacja umożliwia:

- odczyt planu zajęć dla wybranego dnia tygodnia,
- dodawanie nowych lekcji,
- edytowanie istniejących zajęć,
- usuwanie zajęć,
- zapis danych do pliku `data.txt`,
- wyświetlanie pomocy użytkownika.

---

## Technologie

Projekt został wykonany z wykorzystaniem:

- Język: OPP C++
- Środowisko: Visual Studio 2022
- Interfejs: konsola / terminal
- Obsługa plików: `fstream`

---

## Programowanie obiektowe

W projekcie wykorzystano:

- klasy i obiekty,
- dziedziczenie,
- klasy abstrakcyjne,
- polimorfizm,
- metody wirtualne.

---

## Struktura projektu

```text
Projekt/
│
├── main.cpp
├── PlanLekcji.h
├── PlanLekcji.cpp
├── Lekcja.h
├── Lekcja.cpp
├── Operacja.h
├── Operacja.cpp
├── data.txt
└── README.md
```

---

## Przykładowe menu programu

```text
1. Odczytaj plan
2. Dodaj zajęcia
3. Edytuj zajęcia
4. Usuń zajęcia
5. Pomoc
6. Zakończ
```

---

## Przykładowy zapis danych

```text
Poniedziałek
07:10-07:55 Język polski
08:00-08:45 Matematyka
```

---

## Kompilacja programu

### Linux / macOS

```bash
g++ main.cpp PlanLekcji.cpp Lekcja.cpp Operacja.cpp -o plan
./plan
```

### Windows (MinGW)

```bash
g++ main.cpp PlanLekcji.cpp Lekcja.cpp Operacja.cpp -o plan.exe
plan.exe
```

---

## Możliwe kierunki rozwoju

- interfejs graficzny,
- eksport planu do PDF,
- wyszukiwanie lekcji,
- system logowania użytkownika,
- obsługa wielu planów zajęć.

---

## Licencja

Projekt edukacyjny wykonany w celach dydaktycznych.
