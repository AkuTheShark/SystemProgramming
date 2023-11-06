#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ARR_SIZE = 4;

    int u_arr[ARR_SIZE][ARR_SIZE] = {};
    int r_sum[ARR_SIZE] = {};
    int c_sum[ARR_SIZE] = {};

    cout << "Fill the array one by one (4 rows and 4 columns):" << endl;
    for (int r_num = 0; r_num < ARR_SIZE; r_num++)
    {
        for (int c_num = 0; c_num < ARR_SIZE; c_num++)
        {
            cout << r_num + 1 << " row ";
            cout << c_num + 1 << " column: " << endl;
            cin >> u_arr[r_num][c_num];
        }
    }

    for (int r_num = 0; r_num < ARR_SIZE; r_num++)
    {
        cout << "|";
        for (int c_num = 0; c_num < ARR_SIZE; c_num++)
        {
            cout << setw(5) << u_arr[r_num][c_num] << " ";
            r_sum[r_num] += u_arr[c_num][r_num];
        }
        cout << endl;
    }
         
    cout << "Sum by rows: " << endl;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << i + 1 << " row:" << r_sum[i] << endl;
    }

    return 0;
}