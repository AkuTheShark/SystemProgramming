#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    cout << "Which array will you choose: 1-st or 2-nd ?" << endl;
    int choice1 = 0;
    cin >> choice1;
    
    switch(choice1)
    {
    case 1:
        int size1 = 0;
        cout << "Enter the size of the array:" << endl;
        cin >> size1;
        int** ArrIntFirst{ new int* [size1] {} };
    
        for (int i = 0; i < size1; i++)
        {
            ArrIntFirst[i] = new int [size1] {};
        }
        
        srand(time(0));

	    int num1;

	    for (int i = 0; i < 3; i++)
	    {
		    for (int j = 0; j < 3; j++)
		    {
			    num1 = rand() % 60;
			    ArrIntFirst[i][j] = num1;
			    cout << setw(4) << ArrIntFirst[i][j] << endl;
		    }
	    }	
	    break;    
	    
    case 2:
        int size2 = 0;
        cout << "Enter the size of the second array:" << endl;
        cin >> size2;
        int** ArrIntSecond{ new int* [size2] {} };
    
        for (int i = 0; i < size2; i++)
        {
            ArrIntSecond[i] = new int [size2] {};
        }
    

	    for (int i = 0; i < 3; i++)
	    {
		    for (int j = 0; j < 3; j++)
		    {
		    	num1 = rand() % 60;
			    ArrIntSecond[i][j] = num1;
			    cout << setw(4) << ArrIntSecond[i][j] << endl;
	    	}
	    }	
	    break;
	
	default:
	
	cout << "Incorrect input, try again" << endl;
	
    }
    
    return 0;
}