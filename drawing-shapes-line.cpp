#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Welcome to the shape constructor!" << endl;
    cout << "[1] Program: shape" << endl;
    cout << "[2] Exit" << endl;

    int u_num1;
    cin >> u_num1;
    string pos;
    string sym;
    int length;

    switch (u_num1) 
    {
    case 1:
        system("cls");
        cout << "[] Program: shape" << endl;
        cout << "[1] Line" << endl;

        int u_num2;
        cin >> u_num2;
        
        switch (u_num2)
        {
        case 1:
            system("cls");
            cout << "Will the line be vertical or horizontal?" << endl;
            
            cin >> pos;
            cout << "How long the line would be?" << endl;
            cin >> length;
            cout << "What symbol would the line be made of?" << endl;
            cin >> sym;

            system("cls");

            for (int i = 0; i < length; i++) 
            {
                if (pos == "vertical") 
                {
                    cout << sym << endl;
                }

                else if (pos == "horizontal") 
                {
                    cout << sym;
                }

                else 
                {
                    cout << "You didn't write the position of the line correctly :[" << endl;
                }
            }

            break;

        default:
            system("cls");
            cout << "Being silly again? :]" << endl;
            break;
        }
        break;

    case 2:
        system("cls");
        cout << "Bye bye! :]" << endl;
        break;

    default:
        cout << "Don't be silly, write a correct number :]" << endl;
    }

    return 0;
}
