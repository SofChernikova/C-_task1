// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void print(int** array, int vert, int hor);
void transporate(int** array, int rLen, int cLen);

int main()
{
	int rLen; // row-length (horizontal)
	int cLen; // column-length (vertical)
	cout << "Dimension of the array:" << endl;
	cout << "Hint : row-length (hor) -> column-length (vert)" << endl;

	cin >> rLen >> cLen;
	/*
	Initialization of array
	*/
	int** array = new int* [cLen];
	for (int i = 0; i < cLen; i++)
	{
		array[i] = new int[rLen];
	}
	/*
	Filling array and print
	*/
	for (int i = 0; i < cLen; i++) {
		for (int j = 0; j < rLen; j++) {
			cin >> array[i][j];
		}
	}
	cout << endl;
	print(array, cLen, rLen);
	cout << "Transporate: " << endl;
	transporate(array, rLen, cLen);	

	for (int i = 0; i < cLen; i++) {
		delete[] array[i];
	}
	delete[] array;

}
	
void transporate(int** array, int rLen, int cLen)
{
	int** arrayTrans = new int* [rLen];
	for (int i = 0; i < rLen; i++)
	{
		arrayTrans[i] = new int[cLen];
	}

	for (int i = 0; i < rLen; i++) {
		for (int j = 0; j < cLen; j++) {
			arrayTrans[i][j] = array[j][i];
		}
	}
	cout << endl;
	print(arrayTrans, rLen, cLen);
}

void print(int** array, int vert, int hor) 
{
	for (int i = 0; i < vert; i++) {
		for (int j = 0; j < hor; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


	



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
