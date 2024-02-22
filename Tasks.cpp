#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));


	// Задача 1. Среднее арифмет. массива и кол-во элементов меньше него.
	int n = 0;
	double sum = 0;
	double arith;
	const int size = 10;
	int arr[size]{};

	std::cout << "Массив:\n{ ";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
		sum += arr[i];
		arith = sum / size;
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b }\n";
	std::cout << "Среднее арифметическое массива: " << arith << std::endl;

	for (int i = 0; i < size; i++) {
		if (arr[i] < arith) {
			n++;
		}
	}
	std::cout << "Количество элементов значение которых меньше " << arith << ": " << n << std::endl;



	// Задача 2. Сложение двух массивов.
	const int size = 5;
	int arr[size][size];
	int arr1[size][size];
	int one, two;
	std::cout << "Первый двумерный массив:\n";
	for (int i = 0; i < size; i++) {
		std::cout << "Ряд " << i << " - { ";
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << ",\t";
			one = arr[i][j];
		}
		std::cout << "\b\b }\n";
	}

	std::cout << "\nВторой двумерный массив:\n";
	for (int i = 0; i < size; i++) {
		std::cout << "Ряд " << i << " - { ";
		for (int j = 0; j < size; j++) {
			arr1[i][j] = rand() % 10;
			std::cout << arr1[i][j] << ",\t";
			two = arr1[i][j];
		}
		std::cout << "\b\b }\n";
	}


	std::cout << "\nПопарное сложение элементов обоих массивов:\n";
	for (int i = 0; i < size; i++) {
		std::cout << "Ряд " << i << " - { ";
		for (int j = 0; j < size; j++) {
			arr[i][j] = arr[i][j] + arr1[i][j];
			std::cout << arr[i][j] << ",\t";
		}
		std::cout << "\b\b }\n";
	}


	
	// Задача 3. Шестизначное число.
	int n, num;
	std::cout << "Введите шестизначное число: " << std::endl;
	std::cin >> n;
	if (n < 100000 || n > 999999) {
		std::cout << "Число не шестизначное! " << std::endl;
		return 0;
	}

	int const size = 6;
	int arr[size]{};
	std::cout << "Массив - { ";
	for (int i = 0; ; i++) {
		num = n;
		arr[i] = num %= 10;
		n /= 10;
		if (n == 0) {
			break;
		}
	}
		
	for (int j = 5; j >= 0; j--) {
		std::cout << arr[j] << ", ";
	}
	std::cout << "\b\b }\n";
	
	return 0;
}