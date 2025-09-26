#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int year;
	cout << "Введите год: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Високосный";
    }
    else {
        cout << "Не високосный";
    }

    return 0;
}
