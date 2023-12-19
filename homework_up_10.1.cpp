// homework_up_10.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// задача 1 урока - семантика перемещений, модуль - продвинутое программирование
// нужо реализовать шаблонную функцию, которая перемещает содерждимое одного std::vector в другой

#include <iostream>
#include <vector>

int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;

    std::vector <std::string> tmp = std::move(one);
    one = std::move(two);
    two = std::move(tmp);
}

