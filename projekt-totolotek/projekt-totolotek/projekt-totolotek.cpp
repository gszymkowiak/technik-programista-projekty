#include <iostream>
#include <random>
#include <unordered_set>
#include <limits>

/**
 * Funkcja wypełnia tablicę unikalnymi liczbami całkowitymi z podanego zakresu [min, max]
 */
void random_fill_array(int arr[], const int size, const int min, const int max) {
    if (min > max || size <= 0 || (max - min + 1) < size) {
        throw std::runtime_error("Niepoprawny zakres lub rozmiar tablicy.");
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);

    // Elementy unikalne, super-szybkie, nieuporządkowane
    std::unordered_set<int> used;
    int i = 0;
    while (i < size) {
        int v = dis(gen);
        if (used.insert(v).second) {
            arr[i++] = v;
        }
    }
}

/**
 * Sprawdza, czy podana liczba mieści się w zadanym zakresie włącznie
 */
bool is_in_scope(int number, int min, int max) {
    return number >= min && number <= max;
}

/**
 * Funkcja pobiera od użytkownika wartości i zapisuje je do tablicy,
 * pilnując zakresu oraz braku duplikatów.
 */
void user_fill_array(int arr[], const int size, const int min, const int max) {
    std::unordered_set<int> used;
    for (int i = 0; i < size; ) {
        std::cout << "Podaj liczbę " << (i + 1) << " z zakresu [" << min << ", " << max << "]: ";
        int x;
        if (!(std::cin >> x)) {
            std::cout << "To nie jest liczba. Spróbuj ponownie.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (!is_in_scope(x, min, max)) {
            std::cout << "Liczba poza zakresem. Spróbuj ponownie.\n";
            continue;
        }
        if (!used.insert(x).second) {
            std::cout << "Taka liczba już była. Wpisz inną.\n";
            continue;
        }
        arr[i++] = x;
    }
}

/**
 * Zlicza, ile unikalnych elementów z arr1 występuje w arr2
 * Złożoność O(n) przy użyciu zbioru.
 */
void match_count(const int arr1[], const int arr2[], const int size, int& count) {
    std::unordered_set<int> s1(arr1, arr1 + size);
    count = 0;
    for (int i = 0; i < size; ++i) {
        if (s1.erase(arr2[i]) == 1) {  // erase zwraca 1, gdy element byl w zbiorze
            ++count;
        }
    }
}

/**
 * Wypisuje elementy tablicy oddzielone pojedynczą spacją
 */
void print_array(const int arr[], const int size) {
    for (int i = 0; i < size; ++i) {
        if (i) std::cout << ' ';
        std::cout << arr[i];
    }
    std::cout << '\n';
}

int main() {
    // Ustawienie lokalizacji dla poprawnego wyświetlania polskich znaków
    setlocale(LC_ALL, "Polish");

    const int MIN = 1;
    const int MAX = 49;
    const int NUM_COUNT = 6;

    int random_numbers[NUM_COUNT] = { 0 };
    int user_numbers[NUM_COUNT] = { 0 };
    int hits = 0;

    try {
        random_fill_array(random_numbers, NUM_COUNT, MIN, MAX);
    }
    catch (const std::exception& e) {
        std::cerr << "Błąd losowania: " << e.what() << "\n";
        return 1;
    }

    std::cout << "Program TOTOLOTEK\n";
    std::cout << "--------------------------------\n";

    user_fill_array(user_numbers, NUM_COUNT, MIN, MAX);

    std::cout << "\nWylosowane liczby to: ";
    print_array(random_numbers, NUM_COUNT);

    std::cout << "Twoje liczby to: ";
    print_array(user_numbers, NUM_COUNT);

    match_count(random_numbers, user_numbers, NUM_COUNT, hits);
    std::cout << "Liczba trafień: " << hits << "\n";

    system("pause");

    return 0;
}
