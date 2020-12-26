/* main.cpp */
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<Windows.h>
#include <iostream>
#include <string>
#include "Header.h"
#include <vector>
#include <locale>
#define N 1
using namespace std;

//void color_background()
//{
//    system("color 27");
//}
bool login();
bool Password();
void Menu();

int main()
{
    setlocale(LC_ALL, "Russian");
    //color_background();

    system("cls");
    while (!login());
    while (!Password());
    int count = N;
    service serv;
    int number;
    do {
        Menu();
        cin >> number;
        check_int(number);
        switch (number)
        {
        case 1:
        {
            system ("cls");
            cout << "-------Добавление студента-------" << endl;
            serv.read();
            serv.create_student();
            serv.zapis();
            system("pause");
            break;
        }
        case 2:
        {
            system("cls");
            cout << "-------Печать студентов-------" << endl;
            serv.read();
            serv.show();
            system("pause"); 
            break;
        }
        case 3:
        {
            system("cls");
            cout << "-------Поиск студента-------" << endl;
            serv.read();
            serv.search_student();
            system("pause"); 
            break;
        }
        case 4:
        {
            system("cls");
            cout << "-------Изменение данных-------" << endl;
            serv.read();
            serv.change();
            serv.show();
            serv.zapis();
            system("pause");
            break;
        }
        case 5:
        {
            system("cls");
            cout << "-------Удаление студента-------" << endl;
            serv.read();
            serv.delete_student();
            serv.zapis();
            cout <<endl<< "Оставшиеся студенты:" << endl;
            serv.show();
            system("pause");
            break;
        }
        case 6:
        {
            system("cls");
            cout << "-------Вывод студентов по среднему баллу-------" << endl;
            serv.read();
            serv.vivod_po_srednemy();
            system("pause");
            break;
        }
        case 0:
            exit(0); break;
        }
    } while (number != 0);

}
bool login()
{
    string login="admin";
    string pop;
    cout << endl << "Логин:" << endl;
    cin >> pop;
    if (pop == login)
    {
        return true;
    }
    else
    {
        system("cls");
        return false;
    }
}
bool Password()
{
    char key;
    std::string password = "123";
    std::string PWD;
    cout << endl << "Пароль:" << endl;
    while ((key = _getch()) != 13)
    {
        PWD += key;
        cout << "*";
    }
    if (PWD != password)
    {
        cout <<endl<< "Ошибка!\nПовторите попытку!" << endl;
        return false;
    }
    else return true;
}

void Menu()
{
    system("cls");

        cout << "Здравствуйте, пожалуйста выбирайте поле в Меню" << endl;
        cout << "1. Добавление студента " << endl;
        cout << "2. Печать студентов" << endl;
        cout << "3. Печать указанного студента" << endl;
        cout << "4. Изменение данных студента" << endl;
        cout << "5. Удаление студента" << endl;
        cout << "6. Вывод студентов по среднему баллу" << endl;
        cout << "0. Выход из программы" << endl;
}
