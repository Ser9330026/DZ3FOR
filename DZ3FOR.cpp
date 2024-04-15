#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    /*Задание 1. Напишите программу, которая вычисляет сумму
    целых чисел от а до 500 (значение a вводится с клавиатуры).*/
    std::cout << "Задание 1:" << std::endl;
    int a = 0;
    int sum = 0;
    std::cout << "Введите значение числа а: ";
    std::cin >> a;
    for (int i = a; i <= 500; i++)
    {
        sum += i;
    }
    std::cout << "Сумма чисел от " << a << " до 500 равна: " << sum << std::endl;

    /*Задание 2. Напишите программу, которая запрашивает два
    целых числа x и y, после чего вычисляет и выводит значение x в степени y.*/
    std::cout << "Задание 2:" << std::endl;
    int x = 1, y = 1;
    std::cout << "Введите два числа: ";
    std::cin >> x >> y;
    int num = 1;
    for (int i = 1; i <= y; i++)
    {
        num *= x;
    }
    std::cout << "Степень " << y << " числа " << x << " равна " << num << std::endl;

    /*Задание 3. Найти среднее арифметическое всех целых чисел от 1 до 1000.*/
    std::cout << "Задание 3:" << std::endl;
    int sum1 = 0;
    for (int i = 1; i <= 1000; i++)
    {
        sum1 += i;
    }
    std::cout << "среднее арифметическое суммы чисел от 1 до 1000: " << sum1 << " равно: " << static_cast<double>(sum1) / 1000 << std::endl;

    /*Задание 4. Найти произведение всех целых чисел от a
    до 20 (значение a вводится с клавиатуры: 1 <=a <= 20).*/
    std::cout << "Задание 4:" << std::endl;
    int a1 = 0;
    do {
        std::cout << "Введите число от 1 до 20: ";
        std::cin >> a1;
        long long int mult = 1;

        if (a1 >= 1 && a1 <= 20)
        {
            for (int i = a1; i <= 20; i++)
            {
                mult *= i;
            }
            std::cout << "Произведение чисел от " << a1 << " до 20 равно: " << mult << std::endl;
        }
        else
        {
            std::cout << "Введенной число не вошло в указанный диапазон!!!" << std::endl;
        }
    } while (a1 < 1 || a1 > 20);

    /*Задание 5. Написать программу, которая выводит на экран таблицу
    умножения на k, где k – номер варианта. Например, для 7-го варианта:
 7 x 2 = 14
 7 x 3 = 21  */
    std::cout << "Задание 5:" << std::endl;
    int k;
    std::cout << "Введите номер варианта: ";
    std::cin >> k;
    for (int i = 1; i <= 10; i++)
    {
        std::cout << k << " * " << i << " = " << k * i << std::endl;
    }

    /*Задание 6. Вывести на экран все числа от нуля до введенного
    пользователем числа.*/
    std::cout << "Задание 6:" << std::endl;
    int num2;
    std::cout << "Введите число: ";
    std::cin >> num2;
    std::cout << "Все числа от нуля до num2: ";
    for (int i = 0; i <= num2; i++)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;



    /*Задание 7. Пользователь вводит две границы диапазона,
    вывести на экран все числа из этого диапазона. Предусмотреть,
    чтобы пользователь мог вводить границы диапазона в произвольном порядке.
    вывести все четные числа из диапазона.
    вывести все нечетные числа из диапазона.
    вывести все числа, кратные семи. */
    std::cout << "Задание 7:" << std::endl;
    int valMin = 0, valMax = 0;
    bool flag = false;
lbl:
    std::cout << "Введите границы диапазона: ";
    std::cin >> valMin >> valMax;

    if (valMin > valMax)
    {
        int temp = valMin;
        valMin = valMax;
        valMax = temp;
    }
    if (valMin == valMax)
    {
        std::cout << "Оба значения диапазона равны, введите значения заново!!!" << std::endl;
        goto lbl;
    }

    std::cout << "Числа диапазона: ";
    for (int i = valMin; i <= valMax; i++)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    std::cout << "Ввыводим все четные числа диапазона: ";
    for (int i = valMin; i <= valMax; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << ' ';
        }
    }
    std::cout << std::endl;

    std::cout << "Ввыводим все нечетные числа диапазона: ";
    for (int i = valMin; i <= valMax; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << i << ' ';
        }
    }
    std::cout << std::endl;

    std::cout << "Ввыводим все числа диапазона кратные 7: ";
    for (int i = valMin; i <= valMax; i++)
    {
        if (i % 7 == 0)
        {
            std::cout << i << ' ';
            flag = true;
        }
    }
    std::cout << std::endl;

    if (!flag)
    {
        std::cout << "В диапазоне чисел кратных 7 нет!!!" << std::endl;
    }

    /*Задание 8. Пользователь вводит две границы диапазона.
    Посчитать сумму всех чисел диапазона.*/
    std::cout << "Задание 8:" << std::endl;
    int value1 = 0, value2 = 0;
lbl222:
    std::cout << "Введите границы диапазона: ";
    std::cin >> value1 >> value2;

    if (value1 > value2)
    {
        int temp = value1;
        value1 = value2;
        value2 = temp;
    }
    if (value1 == value2)
    {
        std::cout << "Оба значения диапазона равны, введите значения заново!!!" << std::endl;
        goto lbl222;
    }
    int sum3 = 0;
    for (int i = value1; i <= value2; i++)
    {
        sum3 += i;
    }
    std::cout << "Сумма чисел в диапазоне от " << value1 << " до " << value2 << " равна " << sum3 << std::endl;

    /*Задание 9. Пользователь с клавиатуры вводит числа. Посчитать
    их сумму и вывести на экран,как только пользователь введет ноль.*/
    std::cout << "Задание 9:" << std::endl;
    int numSum = 0;
    int Summ = 0;
    do {
        std::cout << "Введите число: ";
        std::cin >> numSum;
        Summ += numSum;

    } while (numSum != 0);
    std::cout << "Сумма равна: " << Summ << std::endl;


    return 0;
}
