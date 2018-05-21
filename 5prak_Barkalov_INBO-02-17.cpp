#include <iostream>
#include <cstdlib>
using namespace std;

void BubbleSort(int *buf, int size) {
	system("cls");
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size - 1; j++) {
			if (buf[j] > buf[j + 1])
				swap(buf[j], buf[j + 1]);
		}
	}
	for (int i = 0; i < size; i++)
		cout << buf[i] << endl;
}

void BubbleSort(float *buf, int size) {
	system("cls");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (buf[j] > buf[j + 1])
				swap(buf[j], buf[j + 1]);
		}
	}
	for (int i = 0; i < size; i++)
		cout << buf[i] << endl;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	int size;
	cout << "Введите размер массива - ";
	cin >> size;
	cout << "Заполните массив: " << endl;
	int *buf1 = new int[size];
	for (int i = 0; i < size; i++)
		cin >> buf1[i];
	BubbleSort(buf1, size);
	delete[] buf1;

	system("pause");
	system("cls");

	cout << "Введите размер массива - ";
	cin >> size;
	cout << "Заполните массив: " << endl;
	float *buf2 = new float[size];
	for (int i = 0; i < size; i++)
		cin >> buf2[i];
	BubbleSort(buf2, size);
	delete[] buf2;

	system("pause");
	system("cls");
	return 0;
}
