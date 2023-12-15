#include <iostream>
using namespace std;

class OriginalMatrix
{
public:
    int FirstMatrix[4][6]; //матрица до изменения
    int SecondMatrix[6][4]; //матрица после изменения

    void FillTheMatrix(); //функция для заполнения матрицы значениями
    void RowAndColumnsSwap1(); //функция для копирования столбцов в строки и строк в столбцы (строка: "11 | 22" превращается в столбец: "11 / 22")
    void RowAndColumnsSwap2();
};

void OriginalMatrix::FillTheMatrix() //вызов метода класса? значит, для вызова надо писать <имя_класса>::<метод_или_функция>(используемые методом переменные)
{
    int num = 0;

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            num += 10; // num = num + 11
            FirstMatrix[i][j] = num;
            SecondMatrix[j][i] = num;
        }
    }
}

void OriginalMatrix::RowAndColumnsSwap1() //наконец-то меняем местами строки и столбцы
{
    cout << "-Matrix before swapping rows and columns: " << endl;
    cout << endl;
    for (int i = 0; i < 4; i++) 
    {
        cout << " | ";
        for (int j = 0; j < 6; j++) 
        {
            cout << FirstMatrix[i][j] << " ";
        }
        cout << " | ";
        cout << endl;
    }
}

void OriginalMatrix::RowAndColumnsSwap2() //наконец-то меняем местами строки и столбцы
{
    cout << "-Matrix after swapping rows and columns: " << endl;
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << " | ";
        for (int j = 0; j < 4; j++)
        {
            cout << SecondMatrix[i][j] << " ";
        }
        cout << " | ";
        cout << endl;
    }
}

int main()
{
    OriginalMatrix ShowingMatrix;
    ShowingMatrix.FillTheMatrix();
    ShowingMatrix.RowAndColumnsSwap1();
    cout << endl;
    ShowingMatrix.RowAndColumnsSwap2();
    
    return 0;
}
