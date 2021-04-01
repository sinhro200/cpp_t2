//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "InputDevice.h"
#include "Mouse.h"
#include "OutputDevice.h"
#include "Monitor.h"

/*
    Макушин Денис 12
    Персональный компьютер. 
    Реализуемые объекты: процессор, память, системная плата, устройства ввода вывода. 
    Реализовать процедуры ввода/вывода с учетом возможностей оборудования.

*/


char* IntToChar(int value) {
    char* buf = new char[10];
    sprintf(buf, "%d", value);
    return buf;
}

int main()
{
    InputDevice* id = new Mouse();
    char* data = id->Read();

    int *x = new int(0);
    int *y = new int(0);
    memcpy(x, data, sizeof(int));
    memcpy(y, data + sizeof(int), sizeof(int));

    char* xChar = IntToChar(*x);
    char* yChar = IntToChar(*y);
    char* outArr = new char[100];
    strcpy(outArr, "Acceleration x :");
    strcpy(outArr + 17 - 1, xChar);
    strcpy(outArr + 17 + sizeof(xChar) - 1, ".Acceleration y :");
    strcpy(outArr + 17 + sizeof(xChar) + 18 - 2, yChar);
    OutputDevice* od = new Monitor();
    od->Out(outArr);
    //std::cout << *x << " " << *y << '\n';
    //std::cout << data <<"\n";

    delete x, y;
    delete id, od;
    delete[] data,xChar,yChar,outArr;
}


/*
    Вопросы:

    какой функционал программы должен быть?
        -нажмите 0 если хотите изменить устройство ввода
        -нажмите 1 если хотите изменить устройство вывода
        -нажмите 2 если хотите изменить процессор
        -нажмите 3 если хотите изменить память
        -нажмите 4 если хотите изменить системную плату
        -нажмите 5 чтобы получить данные с устройства ввода и вывести на устройство вывода
            напишет в зависимости от устройства вывода
                "Вывожу на экран :"
                "Вывожу на принтер :"
            после чего напишет данные с устройства ввода:
                "абвг"          -   для клавиатуры
                1234 -5243      -   для мыши (ускорение на x и y)

    стоит ли загоняться по поводу интерфейса InputDevice ?
        InputDevice{
            virtual char* Read() = 0;
        }
        KeyBoard{
            private char currentPressedSymbol;
            virtual char* Read(){
                return &currentPressedSymbol;
            }
        }
        Mouse{
            virtual char* Read(){
                //возвращает массив из char, у которого 
                    первые 4 char 
                        представляют ускорение мыши на ось x в виде int
                    с 5 по 8
                        ускорение на ось y в виде int
            }
        }
*/