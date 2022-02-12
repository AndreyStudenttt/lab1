#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int g;
    cout << "Введите год" << endl;
    cin >> g;
    if (g % 4 == 0)
    {
        cout << "Год высокосный" << endl;
    }
    else
    {
        cout << "Год не высокосный" << endl;
    }



}