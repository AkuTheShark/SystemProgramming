#include <iostream> 
using namespace std; 
 
int main() 
{ 
 cout << "Welcome! Watch the arrays:" << endl; 
 
 int arr_int[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }; 
 short arr_sh[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
 long arr_l[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 }; 
 float arr_fl[10] = { 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5 }; 
 double arr_db[10] = { 1.55, 2.55, 3.55, 4.55, 5.55, 6.55, 7.55, 8.55, 9.55, 10.55 }; 
 char arr_ch[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k' }; 
 bool arr_bl[10] = { true, false, true, false, true, false, true, false, true, false }; 
 
 cout << "Type int: " << endl; 
 for (int i = 0; i < 10; i++)  
 { 
   
  cout << i << ") " << arr_int[i] << endl; 
 } 
 
 cout << "Type short: " << endl; 
 for (int i = 0; i < 10; i++) 
 { 
  cout << i << ") " << arr_sh[i] << endl; 
 } 
 
 cout << "Type long: " << endl; 
 for (int i = 0; i < 10; i++) 
 { 
  cout << i << ") "<< arr_l[i] << endl; 
 } 
 
 cout << "Type float: " << endl; 
 for (int i = 0; i < 10; i++) 
 { 
  cout << i << ") " << arr_fl[i] << endl; 
 } 
 
 cout << "Type double: " << endl; 
 for (int i = 0; i < 10; i++) 
 { 
  cout << i << ") " << arr_db[i] << endl; 
 } 
 
 cout << "Type char: " << endl; 
 for (int i = 0; i < 10; i++) 
 { 
  cout << i << ") " << arr_ch[i] << endl; 
 } 
 
 cout << "Type bool: " << endl; 
 for (int i = 0; i < 10; i++) 
 { 
  cout << i << ") " << arr_bl[i] << endl; 
 } 
}