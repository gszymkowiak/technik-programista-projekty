# Labirynt

Gra **Labirynt** wykonana w technologii HTML5 z Canvas oraz JavaScript. Gracz steruje postacią poruszającą się po planszy, zbiera przedmioty, rozwiązuje zagadki logiczne oraz unika zagrożeń, aby ukończyć kolejne poziomy gry. Zadanie realizowane jako projekt zespołowy.

---

# Opis gry

Celem gry jest przechodzenie przez kolejne poziomy labiryntu, aby dotrzeć do wyjścia. Podczas rozgrywki gracz:

- eksploruje mapę,
- zbiera przedmioty,
- zdobywa klucze,
- rozwiązuje zagadki logiczne,
- unika przeciwników i pułapek,
- zarządza poziomem zdrowia (HP).

Każdy kolejny poziom zwiększa poziom trudności poprzez większe mapy, większą liczbę zagrożeń oraz trudniejsze zagadki.

---

# Technologie

Projekt został wykonany przy użyciu:

- HTML5
- CSS3
- JavaScript (ES6+)
- HTML5 Canvas

Uruchamianie aplikacji odbywa się bezpośrednio w przeglądarce internetowej.

---

# Funkcjonalności

## Sterowanie postacią

- sterowanie klawiszami:
  - `W A S D`
  - lub `← ↑ ↓ →`
- płynny ruch postaci,
- kolizje ze ścianami,
- animacja ruchu.

## System labiryntu

- plansza oparta o siatkę (grid),
- ściany i przejścia,
- punkt startowy i końcowy,
- przechodzenie między poziomami.

## Przedmioty

Dostępne typy przedmiotów:

- leczenie (+HP),
- klucze,
- przedmioty aktywujące zagadki.

Po zebraniu przedmiot:

- znika z planszy,
- aktualizuje stan gracza.

## Zagadki logiczne

W grze występują proste zagadki:

- pytania logiczne,
- sekwencje,
- kody dostępu.

Rozwiązanie zagadki może odblokować przejście do kolejnego obszaru.

## Zagrożenia

Gracz musi uważać na:

- pułapki,
- przeciwników poruszających się po mapie.

System życia:

- utrata HP po kontakcie z zagrożeniem,
- ekran „Game Over” po utracie całego zdrowia.

## System poziomów

Gra zawiera minimum 3 poziomy:

1. poziom podstawowy,
2. poziom średni,
3. poziom zaawansowany.

Każdy poziom zwiększa:

- rozmiar mapy,
- liczbę przeciwników,
- poziom trudności zagadek.

---

# Interfejs użytkownika

UI gry zawiera:

- aktualny poziom,
- pasek zdrowia gracza,
- ekwipunek,
- komunikaty:
  - zwycięstwa,
  - porażki,
  - rozwiązania zagadki.

Projekt interfejsu:

- prosty,
- czytelny,
- responsywny.

---

# Grafika i dźwięk

## Grafika

- spójny styl graficzny,
- czytelne rozróżnienie elementów,
- lekka i wydajna oprawa.

## Dźwięki

- efekty zbierania przedmiotów,
- dźwięki kolizji,
- muzyka tła,
- komunikaty audio.

---

# Struktura projektu

```text
project/
│
├── index.html
├── style/
│   └── style.css
│
├── scripts/
│   ├── game.js
│   ├── player.js
│   ├── maze.js
│   ├── enemies.js
│   ├── items.js
│   ├── puzzles.js
│   └── ui.js
│
├── assets/
│   ├── images/
│
├── levels/
│   ├── level1.json
│   ├── level2.json
│   └── level3.json
│
└── README.md
```

---

# Uruchomienie projektu

## 1. Pobranie repozytorium

```bash
git clone https://github.com/nazwa-uzytkownika/maze-game.git
```

## 2. Wejście do katalogu projektu

```bash
cd maze-game
```

## 3. Uruchomienie

Otwórz plik `index.html` w przeglądarce  
lub użyj rozszerzenia **Live Server** w Visual Studio Code.

---

# Podział ról w zespole

| Rola                 | Odpowiedzialność     |
| -------------------- | -------------------- |
| Frontend Developer   | HTML, CSS, UI        |
| JavaScript Developer | logika gry           |
| Game Designer        | projekt poziomów     |
| Tester               | testowanie aplikacji |
| Project Manager      | organizacja projektu |

---

# Zarządzanie projektem

Projekt realizowany zgodnie z metodyką **Kanban**.

Narzędzia:

- Git
- GitHub
- Trello

Etapy realizacji:

1. analiza,
2. projektowanie,
3. implementacja,
4. testowanie,
5. wdrożenie.

---

# Testowanie

Testowane elementy:

- kolizje,
- przechodzenie poziomów,
- działanie zagadek,
- system HP,
- responsywność,
- wydajność gry.

---

# Możliwości rozwoju

Planowane rozszerzenia:

- generator losowych labiryntów,
- zapis stanu gry,
- multiplayer,
- ranking graczy,
- dodatkowe typy przeciwników,
- system umiejętności postaci.

---

# Dokumentacja

Dokumentacja projektu zawiera:

- opis systemu,
- wymagania funkcjonalne,
- wymagania niefunkcjonalne,
- dokumentację kodu,
- historię zmian,
- możliwości dalszego rozwoju.

---

# Licencja

Projekt edukacyjny realizowany w celach dydaktycznych.
