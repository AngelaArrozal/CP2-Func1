

#include <iostream>

using namespace std;

int mainMenu();
int Multiplication();
int Division();
int Addition();
int Subtraction(); 


int main()
{
    int val1, val2, choice;
    char continueChoice = 'y';

    do
    {
        do
        {
            cout
                << " Select a Math solution to use\n"
                << "1. Multipication\n"
                << "2. Division\n"
                << "3. Addition\n"
                << "4. Subtraction\n"
                << "Enter Choice: ";
            cin >> choice;

            system("cls");

            switch (choice)
            {
            case 1:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
                break;
            case 2:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
                break;
            case 3:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
                break;
            case 4:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
                break;
            default:
                cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        cout << "Do you want to Contninue [y/n]:";
        cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'y');
}

int mainMenu()
{
    int choice;
  
            cout
                << " Select a Math solution to use\n"
                << "1. Multipication\n"
                << "2. Division\n"
                << "3. Addition\n"
                << "4.Subtraction\n"
                << "Enter Choice: ";
            cin >> choice;

            system("cls");

            return choice;

}

int Multiplication()
{
    int val1, val2;
            case 1:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;

                system("cls");
                cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";

            return 0; 

}

int Division()
{
    int val1, val2;
            case 2:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;

                system("cls");
                cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";

    return 0;
}

int Addition()
{
    int val1, val2;
            case 3:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;

                system("cls");
                cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";

                return 0;
    return 0;
}

int Subtraction()
{
    int val1, val2;
            case 4:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;

                system("cls");
                cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";

                return 0;
    return 0;
}
