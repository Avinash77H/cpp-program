#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "enter account number:";
    cin >> input;
    if (input == 101)
    {
        
        string name = "avinash";

        int balance = 5000;
        int choise;
        int withdrowl;
        int diposit;

        cout << "employee name :" << name << '\t' << "balance :" << balance << endl;
        cout << "1.withdraw" << endl;
        cout << "2.diposit" << endl;
        cout << "3.check balance" << endl;
        cout << "4.exit" << endl;

        do
        {
            cout << "enter your choise:";
            cin >> choise;
            switch (choise)
            {
            case 1:

                cout << "enter withdrowl amount:";
                cin >> withdrowl;
                balance = balance - withdrowl;
                break;
            case 2:
                cout << "enter diposit amount:";
               cin >> diposit;
                balance = balance + diposit;
                break;
            case 3:
                cout << "your balance is:" << balance << endl;
                break;
            case 4:
                cout << "thank you for bank visit";
                exit(0);
            }
        }while(choise>0 && choise<=3);
    }

    else if (input == 102)
    {
         string name = "milan";

        int balance = 10000;
        int choise;
        int withdrowl;
        int diposit;

        cout << "employee name :" << name << '\t' << "balance :" << balance << endl;
        cout << "1.withdraw" << endl;
        cout << "2.diposit" << endl;
        cout << "3.check balance" << endl;
        cout << "4.exit" << endl;

        do
        {
            cout << "enter your choise:";
            cin >> choise;
            switch (choise)
            {
            case 1:

                cout << "enter withdrowl amount:";
                cin >> withdrowl;
                balance = balance - withdrowl;
                break;
            case 2:
                cout << "enter diposit amount:";
                cin >> diposit;
                balance = balance + diposit;
                break;
            case 3:
                cout << "your balance is:" << balance << endl;
                break;
            case 4:
                cout << "thank you for bank visit";
                exit(0);
            }
        }while(choise>0 && choise<=3);
    }
    else if (input == 103)
    {
         string name = "ugam";

        int balance = 7999;
        int choise;
        int withdrowl;
        int diposit;

        cout << "employee name :" << name << '\t' << "balance :" << balance << endl;
        cout << "1.withdraw" << endl;
        cout << "2.diposit" << endl;
        cout << "3.check balance" << endl;
        cout << "4.exit" << endl;

       do
        {
            cout << "enter your choise:";
            cin >> choise;
            switch (choise)
            {
            case 1:

                cout << "enter withdrowl amount:";
                cin >> withdrowl;
                balance = balance - withdrowl;
                break;
            case 2:
                cout << "enter diposit amount:";
                cin >> diposit;
                balance = balance + diposit;
                break;
            case 3:
                cout << "your balance is:" << balance << endl;
                break;
            case 4:
                cout << "thank you for bank visit";
                exit(0);
            }
        }while(choise>0 && choise<=3);
    }
    else if (input == 104)
    {
         string name = "hardik";

        int balance = 17000;
        int choise;
        int withdrowl;
        int diposit;

        cout << "employee name :" << name << '\t' << "balance :" << balance << endl;
        cout << "1.withdraw" << endl;
        cout << "2.diposit" << endl;
        cout << "3.check balance" << endl;
        cout << "4.exit" << endl;

       do
        {
            cout << "enter your choise:";
            cin >> choise;
            switch (choise)
            {
            case 1:

                cout << "enter withdrowl amount:";
                cin >> withdrowl;
                balance = balance - withdrowl;
                break;
            case 2:
                cout << "enter diposit amount:";
               cin >> diposit;
                balance = balance + diposit;
                break;
            case 3:
                cout << "your balance is:" << balance << endl;
                break;
            case 4:
                cout << "thank you for bank visit";
                exit(0);
            }
        }while(choise>0 && choise<=3);
    }
    else if (input == 105)
    {
         string name = "parth";

        int balance = 2000;
        int choise;
        int withdrowl;
        int diposit;

        cout << "employee name :" << name << '\t' << "balance :" << balance << endl;
        cout << "1.withdraw" << endl;
        cout << "2.diposit" << endl;
        cout << "3.check balance" << endl;
        cout << "4.exit" << endl;

        do
        {
            cout << "enter your choise:";
            cin >> choise;
            switch (choise)
            {
            case 1:

                cout << "enter withdrowl amount:";
                std::cin >> withdrowl;
                balance = balance - withdrowl;
                break;
            case 2:
                cout << "enter diposit amount:";
                std::cin >> diposit;
                balance = balance + diposit;
                break;
            case 3:
                cout << "your balance is:" << balance << endl;
                break;
            case 4:
                cout << "thank you for bank visit";
                exit(0);
            }
        }while(choise>0 && choise<=3);
    }

    return 0;
}
