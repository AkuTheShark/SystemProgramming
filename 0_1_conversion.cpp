#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 
  
 
string SequenceDynamicArray(const int n)
{ 
    vector <int> sequence = {0, 1}; //вектор с двумя значениями, нужными для записи последовательности морса 
         
    for (int i = 0; i < n; i++) //цикл для совершения итераций/шагов, при каждом выполнении цикла length принимает значение количества символов в векторе sequence 
    { 
        int length = SequenceDynamicArray.size(); //чтобы узнать общее количество элементов вектора 
    }         
    for (int j = 0; j < length; j++) //статьи в интернете говорят что при работе с итерациями в цикле лучше использовать != и ++j, но, пока числа у меня целые, вроде все должно работать и так 
    { 
        sequence.push_back(sequence[j]); // добавляет новый элемент в конец вектора sequence 
    } 
             
    for (int j = 0; j < length; j++) 
    { 
        sequence.push_back(1 - sequence[j]); //тоже добавляет элемент, но инвертирует, чтобы получались эти дурацкие единички и нолики 
    } 
 
         
        string result = ""; //пустая строчка для результата 
         
        for (int i = 0; i < n; i++) 
        { 
            result += to_string(sequence[i]); //конвертируем все это безобразие в строку и кладем в result 
        } 
         
        return result; //возвращаем результат вместо нуля чтобы этот результат увидеть 
} 
 
int main()  
{ 
    int step; 
    cout << "Enter the step: "; 
    cin >> step; 
     
    cout << "Thue resulting sequence is: " << SequenceDynamicArray(step) << endl; 
     
    return 0; 
}