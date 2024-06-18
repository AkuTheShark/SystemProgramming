#include <vector> 
#include <iostream> 
using namespace std; 
 
vector<int> SumOfTwo(vector<int>& nums, int target)  
{ 
    vector<int> result; 
 
    for (int i = 0; i < nums.size(); i++)  
    { 
        for (int j = i + 1; j < nums.size(); j++)  
        { 
            if (nums[i] + nums[j] == target)  
            { 
                result.push_back(i); 
                result.push_back(j); 
            } 
            //else 
            //{ 
            //    cout << "Введенные Вами числа при сложении не равняются заданному вами значению target" << endl; 
            //} 
        } 
    } 
 
    return result; 
} 
 
int main()  
{ 
    setlocale(0,""); 
    int VecSize; 
    cout << "Введите размер вектора:" << endl; 
    cin >> VecSize; 
    vector<int> nums (VecSize); 
    int target; 
    cout << "Введите значение target" << endl; 
    cin >> target; 
     
    cout << "Введите значения для вектора (сумма двух из них должна быть равна заданному вами значению target)" << endl; 
    for (int i = 0; i < nums.size(); i++) 
    { 
        int values; 
        cin >> values; 
        nums[i] = values; 
    } 
 
    vector<int> result = SumOfTwo(nums, target); 
 
    cout << "Индексы чисел, чья сумма равна значению переменной target: " << result[0] << ", " << result[1] << endl; 
 
    return 0; 
}