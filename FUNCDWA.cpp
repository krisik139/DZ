#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void findMinMax(int a, int b, int c);
void countElements(int arr[], int size);
void sortArray(int arr[], int size, int direction = 1);
void drawCube(int value);
void playGame();
void findMinSequence10(int arr[], int size);

int main() {
    srand(time(0));
    cout << "Завдання 1 " << endl;
    findMinMax(15, 4, 23);
    cout << endl;

    cout << "Завдання 2" << endl;
    int userSize;
    cout << "Введiть розмiр масиву: ";
    cin >> userSize;

    int* userArr = new int[userSize];
    for (int i = 0; i < userSize; i++) {
        userArr[i] = (rand() % 21) - 10;
    }
    countElements(userArr, userSize);
    delete[] userArr;
    cout << endl;

    cout << "Завдання 3" << endl;
    int arr3[10] = { 5, 2, 9, 1, 7, 6, 3, 8, 4, 0 };

    cout << "Сортування за спаданням:" << endl;
    sortArray(arr3, 10);
    for (int i = 0; i < 10; i++) cout << arr3[i] << " ";
    cout << endl;

    cout << "Сортування за зростанням:" << endl;
    sortArray(arr3, 10, 0);
    for (int i = 0; i < 10; i++) cout << arr3[i] << " ";
    cout << endl << endl;

    cout << "Завдання 5" << endl;
    int arr5[100];
    for (int i = 0; i < 100; i++) {
        arr5[i] = rand() % 100;
    }
    findMinSequence10(arr5, 100);
    cout << endl;

    cout << "Завдання 4" << endl;
    playGame();

    return 0;
}
void findMinMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    cout << "Числа: " << a << ", " << b << ", " << c << endl;
    cout << "Min: " << min << ", Max: " << max << endl;
}

void countElements(int arr[], int size) {
    int positive = 0, negative = 0, zeros = 0;
    cout << "Згенерований масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        if (arr[i] > 0) positive++;
        else if (arr[i] < 0) negative++;
        else zeros++;
    }
    cout << endl;
    cout << "Додатних: " << positive << ", Вiд'ємних: " << negative << ", Нулiв: " << zeros << endl;
}

void sortArray(int arr[], int size, int direction) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            bool condition = (direction == 1) ? (arr[j] < arr[j + 1]) : (arr[j] > arr[j + 1]);
            if (condition) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void drawCube(int value) {
    if (value == 1) {
        cout << "+-----+\n|     |\n|  * |\n|     |\n+-----+" << endl;
    }
    else if (value == 2) {
        cout << "+-----+\n| * |\n|     |\n|   * |\n+-----+" << endl;
    }
    else if (value == 3) {
        cout << "+-----+\n| * |\n|  * |\n|   * |\n+-----+" << endl;
    }
    else if (value == 4) {
        cout << "+-----+\n| * * |\n|     |\n| * * |\n+-----+" << endl;
    }
    else if (value == 5) {
        cout << "+-----+\n| * * |\n|  * |\n| * * |\n+-----+" << endl;
    }
    else if (value == 6) {
        cout << "+-----+\n| * * |\n| * * |\n| * * |\n+-----+" << endl;
    }
}

void playGame() {
    int userChoice;
    cout << "Хто ходить першим? (1 - Людина, 2 - Комп'ютер): ";
    cin >> userChoice;

    int userTotal = 0, compTotal = 0;

    for (int round = 1; round <= 5; round++) {
        cout << "\n--- РАУНД " << round << " ---" << endl;

        if (userChoice == 1) {
            cout << "Натиснiть Enter, щоб кинути кубики...";
            cin.ignore();
            cin.get();
            int k1 = rand() % 6 + 1;
            int k2 = rand() % 6 + 1;
            cout << "Ви викинули:\n";
            drawCube(k1); drawCube(k2);
            userTotal += (k1 + k2);

            int c1 = rand() % 6 + 1;
            int c2 = rand() % 6 + 1;
            cout << "Комп'ютер викинув:\n";
            drawCube(c1); drawCube(c2);
            compTotal += (c1 + c2);
        }
        else { // Спочатку комп'ютер
            int c1 = rand() % 6 + 1;
            int c2 = rand() % 6 + 1;
            cout << "Комп'ютер викинув:\n";
            drawCube(c1); drawCube(c2);
            compTotal += (c1 + c2);

            cout << "Натиснiть Enter, щоб кинути кубики...";
            cin.ignore();
            cin.get();
            int k1 = rand() % 6 + 1;
            int k2 = rand() % 6 + 1;
            cout << "Ви викинули:\n";
            drawCube(k1); drawCube(k2);
            userTotal += (k1 + k2);
        }
    }

    cout << "\n=== ПIДСУМОК ГРИ ===" << endl;
    cout << "Ваша сума балов: " << userTotal << ", Середнє за кидок: " << (double)userTotal / 5 << endl;
    cout << "Сума Комп'ютера: " << compTotal << ", Середнє за кидок: " << (double)compTotal / 5 << endl;

    if (userTotal > compTotal) cout << "Ви ПЕРЕМОГЛИ! :)" << endl;
    else if (compTotal > userTotal) cout << "Комп'ютер ПЕРЕМIГ! :(" << endl;
    else cout << "НIЧИЯ!" << endl;
}

void findMinSequence10(int arr[], int size) {
    cout << "Таблиця 10х10:" << endl;
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
        if ((i + 1) % 10 == 0) cout << endl;
    }

    int minSum = 0;
    int minIndex = 0;

    for (int i = 0; i < 10; i++) {
        minSum += arr[i];
    }

    for (int i = 1; i <= size - 10; i++) {
        int currentSum = 0;
        for (int j = i; j < i + 10; j++) {
            currentSum += arr[j];
        }
        if (currentSum < minSum) {
            minSum = currentSum;
            minIndex = i;
        }
    }

    cout << "\nМiнiмальна сума 10 чисел дорiвнює: " << minSum << endl;
    cout << "Послiдовнiсть починається з iндексу: " << minIndex << " (елемент " << arr[minIndex] << ")" << endl;
}