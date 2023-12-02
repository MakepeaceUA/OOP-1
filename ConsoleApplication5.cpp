#include <iostream>
#include <Windows.h>
using namespace std;

//Задание 1
//class Count
//{
//    int min;
//    int max;
//    int current;
//public:
//    Count() { current = min; }
//
//    void SetMin(int value)
//    {
//        min = value;
//    }
//    void SetMax(int value)
//    {
//        max = value;
//    }
//
//    void Func() 
//    {
//        if (current <= max) 
//        {
//            current++;
//        }
//        if (current > max || current < min)
//        {
//            current = min;
//        }
//    }
//
//    void Run(int itr)
//    {
//        for (int i = 1; i <= itr - 1; i++)
//        {
//            for (int j = 0; j <= max; j++)
//            {
//                Func();
//                cout << current;
//                Sleep(1000); system("cls");
//            }
//        }
//    }
//};
//
//int main()
//{
//    Count obj;
//    obj.SetMin(10);
//    obj.SetMax(20);
//    obj.Run(2);
//}









//Задание 2
//class Elevator
//{
//    int MaxFloor;
//    int TargetFloor;
//    int CurrentFloor;
//public:
//    void SetMaxFloor(int value)
//    {
//        MaxFloor = value;
//    }
//
//    void SetCurrentFloor(int value)
//    {
//        CurrentFloor = value;
//    }
//
//    void Move(int TrgFloor)
//    {
//        if (TrgFloor > 1 || TrgFloor < MaxFloor)
//        {
//            if (TrgFloor > CurrentFloor)
//            {
//                for (; CurrentFloor < TrgFloor; CurrentFloor++)
//                {
//                    cout << "Этаж №" << CurrentFloor;
//                    Sleep(1000); system("cls");
//                }
//            }
//            if (TrgFloor < CurrentFloor)
//            {
//                for (int i = TrgFloor; CurrentFloor + 1 > TrgFloor; CurrentFloor--)
//                {
//                    cout << "Этаж №" << CurrentFloor;
//                    Sleep(1000); system("cls");
//                }
//            }
//        }
//        cout << "Вы прибыли на этаж:" << TrgFloor;
//    }
//};
//
//int main()
//{
//    setlocale(0, "RU");
//    Elevator obj;
//    obj.SetMaxFloor(10);
//    obj.SetCurrentFloor(10);
//
//    obj.Move(5);
//}

