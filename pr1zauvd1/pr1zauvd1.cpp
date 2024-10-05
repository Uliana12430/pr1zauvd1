#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    system("color E1");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Прізвище
    string last_name;
    cout << "Введіть прізвище: ";
    getline(cin, last_name);

    // Ім'я
    string first_name;
    cout << "Введіть ім'я: ";
    getline(cin, first_name);

    // Вік
    int age;
    cout << "Введіть вік: ";
    cin >> age;

    // Очищення буфера після введення числа
    cin.ignore();

    // Місце проживання
    string location;
    cout << "Введіть місце проживання: ";
    getline(cin, location);

    // Місце навчання
    string study_place;
    cout << "Де ви навчаєтесь? ";
    getline(cin, study_place);

    // Хобі
    string hobby;
    cout << "Яке у вас хобі? ";
    getline(cin, hobby);

    // Вивід введених даних
    cout << "\nМене звати " << first_name << " " << last_name << "." << endl;
    cout << "Мені " << age << " років." << endl;
    cout << "Я живу в " << location << "." << endl;
    cout << "Я навчаюся в " << study_place << "." << endl;
    cout << "Моє хобі: " << hobby << "." << endl;

    return 0;
}
