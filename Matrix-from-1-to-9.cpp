#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int RowCount = 9;
    const int ColumnCount = 9;
    
    int Matrix[RowCount][ColumnCount] = {};
    
    for (int RowNum = 1; RowNum <= RowCount; RowNum++)
    {
        for (int ColumnNum = 1; ColumnNum <= ColumnCount; ColumnNum++)
        {
            Matrix[RowNum - 1][ColumnNum - 1] = RowNum * ColumnNum;
            cout << setw(4) << Matrix[RowNum - 1][ColumnNum - 1] << "|";
        }
        
        cout << endl;
    }
    return 0;
}