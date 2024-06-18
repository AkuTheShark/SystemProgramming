#include <iostream> 
#include <set> 
using namespace std; 
 
int main() 
{ 
    int amount,num; 
    set <int> Group; 
    cout << "Enter the amount of numbers: "; 
    cin >> amount; 
    for (int i = 0; i < amount; i++) 
    { 
        cin >> num; 
         
            if (Group.find(num) == Group.end()) 
            { 
                cout << "NO"; 
            } 
            else 
            { 
                cout << "YES"; 
            } 
        Group.insert(num); 
        cout << endl; 
    } 
    return 0; 
}