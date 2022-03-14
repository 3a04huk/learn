#include <iostream>
using namespace std;

void main()
{
	int row, column;
	FILE* file;
	cout << "Введите количество строк и количество столбцов для обработки в файле: ";
	cin >> row >> column;
	fopen_s(&file, "d:\\test.txt", "r");
	double **str=new double*[row], buffer;
	while (!feof(file))
	{
		for (int i = 0; i < row; i++) {
			str[i] = new double[column];
			for (int j = 0; j < column; j++) {
				if (fscanf_s(file, "%lf", &buffer) >0) {
					str[i][j] = buffer;
				}
				else {
					cout << "Не хватает элементов в файле!";
					return;
				}
			}
		}
		break;
	}
	//Отображение
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << str[i][j] << "\t";
		}
		cout << endl;
	}
}