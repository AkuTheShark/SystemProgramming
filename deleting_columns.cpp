using namespace std;
#include <iostream>

int main()
{
    int ArrayGenerate[7][7];
    
    srand(time(NULL));

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            ArrayGenerate[i][j] = rand() % 100;
        }

    }

    for (int i = 0; i < 7; i++) 
    {
        for (int j = 0; j < 7; j++) 
        {
            cout << "[" << ArrayGenerate[i][j] << "]";
        }

        cout << endl;

        cout << "----------------------------" << endl;
    }

    cout << endl;
    cout << endl;

    int temp; //временное хранение большего числа
    for (int i = 0; i < 7; i++) //строки
    {
        for (int j = 0; j < 7 - 1; j++) //столбцы 
        {
            for (int k = j + 1; k < 7; k++) //все числа массива 
            {
                if (ArrayGenerate[i][j] > ArrayGenerate[i][k]) 
                {
                    temp = ArrayGenerate[i][j]; //перестановка чисел от меньшего к большему
                    ArrayGenerate[i][j] = ArrayGenerate[i][k]; //перестановка чисел от меньшего к большему
                    ArrayGenerate[i][k] = temp; //перестановка чисел от меньшего к большему
                }
            }
        }
    }

    for (int i = 0; i < 7; i++) 
    {
        for (int j = 2; j < 7; j++) 
        {
            cout << "[" << ArrayGenerate[i][j] << "]";
        }

        cout << endl;

        cout << "--------------------" << endl;
    }


    return 0;
}