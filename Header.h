#pragma once
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <cstdio>
using namespace std;

int check_int(int a)
{
    while (true)
    {

        int a=0;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Повторите попытку: ";
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return a;
        }
    }
}

string check_string(string s)
{
    int i = 0;
    string str;
    while (s[i])
    {
        if ((s[i] >= 97) && (s[i] <= 122))
            str = str + s[i];
        else
        {
            cout << "Повторите попытку : ";
            cin >> s;
            return check_string(s);
        }
        i++;
    }
    return str;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class human {
protected:
    string name, surname, last_name;
    int age;
public:
    human()
    {
        name = ' ';
        surname = ' ';
        last_name = ' ';
        age = 0;
    }
    ~human(){};
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class specialnost
{
private:
    string name_spec;
    string predmet1, predmet2, predmet3,predmet4, predmet5;
    double ocenka1, ocenka2, ocenka3, ocenka4, ocenka5, ocenka_kyrsach;
    double sredniy_ball;
public:
    specialnost()
    {
        name_spec = ' ';
        predmet1 = ' ';
        predmet2 = ' ';
        predmet3 = ' ';
        predmet5 = ' ';
        predmet4 = ' ';
        ocenka1 = 0;
        ocenka2 = 0;
        ocenka3 = 0;
        ocenka4 = 0;
        ocenka5 = 0;
        ocenka_kyrsach = 0;
        sredniy_ball = 0.0;

    }
    void set_name_spec(string name1)
    {
        name_spec = name1;
    }
    string get_name_spec()
    {
        return name_spec;
    }
    void set_predmet1(string predmet11)
    {
        predmet1 = predmet11;
    }
    string get_predmet1()
    {
        return predmet1;
    }
    void set_predmet2(string predmet22)
    {
        predmet2 = predmet22;
    }
    string get_predmet2()
    {
        return predmet2;
    }
    void set_predmet3(string predmet33)
    {
        predmet3 = predmet33;
    }
    string get_predmet3()
    {
        return predmet3;
    }
    void set_predmet4(string predmet33)
    {
        predmet4 = predmet33;
    }
    string get_predmet4()
    {
        return predmet4;
    }
    void set_predmet5(string predmet33)
    {
        predmet5 = predmet33;
    }
    string get_predmet5()
    {
        return predmet5;
    }
    void set_ocenka1(int ocenka11)
    {
        ocenka1 = ocenka11;
    }
    double get_ocenka1()
    {
        return ocenka1;
    }
    void set_ocenka2(int ocenka22)
    {
        ocenka2 = ocenka22;
    }
    double get_ocenka2()
    {
        return ocenka2;
    }
    void set_ocenka3(int ocenka33)
    {
        ocenka3 = ocenka33;
    }
    double get_ocenka3()
    {
        return ocenka3;
    }
    void set_ocenka4(int ocenka33)
    {
        ocenka4 = ocenka33;
    }
    double get_ocenka4()
    {
        return ocenka4;
    }
    void set_ocenka5(int ocenka33)
    {
        ocenka5 = ocenka33;
    }
    double get_ocenka5()
    {
        return ocenka5;
    }
    void set_ocenka_kyrsach(int ocenka33)
    {
        ocenka_kyrsach = ocenka33;
    }
    int get_ocenka_kyrsach()
    {
        return ocenka_kyrsach;
    }
    void set_sredniy()
    {
        sredniy_ball = (ocenka1 + ocenka2 + ocenka3 + ocenka4 + ocenka5 + ocenka_kyrsach) / 6;
    }
    void set_sredniy_ball(double sred)
    {
        sredniy_ball = sred;
    }
    double sredniy()
    {
        return sredniy_ball;
    }

};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Students :public human, public specialnost {
public:
    Students()
    {
        surname = ' ';
        name = ' ';
        last_name = ' ';
        age = 0;
        shifr_gruppi = 0;
        shifr_studenta = 0;
    }
    //Students(string surname1, string name1, string last_name1, int age1, int shifr_gruppi1, int shifr_studenta1, string name_spec1, string predmet1)
    //{
    //    surname = surname1;
    //    name = name1;
    //    last_name = last_name1;
    //    age = age1;
    //    shifr_gruppi = shifr_gruppi1;
    //    shifr_studenta = shifr_studenta1;
    //}
    void set_surname(std::string student_surname)
    {
        surname = student_surname;
    }
    std::string get_surname()
    {
        return surname;
    }
    void set_name(std::string student_name)
    {
        name = student_name;
    }
    std::string get_name()
    {
        return name;
    }
    void set_last_name(std::string student_last_name)
    {
        last_name = student_last_name;
    }
    std::string get_last_name()
    {
        return last_name;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    int get_age()
    {
        return age;
    }
    void set_shifr_gruppi(int shifr_gruppi1)
    {
        shifr_gruppi = shifr_gruppi1;
    }
    int get_shifr_gruppi()
    {
        return shifr_gruppi;
    }
    void set_shifr_studenta(int shifr_studenta1)
    {
        shifr_studenta = shifr_studenta1;
    }
    int get_shifr_studenta()
    {
        return shifr_studenta;
    }
    void set_spec()
    {
        string name_spec;
        string predmet1, predmet2, predmet3, predmet4, predmet5;
        int ocenka1 = 0, ocenka2 = 0, ocenka3 = 0, ocenka4=0, ocenka5=0, ocenka_kyrsach=0;
        double sredniy_ball;

        cout << endl << "Специальность:" << endl;
        cin >> name_spec;
        check_string(name_spec);
        cout << endl << "1-ый предмет:" << endl;
        cin >> predmet1;
        check_string(predmet1);
        for (;;) {
            cout << endl << "Оценка:" << endl;
            cin >> ocenka1;
            check_int(ocenka1);
            if (0 > ocenka1 || ocenka1 > 10)
            {
                cout << "Вы ввели неправильную оценку!!!" << endl;
                continue;
            }
            else
                break;
        }
        cout << endl << "2-ой предмет:" << endl;
        cin >> predmet2;
        check_string(predmet2);
        for (;;) {
            cout << endl << "Оценка:" << endl;
            cin >> ocenka2;
            check_int(ocenka2);
            if (0 > ocenka2 || ocenka2 > 10)
            {
                cout << "Вы ввели неправильную оценку!!!" << endl;
                continue;
            }
            else
                break;
        }
        cout << endl << "3-ий предмет:" << endl;
        cin >> predmet3;
        check_string(predmet3);
        for (;;) {
            cout << endl << "Оценка:" << endl;
            cin >> ocenka3;
            check_int(ocenka3);
            if (0 > ocenka3 || ocenka3 > 10)
            {
                cout << "Вы ввели неправильную оценку!!!" << endl;
                continue;
            }
            else
                break;
        }
        cout << endl << "4-ый предмет:" << endl;
        cin >> predmet4;
        check_string(predmet4);
        for (;;) {
            cout << endl << "Оценка:" << endl;
            cin >> ocenka4;
            check_int(ocenka4);
            if (0 > ocenka4 || ocenka4 > 10)
            {
                cout << "Вы ввели неправильную оценку!!!" << endl;
                continue;
            }
            else
                break;
        }
        cout << endl << "5-ый предмет:" << endl;
        cin >> predmet5;
        check_string(predmet5);
        for (;;) {
            cout << endl << "Оценка:" << endl;
            cin >> ocenka5;
            check_int(ocenka5);
            if (0 > ocenka5 || ocenka5 > 10)
            {
                cout << "Вы ввели неправильную оценку!!!" << endl;
                continue;
            }
            else
                break;
        }
        for (;;) {
            cout << endl << "Оценка по курсовому проекту:" << endl;
            cin >> ocenka_kyrsach;
            check_int(ocenka_kyrsach);
            if (0 > ocenka_kyrsach || ocenka_kyrsach > 10)
            {
                cout << "Вы ввели неправильную оценку!!!" << endl;
                continue;
            }
            else
                break;
        }
        set_name_spec(name_spec);
        set_predmet1(predmet1);
        set_predmet2(predmet2);
        set_predmet3(predmet3);
        set_predmet4(predmet4);
        set_predmet5(predmet5);
        set_ocenka1(ocenka1);
        set_ocenka2(ocenka2);
        set_ocenka3(ocenka3);
        set_ocenka4(ocenka4);
        set_ocenka5(ocenka5);
        set_ocenka_kyrsach(ocenka_kyrsach);
        set_sredniy();
    }
    friend ostream& operator<<(ostream& os, Students& stud);

private:
    int shifr_gruppi, shifr_studenta;
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ostream& operator<<(ostream& os, Students& d) {
    return os <<"=========================================\n"<< "Фамилия:\n" << d.get_surname() <<endl<< "Имя:\n" << d.get_name()
        << endl << "Отчество:\n" << d.get_last_name() << endl << "Возраст:\n" << d.get_age()<<endl<<"-----------------------------------------------------------------------------------"
        << endl << "Шифр группы:\n" << d.get_shifr_gruppi() << endl << "Шифр студента:\n" << d.get_shifr_studenta() <<endl<< "-----------------------------------------------------------------------------------" << endl
        <<"Специальность:\n" << d.get_name_spec() << endl << "1-ый предмет:\n" << d.get_predmet1() << endl
        << "Оценка:\n" << d.get_ocenka1() << endl << "2-ый предмет:\n" << d.get_predmet2() << endl
        << "Оценка:\n" << d.get_ocenka2() << endl << "3-ый предмет:\n" << d.get_predmet3() << endl
        << "Оценка:\n" << d.get_ocenka3() << endl << "4-ый предмет:\n" << d.get_predmet4() << endl
        << "Оценка:\n" << d.get_ocenka4() << endl << "5-ый предмет:\n" << d.get_predmet5() << endl
        << "Оценка:\n" << d.get_ocenka5() << endl << "Оценка по курсовому проекту:\n" << d.get_ocenka_kyrsach() << endl << "Средний балл:"<<d.sredniy()<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class service :public Students
{
private:
    vector <Students> vect;

public:
    void add_student(Students a)
    {
        this->vect.push_back(a);
    }
    void create_student()
    {
        Students student;
        string name, surname, last_name;
        int age;
        int shifr_gruppi, shifr_studenta;
        cout << endl << "Фамилия:" << endl;
        cin >> surname;
        check_string(surname);
        cout << endl << "Имя:" << endl;
        cin >> name;
        check_string(name);
        cout << endl << "Отчество:" << endl;
        cin >> last_name;
        check_string(last_name);
        cout << endl << "Возраст:" << endl;
        cin >> age;
        check_int(age);
        cout << endl << "Шифр группы:" << endl;
        cin >> shifr_gruppi;
        check_int(shifr_gruppi);
        cout << endl << "Шифр студента:" << endl;
        cin >> shifr_studenta;
        check_int(shifr_studenta);


        student.set_surname(surname);
        student.set_name(name);
        student.set_last_name(last_name);
        student.set_age(age);
        student.set_shifr_gruppi(shifr_gruppi);
        student.set_shifr_studenta(shifr_studenta);
        student.set_spec();

        this->vect.push_back(student);
    }
    void show()
    {
        for (int i = 0; i < vect.size(); i++)
        {
            cout << vect[i];
        }
    }
    void search_student()
    {
        string name, surname, last_name;
        cout << endl << "Фамилия:" << endl;
        cin >> surname;
        check_string(surname);
        cout << endl << "Имя:" << endl;
        cin >> name;
        check_string(name);
        cout << endl << "Отчество:" << endl;
        cin >> last_name;
        check_string(last_name);
        for (int i = 0; i < vect.size(); i++)
        {
            if ((surname == vect[i].get_surname()) && (name == vect[i].get_name()) && (last_name == vect[i].get_last_name()))
            {
                cout << vect[i];
            }
        }
    }
    void delete_student()
    {
        int shifr;
        int shifr_studenta;
        cout << endl << "Введите шифр студента:" << endl;
        cin >> shifr_studenta;
        check_int(shifr_studenta);
        for (int i = 0; i < vect.size(); i++)
        {
            if (shifr_studenta == vect[i].get_shifr_studenta())
            {
                shifr = i;
                vect.erase(vect.begin() + shifr);
                break;
            }
        }
    }
    void change()
    {
        int n;
        int shifr_studenta, shifr_gruppi, age;
        string name, surname, last_name;

        cout << endl << "Введите шифр студента:" << endl;
        cin >> shifr_studenta;
        check_int(shifr_studenta);
        for (int i = 0; i < vect.size(); i++)
        {
            if (shifr_studenta == vect[i].get_shifr_studenta())
            {
                cout << "Что вы хотите изменить?\n" << "1. Фамилия\n" << "2. Имя\n" << "3. Отчество\n" << "4. Возраст\n" << "5. Шифр группы" << endl;

                do
                {
                    cin >> n;
                    check_int(n);
                    switch (n)
                    {
                    case 1:
                    {
                        cout << "Введите новую фамилию:" << endl;
                        cin >> surname;
                        check_string(surname);
                        vect[i].set_surname(surname);
                        break;
                    }
                    case 2:
                    {
                        cout << "Введите новое имя:" << endl;
                        cin >> name;
                        check_string(name);
                        vect[i].set_name(name);
                        break;
                    }
                    case 3:
                    {
                        cout << "Введите новое отчество:" << endl;
                        cin >> last_name;
                        check_string(last_name);
                        vect[i].set_last_name(last_name);
                        break;
                    }
                    case 4:
                    {
                        cout << "Введите новый возраст:" << endl;
                        cin >> age;
                        check_int(age);
                        vect[i].set_age(age);
                        break;
                    }
                    case 5:
                    {
                        cout << "Введите новый шифр группы:" << endl;
                        cin >> shifr_gruppi;
                        check_int(shifr_gruppi);
                        vect[i].set_shifr_gruppi(shifr_gruppi);
                        break;
                    }
                    }
                } while (n == 0);
            }
        }
    }
    void zapis()
    {
        ofstream fout("Текст.txt");
        for (int i=0;i<vect.size();i++) 
        {
            fout <<this->vect[i].get_surname()<<" " << this->vect[i].get_name()<<" " << this->vect[i].get_last_name() << " " << this->vect[i].get_age()
                << " " << this->vect[i].get_shifr_gruppi() << " " << this->vect[i].get_shifr_studenta() << " " << this->vect[i].get_name_spec()
                << " " << this->vect[i].get_predmet1() << " " << this->vect[i].get_ocenka1() << " " << this->vect[i].get_predmet2()
                << " " << this->vect[i].get_ocenka2() << " " << this->vect[i].get_predmet3() << " " << this->vect[i].get_ocenka3()
                << " " << this->vect[i].get_predmet4() << " " << this->vect[i].get_ocenka4() << " " << this->vect[i].get_predmet5()
                << " " << this->vect[i].get_ocenka5()<< " " <<this->vect[i].get_ocenka_kyrsach()<< " ";
            if (i == (vect.size() - 1)) fout << this->vect[i].sredniy() << " /";
            else fout << this->vect[i].sredniy() << " ";
        }

        fout.close();
    }
    void vivod_po_srednemy()
    {
        int n;
  
            cout << "Вывести студентов с средним баллом:\n1. 0-5\n2. 5-6\n3. 6-8\n4. 8-9\n5. 9-10" << endl;
            do
            {
                cin >> n;
                check_int(n);
                switch (n)
                {
                case 1:
                {
                    cout << "Студенты со средним баллом ниже 5:";
                    for (int i = 0; i < vect.size(); i++)
                    {
                        if (this->vect[i].sredniy() < 5.0)
                        {
                            cout << endl << "Фамилия: " << this->vect[i].get_surname() << endl << "Имя: " << this->vect[i].get_name() << endl << "Отчество: " << this->vect[i].get_last_name() << endl << "Средний балл: " << this->vect[i].sredniy() << "\n====================" << endl;
                        }
                    }
                    cout << "Бюджетная форма фобучения: нет стипендии" << endl << "Платная форма обучения:  нет скидки на обучение"<<endl;
                    break;
                }
                case 2:
                {
                    cout << "Студенты со средним баллом от 5 до 6:";
                    for (int i = 0; i < vect.size(); i++)
                    {
                        if ((5 <= vect[i].sredniy()) && (vect[i].sredniy()<6.0))
                        {
                            cout << endl << "Фамилия: " << this->vect[i].get_surname() << endl << "Имя: " << this->vect[i].get_name() << endl << "Отчество: " << this->vect[i].get_last_name() << "\n====================" << endl;
                        }
                    }
                    cout << "Бюджетная форма фобучения: стипендия 79 руб. 77 коп." << endl << "Платная форма обучения:  10% скидка на обучение"<<endl;
                    break;
                }
                case 3:
                {
                    cout << "Студенты со средним баллом от 6 до 8:";
                   for (int i = 0; i < vect.size(); i++)
                   {
                       if ((6.0 <= vect[i].sredniy())&& (vect[i].sredniy()<8.0))
                       {
                           cout << endl << "Фамилия: " << this->vect[i].get_surname() << endl << "Имя: " << this->vect[i].get_name() << endl << "Отчество: " << this->vect[i].get_last_name() << "\n====================" << endl;
                       }
                   }
                   cout << "Бюджетная форма фобучения: стипендия 95 руб. 72 коп." << endl << "Платная форма обучения:  20% скидка на обучение"<<endl;
                   break;
                }
                case 4:
                {
                    cout << "Студенты со средним баллом от 8 до 9:";
                    for (int i = 0; i < vect.size(); i++)
                    {
                        if ((9.0 > vect[i].sredniy())&&(8.0 <= vect[i].sredniy()))
                        {
                            cout << endl << "Фамилия: " << this->vect[i].get_surname() << endl << "Имя: " << this->vect[i].get_name() << endl << "Отчество: " << this->vect[i].get_last_name() << "\n====================" << endl;
                        }
                    }
                    cout << "Бюджетная форма фобучения: стипендия 111 руб. 68 коп." << endl << "Платная форма обучения:  35% скидка на обучение"<<endl;
                    break;
                }
                case 5:
                {
                    cout << "Студенты со средним баллом от 9 до 10:";
                    for (int i = 0; i < vect.size(); i++)
                    {
                        if ((10.0 >= vect[i].sredniy()) && (9.0 <= vect[i].sredniy()))
                        {
                            cout << endl << "Фамилия: " << this->vect[i].get_surname() << endl << "Имя: " << this->vect[i].get_name() << endl << "Отчество: " << this->vect[i].get_last_name() << "\n====================" << endl;
                        }
                    }
                    cout << "Бюджетная форма фобучения: стипендия  127 руб. 63 коп." << endl << "Платная форма обучения:  50% скидка на обучение"<<endl;
                    break;
                }
                }
            } while (n == 0);
    }

    void read() {

        vect.clear();

        ifstream ins("Текст.txt");
        service serv;
        string name, surname, last_name;
        int age;
        int shifr_gruppi, shifr_studenta;
        string age1;
        string shifr_gruppi1, shifr_studenta1;
        string name_spec;
        string predmet1, predmet2, predmet3, predmet4, predmet5;
        int ocenka1 = 0, ocenka2 = 0, ocenka3 = 0, ocenka4 = 0, ocenka5 = 0, ocenka_kyrsach = 0;
        string ocenka11, ocenka21, ocenka31, ocenka41, ocenka51, ocenka_kyrsach1;
        double sredniy_ball;
        string sredniy_ball1;
        int i = 0;
        int n = 0;
        int j = -1;
        char q;

        while (1) {
            ins.get(q);
            if (q == '/') break;
            else
                ins.seekg(j, ins.cur);

            getline(ins, surname, ' ');
            serv.set_surname(surname);

            getline(ins, name, ' ');
            serv.set_name(name);

            getline(ins, last_name, ' ');
            serv.set_last_name(last_name);

            getline(ins, age1, ' ');
            age = stoi(age1);
            serv.set_age(age);

            getline(ins, shifr_gruppi1, ' ');
            shifr_gruppi = stoi(shifr_gruppi1);
            serv.set_shifr_gruppi(shifr_gruppi);

            getline(ins, shifr_studenta1, ' ');
            shifr_studenta = stoi(shifr_studenta1);
            serv.set_shifr_studenta(shifr_studenta);

            getline(ins, name_spec, ' ');
            serv.set_name_spec(name_spec);

            getline(ins, predmet1, ' ');
            serv.set_predmet1(predmet1);

            getline(ins, ocenka11, ' ');
            ocenka1 = stoi(ocenka11);
            serv.set_ocenka1(ocenka1);

            getline(ins, predmet2, ' ');
            serv.set_predmet2(predmet2);

            getline(ins, ocenka21, ' ');
            ocenka2 = stoi(ocenka21);
            serv.set_ocenka2(ocenka2);

            getline(ins, predmet3, ' ');
            serv.set_predmet3(predmet3);

            getline(ins, ocenka31, ' ');
            ocenka3 = stoi(ocenka31);
            serv.set_ocenka3(ocenka3);

            getline(ins, predmet4, ' ');
            serv.set_predmet4(predmet4);

            getline(ins, ocenka41, ' ');
            ocenka4 = stoi(ocenka41);
            serv.set_ocenka4(ocenka4);

            getline(ins, predmet5, ' ');
            serv.set_predmet5(predmet5);

            getline(ins, ocenka51, ' ');
            ocenka5 = stoi(ocenka51);
            serv.set_ocenka5(ocenka5);

            getline(ins, ocenka_kyrsach1, ' ');
            ocenka_kyrsach = stoi(ocenka_kyrsach1);
            serv.set_ocenka_kyrsach(ocenka_kyrsach);

            getline(ins, sredniy_ball1, ' ');
            sredniy_ball = atof(sredniy_ball1.c_str());
            serv.set_sredniy_ball(sredniy_ball);
            vect.push_back(serv);

        }
        ins.close();

    }
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////