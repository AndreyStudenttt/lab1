#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int g;
    cout << "Введите год для проверки высокосности" << endl;
    cin >> g;
    if (g % 4 == 0)
    {
        if (g % 100 == 0)
        {
            cout << "Год не высокосный." << endl;
        }
        else
        {
            if (g % 400 == 0)
            {
                cout << "Год высокосный." << endl;
            }
            else
            {
                cout << "Год не высокосный." << endl;
            }
        }
    }
    else
    {
        cout << "Год не высокосный." << endl;
    }



}

