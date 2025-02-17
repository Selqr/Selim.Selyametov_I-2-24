// ABCn1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "RUS");
    cout << "Введите число в двоичной системе счисления: ";
    char binaryNum[100];
    cin >> binaryNum;
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if (binaryNum[i] != '\0') count++;
        else break;
    }
    if (binaryNum[count - 1] == '0') cout << "число четное";
    else cout << "число нечетное";
}

