#include <iostream>
using namespace std;

int main() {

    cout << "Task 1-------------------------------------------------\n\n";
   //Пользователь вводит число. Определить количество цифр
   // в этом числе, посчитать их сумму и среднее арифметическое.
   //Определить количество нулей в этом числе.Общение с пользователем организовать через меню.
   
    int number;
    cout << "Enter number: ";
    cin >> number;

    int count = 0;
    int sum_digits = 0;
    int zero_count = 0;

    while (number != 0) {
        int digit = number % 10;//последняя цифра числа 
        sum_digits += digit;//сумма всех чисел
        count++;
        if (digit == 0) {
            zero_count++;//подсчет количества нулей
        }
        number = number / 10;//переход к следущей цифре
    }

    double average = (double)sum_digits / count;// высчитываем среднее арифметическое 

    cout << "Number of digits: " << count << endl;
    cout << "Sum: " << sum_digits << endl;
    cout << "Average: " << average << endl;
    cout << "Number of zeros: " << zero_count << endl;


    cout << "\n\nTask 2-------------------------------------------------\n\n";

    //Написать программу, которая выводит на экран шахматную
    //доску с заданным размером клеточки.


    const int fieldSize = 8;
    int size;

    cout << "Enter cell size: ";
    cin >> size;

    for (int i = 0; i < fieldSize * size; i++)
    {
        for (int j = 0; j < fieldSize * size; j++)
        {
            if ((i / size) % 2 == 0)//является ли строка четной
            {
                if ((j / size) % 2 == 0)//если столбец также является четным, то выводим символ *
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if ((j / size) % 2 == 0)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }

    cout << "\n\nTask 3-------------------------------------------------\n\n";
   //Реализовать программу расчета заказа в кафетерии при условии, что заказ может
   //быть на несколько человек и каждый клиент формирует свою часть заказа.Необходимо
   //спросить у пользователя на сколько человек заказ.Далее каждому человеку выводиться меню(названия напитков,
   //кондитерских изделий и их цена) и он выбирает.Предусмотреть возможность выбора нескольких элементов меню для
   // клиента, если он желает добавить еще что - то в свой заказ. Результат работы программы — итоговая сумма общего
   //заказа всей компании

    setlocale(LC_CTYPE, "ukr");

    int numPeople;
    cout << "Введите количество людей: ";
    cin >> numPeople;

    double finalAccount = 0.0;

    for (int i = 1; i <= numPeople; ++i) {

        cout << "Заказ " << i << " посетителя\n";

        double personBill = 0.0;
        char choice;

        do {
            cout << "Меню:\n";
            cout << "1. Кофе - 35 грн\n";
            cout << "2. Чай - 30 грн.\n";
            cout << "3. Пирожное - 50 грн\n";
            cout << "4. Торт - 80 грн\n";
            cout << "Выберите пункт меню (1-4): ";
            cin >> choice;

            int quantity = 1;

            switch (choice) {
            case '1':
            {
                do
                {
                    cout << "Какое количество?: ";
                    cin >> quantity;

                } while (quantity == 0);

                personBill += 35 * quantity;
                break;
            }
            case '2':
                do
                {
                    cout << "Какое количество?: ";
                    cin >> quantity;

                } while (quantity == 0);

                personBill += 30 * quantity;
                break;
            case '3':
                do
                {
                    cout << "Какое количество?: ";
                    cin >> quantity;

                } while (quantity == 0);

                personBill += 50 * quantity;
                break;
            case '4':
                do
                {
                    cout << "Какое количество?: ";
                    cin >> quantity;

                } while (quantity == 0);

                personBill += 80 * quantity;
                break;
            default:
                cout << "Некорректный выбор.\n";
                break;
            }

            cout << "Добавить еще что-то в заказ (y/n)? ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');

        finalAccount += personBill;
    }

    cout << "Общая сумма заказа для " << numPeople << " человек: " << finalAccount << " грн\n"; 


    cout << "\n\nTask 4-------------------------------------------------\n\n";
    //Есть пустое поле игры «Морской бой». Вывести в консоль номера полей игры :

    int fieldSizee = 10;
    cout << "\x1B[31m";
    cout << " | A |B  |C  |D  |E  |F  |G  |H  |I  |J  |\n";
    cout << "\x1B[0m";
    for (int i = 0; i < fieldSizee; ++i) {
        cout << "\x1B[31m------------------------------------------\x1B[0m\n";
        for (int j = 0; j < fieldSizee; ++j) {

            if (j==0)
            {
                cout << "\x1B[31m";
                cout << i << "| ";
               
            }
            cout << "\x1B[0m";
            char letter = 'A' + j;
            cout << letter << i << "\x1B[31m|\x1B[0m ";
        }
        cout << endl;
    }

    return 0;
}





