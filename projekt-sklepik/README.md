# Zegowska Szama

Nowoczesna aplikacja webowa dla szkolnego sklepiku umożliwiająca:

- przeglądanie produktów,
- składanie zamówień online,
- dostęp do promocji,
- zarządzanie użytkownikami,
- zarządzanie produktami i zamówieniami przez administratora.

Projekt realizowany jest w technologii PHP + MySQL + JavaScript + Bootstrap.

---

# Spis treści

1. Opis projektu
2. Technologie
3. Funkcjonalności
4. Wymagania funkcjonalne
5. Wymagania niefunkcjonalne
6. Architektura systemu
7. Struktura projektu
8. Baza danych
9. Instalacja
10. Konfiguracja
11. Uruchomienie aplikacji
12. Panel administracyjny
13. Bezpieczeństwo
14. Wdrożenie
15. Zarządzanie projektem
16. Możliwości rozwoju
17. Autorzy
18. Licencja

---

# 1. Opis projektu

„Zegowska Szama” to aplikacja webowa przeznaczona dla uczniów, nauczycieli oraz zespołu prowadzącego szkolny sklepik. System umożliwia składanie zamówień online oraz zarządzanie ofertą sklepiku.

Aplikacja została zaprojektowana jako responsywny system dostępny z poziomu:

- komputerów,
- tabletów,
- smartfonów.

---

# 2. Technologie

## Backend

- PHP

## Frontend

- JavaScript
- Bootstrap

## Baza danych

- MySQL

## Hosting

- Zewnętrzny hosting współdzielony

---

# 3. Funkcjonalności

## Użytkownik

- Rejestracja konta
- Logowanie
- Przeglądanie produktów
- Wyszukiwanie produktów
- Dostęp do promocji
- Dodawanie produktów do koszyka
- Składanie zamówień

## Administrator

- Zarządzanie użytkownikami
- Zarządzanie produktami
- Zarządzanie zamówieniami
- Zmiana statusów zamówień

---

# 4. Wymagania funkcjonalne

## Rejestracja i logowanie

System umożliwia:

- rejestrację użytkownika,
- logowanie użytkownika,
- utrzymywanie sesji,
- dostęp do chronionych widoków.

### Kryteria akceptacji

- formularz rejestracji,
- walidacja danych,
- hashowanie haseł,
- obsługa sesji PHP.

---

## Przeglądanie produktów

Użytkownik może:

- przeglądać produkty,
- filtrować produkty,
- wyszukiwać produkty.

### Informacje o produkcie

- nazwa,
- cena,
- dostępność.

---

## Promocje

Promocje dostępne są wyłącznie dla zalogowanych użytkowników.

### Funkcje

- sekcja „Promocje”,
- oznaczenie produktów promocyjnych,
- ograniczenie dostępu dla niezalogowanych użytkowników.

---

## Zamówienia online

System umożliwia:

- dodawanie produktów do koszyka,
- usuwanie produktów z koszyka,
- składanie zamówień,
- zapis zamówień do bazy danych,
- śledzenie statusu zamówienia.

---

## Panel administracyjny

Administrator może:

### Zarządzanie użytkownikami

- usuwać użytkowników,
- zmieniać role użytkowników,
- przeglądać listę użytkowników.

### Zarządzanie produktami

- dodawać produkty,
- edytować produkty,
- usuwać produkty.

### Zarządzanie zamówieniami

- przeglądać zamówienia,
- zmieniać statusy zamówień,
- analizować szczegóły zamówień.

---

# 5. Wymagania niefunkcjonalne

## Responsywność

Aplikacja wykorzystuje Bootstrap i działa poprawnie na różnych urządzeniach.

## Bezpieczeństwo

- hashowanie haseł,
- prepared statements,
- kontrola sesji,
- ochrona przed SQL Injection.

## Wydajność

- optymalizacja zapytań SQL,
- minimalizacja rozmiaru grafik,
- kompresja obrazów.

## Dostępność

- odpowiedni kontrast,
- teksty alternatywne,
- obsługa klawiatury,
- czytelna typografia.

---

# 6. Architektura systemu

Projekt wykorzystuje architekturę MVC:

## Model

Obsługa danych oraz komunikacja z bazą MySQL.

## View

Interfejs użytkownika oparty o Bootstrap.

## Controller

Logika biznesowa aplikacji.

---

# 7. Struktura projektu

```text
/project-root
│
├── /app
│   ├── /controllers
│   ├── /models
│   └── /views
│
├── /public
│   ├── /css
│   ├── /js
│   ├── /images
│   └── index.php
│
├── /config
│   └── database.php
│
├── /storage
│
├── /docs
│
└── README.md
```

---

# 8. Baza danych

## Przykładowe tabele

### users

| Pole     | Typ     |
| -------- | ------- |
| id       | INT     |
| email    | VARCHAR |
| password | VARCHAR |
| role     | VARCHAR |

### products

| Pole      | Typ     |
| --------- | ------- |
| id        | INT     |
| name      | VARCHAR |
| price     | DECIMAL |
| stock     | INT     |
| promotion | BOOLEAN |

### orders

| Pole       | Typ      |
| ---------- | -------- |
| id         | INT      |
| user_id    | INT      |
| status     | VARCHAR  |
| created_at | DATETIME |

### order_items

| Pole       | Typ |
| ---------- | --- |
| id         | INT |
| order_id   | INT |
| product_id | INT |
| quantity   | INT |

---

# 9. Instalacja

## Wymagania

- PHP 8.x
- MySQL 8.x
- Apache/Nginx
- Composer (opcjonalnie)

## Klonowanie repozytorium

```bash
git clone https://github.com/nazwa-uzytkownika/zegowska-szama.git
```

## Import bazy danych

```bash
mysql -u root -p database_name < database.sql
```

---

# 10. Konfiguracja

## Plik konfiguracyjny

`/config/database.php`

```php
<?php

return [
    'host' => 'localhost',
    'database' => 'zegowska_szama',
    'username' => 'root',
    'password' => '',
];
```

---

# 11. Uruchomienie aplikacji

## Serwer lokalny PHP

```bash
php -S localhost:8000 -t public
```

Aplikacja będzie dostępna pod adresem:

```text
http://localhost:8000
```

---

# 12. Panel administracyjny

## Funkcje administratora

- zarządzanie użytkownikami,
- zarządzanie produktami,
- zarządzanie zamówieniami,
- zmiana statusów zamówień.

Dostęp do panelu zabezpieczony jest kontrolą sesji PHP.

---

# 13. Bezpieczeństwo

W projekcie zastosowano:

- `password_hash()` oraz `password_verify()`,
- prepared statements PDO/MySQLi,
- walidację formularzy,
- filtrowanie danych wejściowych,
- kontrolę uprawnień użytkowników,
- ochronę sesji.

---

# 14. Wdrożenie

Aplikacja powinna zostać wdrożona na zewnętrznym hostingu obsługującym:

- PHP,
- MySQL,
- HTTP/HTTPS.

---

# 15. Zarządzanie projektem

Projekt realizowany zgodnie z metodyką Kanban.

## Narzędzia

- Git
- GitHub
- Trello

## Workflow Git

- `main`
- `develop`

---

# 16. Możliwości rozwoju

Możliwe kierunki rozwoju:

- powiadomienia e-mail,
- płatności online,
- panel statystyk,
- aplikacja mobilna,
- integracja z API szkoły,
- system opinii o produktach.

---

# 17. Autorzy

## Zespół projektowy

- Programista PHP
- Programista Frontend
- Administrator bazy danych
- Tester aplikacji

---

# 18. Licencja

Projekt edukacyjny realizowany w celach dydaktycznych.
