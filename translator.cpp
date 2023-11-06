#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Добро пожаловать в переводчик! Выберите язык: " << endl;
	cout << "[1] Русский язык" << endl << "[2] Английский язык" << endl << "[3] Выйти" << endl;

	int num1;
	cin >> num1;

	switch (num1)
	{
	case 1:

		system("cls");

		cout << "Список слов для перевода(на английский): " << endl;
		cout << "[1] Электронная цепь" << endl;
		cout << "[2] Прикладная физика" << endl;
		cout << "[3] Мгновенно" << endl;
		cout << "[4] Потребление энергии" << endl;
		cout << "[5] Научное иследование" << endl;
		cout << "[6] Отклик" << endl;
		cout << "[7] Пакетная обработка" << endl;
		cout << "[8] Интегральная система" << endl;
		cout << "[9] Собирать" << endl;
		cout << "[10] Вычислительное устройство" << endl;
		cout << "[11] Обработка данных" << endl;
		cout << "[12] Средства кодирования" << endl;
		cout << "[13] Выполнять" << endl;
		cout << "[14] Единица информации" << endl;
		cout << "[15] Терминал с клавишным управлением" << endl;

        cout << "Выберите слово для перевода: " << endl;
        
        int num2;
        cin >> num2;
        switch(num2)
        {
            system("cls");
            
            case 1:
                cout << "Electronic circuit" << endl;
            break;
        
            case 2:
                cout << "Applied physics" << endl;
            break;
            
            case 3:
                cout << "Instanteneously" << endl;
            break;
            
            case 4:
                cout << "Power consumption" << endl;
            break;
            
            case 5:
                cout << "Scientific research" << endl;
            break;
            
            case 6:
                cout << "Respond" << endl;
            break;
            
            case 7:
                cout << "Batch processing" << endl;
            break;
            
            case 8:
                cout << "Integrated system" << endl;
            break;
            
            case 9:
                cout << "Assemble" << endl;
            break;
            
            case 10:
                cout << "Calculating device" << endl;
            break;
            
            case 11:
                cout << "Data processing" << endl;
            break;
            
            case 12:
                cout << "Means of coding" << endl;
            break;
            
            case 13:
                cout << "To perform" << endl;
            break;
            
            case 14:
                cout << "Unit of data" << endl;
            break;
            
            case 15:
                cout << "Keyboard terminal" << endl;
            break;
        }


		break;
        
	case 2:

		system("cls");

		cout << "Список слов для перевода(на русский): " << endl;
		cout << "[1] Computer literacy" << endl;
		cout << "[2] Basics" << endl;
		cout << "[3] Application" << endl;
		cout << "[4] Dimension" << endl;
		cout << "[5] Direct the operation" << endl;
		cout << "[6] To process" << endl;
		cout << "[7] To store information" << endl;
		cout << "[8] To input" << endl;
		cout << "[9] Addition" << endl;
		cout << "[10] Substraction" << endl;
		cout << "[11] Mulptiplication" << endl;
		cout << "[12] Exponentiation" << endl;
		cout << "[13] User" << endl;
		cout << "[14] Tape drive" << endl;
		cout << "[15] Disk drive" << endl;
		
		cout << "Выберите слово которое хотите перевести: " << endl;
		
		int num3;
		cin >> num3;
		switch(num3)
		{
		    case 1:
                cout << "Компьютерная грамотность" << endl;
            break;
            
            case 2:
                cout << "Основы" << endl;
            break;
            
            case 3:
                cout << "Приложение" << endl;
            break;
            
            case 4:
                cout << "Измерение" << endl;
            break;
            
            case 5:
                cout << "Направлять операцию" << endl;
            break;
            
            case 6:
                cout << "Обрабатывать (информацию)" << endl;
            break;
            
            case 7:
                cout << "Хранить информацию" << endl;
            break;
            
            case 8:
                cout << "Вводить" << endl;
            break;
            
            case 9:
                cout << "Сложение" << endl;
            break;
            
            case 10:
                cout << "Вычитание" << endl;
            break;
            
            case 11:
                cout << "Умножение" << endl;
            break;
            
            case 12:
                cout << "Возведение в степень" << endl;
            break;
            
            case 13:
                cout << "Пользователь" << endl;
            break;
            
            case 14:
                cout << "Запоминающее устройство на магнитной ленте" << endl;
            break;
            
            case 15:
                cout << "Запоминающее устройство/Диск" << endl;
            break;
		}
		
		break;
    
    case 3:

        system("cls");   
    
        cout << "Нажмите на крестик :]" << endl;
        
		break;
	
	default:
	
	    system("cls");
	
	    cout << "Напишите цифру! Чего вы хотите добиться другими символами? :]" << endl;
	break;
	
	}
    
return 0;
}