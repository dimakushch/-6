#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>
#include <string>
#include <Windows.h>
#include <cstdlib>

using namespace std;

//void creat(string* ranks, string* suits, string*& deck, int& Size) {
//    Size = 36;
//    deck = new string[Size];
//    int index = 0;
//    for (int i = 0; i < 9; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            deck[index++] = ranks[i] + suits[j];
//        }
//    }
//}
//
//void shuffle(string* deck, int Size) {
//    srand(time(0));
//    for (int i = 0; i < Size; ++i) {
//        int rand1 = rand() % Size;
//        string temp = deck[i];
//        deck[i] = deck[rand1];
//        deck[rand1] = temp;
//    }
//}
//
//void print(string* deck, int Size) {
//    for (int i = 0; i < Size; ++i) {
//        cout << deck[i] << " ";
//    }
//    cout << endl;
//}

//char* gen(int leng) {
//    const char set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
//    int Size = sizeof(set) - 1;
//
//    char* password = new char[leng + 1];
//
//    srand(time(nullptr));
//
//    for (int i = 0; i < leng; ++i) {
//        password[i] = set[rand() % Size];
//    }
//
//    password[leng] = '\0';
//
//    return password;
//}

//void bubble(int arr[], int n) {
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = 0; j < n - i - 1; ++j) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}

//void calc(int sco[], int ind[], int n) {
//    for (int i = 0; i < n; ++i) {
//        ind[i] = i;
//    }
//
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = 0; j < n - i - 1; ++j) {
//            if (sco[ind[j]] < sco[ind[j + 1]]) {
//                int temp = ind[j];
//                ind[j] = ind[j + 1];
//                ind[j + 1] = temp;
//            }
//        }
//    }
//}

int Sort(int arr[], int n) {
    int swaps = 0;

    for (int i = 0; i < n - 1; ++i) {
        int index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        if (index != i) {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            swaps++;
        }
    }

    return swaps;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //1
   /* string ranks[] = { "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    string suits[] = { "♦", "♣", "♠", "♥" };
    int Size;
    string* deck;
    creat(ranks, suits, deck, Size);
    shuffle(deck, Size);

    int num;
    cout << "Введіть кількість гравців: ";
    cin >> num;

    string** hands = new string * [num];
    for (int i = 0; i < num; ++i) {
        hands[i] = new string[6];
    }

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < num; ++j) {
            if (Size > 0) {
                hands[j][i] = deck[--Size];
            }
        }
    }

    for (int i = 0; i < num; ++i) {
        cout << "Гравець " << i + 1 << ": ";
        for (int j = 0; j < 6; ++j) {
            cout << hands[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Залишок карт у колоді: ";
    print(deck, Size);

    for (int i = 0; i < num; ++i) {
        delete[] hands[i];
    }
    delete[] hands;
    delete[] deck;*/

    //2

    /*int leng;

    cout << "Введіть довжину пароля: ";
    cin >> leng;

    char* password = gen(leng);

    cout << "Згенерований пароль: " << password << endl;

    delete[] password;*/

    //3

    /*const int size = 12;
    int heigh[size] = { 148, 144, 154, 145, 155, 130, 157, 136, 152, 130, 177, 166 };

    bubble(heigh, size);

    cout << "Відсортований зріст: ";
    for (int i = 0; i < size; ++i) {
        cout << heigh[i] << " ";
    }
    cout << endl;

    int ten = heigh[size - 10];

    cout << "Зріст 10-го студента від найвищого: " << ten << endl;*/

    //4

    /*const int size = 5;
    int sco[size] = { 100, 312, 0, 312, 500 };
    int ind[size] = { 0 };

    calc(sco, ind, size);

    cout << "Результат: ";
    for (int i = 0; i < size; ++i) {
        cout << ind[i] + 1;
        if (i < size - 1)
            cout << " ";
    }
    cout << endl;*/

    //5

    int size;

    cout << "Введіть розмір масиву: ";
    cin >> size;

    srand(time(NULL));

    int arr[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Вихідний масив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int num = Sort(arr, size);

    cout << "Відсортований масив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Кількість обмінів: " << num << endl;

    return 0;
}
