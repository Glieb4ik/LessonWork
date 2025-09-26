#include <iostream>
#include <Windows.h>
using namespace std;

//int main() {
//
//	SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int year;
//	cout << "Введите год: ";
//    cin >> year;
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        cout << "Високосный";
//    }
//    else {
//        cout << "Не високосный";
//    }
//
//    return 0;
//}
//

//int main() {
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int color;
//	cout << "Введите номер цвета (1-3): ";
//	cin >> color;
//
//	if (color == 1) {
//        cout << "\033[0;32mЦвета:\n1 - Зеленый\n2 - Красный\n3 - Синий\n\033[0m";
//	}
//	else if (color == 2) {
//		cout << "\033[0;31mЦвета:\n1 - Зеленый\n2 - Красный\n3 - Синий\n\031[0m";
//	}
//    else if (color == 3) {
//		cout << "\033[0;34mЦвета:\n1 - Зеленый\n2 - Красный\n3 - Синий\n\034[0m";
//    }
//	else {
//		cout << "Неизвестный цвет";
//	}
//}

void printRectangle(int width, int height, char sym) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
				cout << sym;
			}
			else cout << " ";
		}
		cout << endl;
	}
}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int height, weight, sym, color;

	cout << "Висота: ";
	cin >> height;
	cout << "Ширина: ";
	cin >> weight;
	cout << "Символ: ";
	cin >> sym;
	cout << "Колір: ";
	cin >> color;

	// Color

	if (color == 1) {
		        cout << "\033[0;32mЦвета:\n1 - Зеленый\n2 - Красный\n3 - Синий\n\033[0m";
			}
			else if (color == 2) {
				cout << "\033[0;31mЦвета:\n1 - Зеленый\n2 - Красный\n3 - Синий\n\031[0m";
			}
		    else if (color == 3) {
				cout << "\033[0;34mЦвета:\n1 - Зеленый\n2 - Красный\n3 - Синий\n\034[0m";
		    }
			else {
				cout << "Неизвестный цвет";
			}


	printRectangle(weight, height, sym);

	return 0;
	
}