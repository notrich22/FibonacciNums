#include <iostream>
using namespace std;
void fibonacci1(int n);
void fibonacci2(int n);
int main()
{
    setlocale(LC_ALL, "RU");
    int ch, n;
    cout << "1. Вывести ряд Фибоначчи" << endl;
    cout << "2. Вывести ближайшее к вашему число Фибоначчи" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Сколько чисел вы хотите вывести?: ";
        cin >> n;
        fibonacci1(n);
        break;
    case 2:
        cout << "Введите Ваше число: ";
        cin >> n;
        fibonacci2(n);
        break;
    default:
        system("CLS");
        main();
    }
}
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void fibonacci1(int n){
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << "\t";
    }
}
void fibonacci2(int n) {
    for (int i = 0; i < 2000; ++i) {
        if (fibonacci(i) >= n) {
            break;
        }
        cout << fibonacci(i) << "\t";
    }
}
