// 3.3-1.cpp 
//

#include <iostream>
#include <string>

class Calculator {
public:
    double num1;
    double num2;
   
     double add() {
        double result;
        result = num1 + num2;
        std::cout <<"num1 + num2 = " << result << "\n";
        return 0;
     }
   
    double multiply() {
        double result;
        result = num1 * num2;
        std::cout << "num1 * num2 = " << result << "\n";
        return 0;
    }

    double subtract_1_2() {
        double result;
        result = num1 - num2;
        std::cout << "num1 - num2 = " << result << "\n";
        return 0;
    }

    double subtract_2_1() {
        double result;
        result = num2 - num1;
        std::cout << "num2 - num1 = " << result << "\n";
        return 0;
    }

    double divide_1_2() {
        double result;
        result = num1 / num2;
        std::cout << "num1 / num2 = " << result << "\n";
        return 0;
    }

    double divide_2_1() {
        double result;
        result = num2 / num1;
        std::cout << "num2 / num1 = " << result << "\n";
        return 0;
    }

   bool set_num1(double num1) {
       bool flag;
       
       if (num1!=0)
       {
           flag = true;
           this -> num1 = num1;
       }
       else
       {
           flag = false;
       }
     return flag;
   }
    
   bool set_num2(double num2) {
       bool flag2;

       if (num2 != 0)
       {
           flag2 = true;
           this->num1 = num1;
       }
       else
       {
           flag2 = false;
       }
       return flag2;
   }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    
    while (true)
    {
        

        Calculator c; // {3, 4};
        bool flag, flag2;
        while (true)
        {
         std::cout << "Введите num1 : ";
         std::cin >> c.num1;
         std::cout << "Введите num2 : ";
         std::cin >> c.num2;
         flag = c.set_num1(c.num1);
         flag2 = c.set_num2(c.num2);
         if (flag2 && flag)
         {
             break;
         }
         std::cout << "Неверный ввод! \n";
        }
                             
        c.add();
        c.multiply();
        c.subtract_1_2();
        c.subtract_2_1();
        c.divide_1_2();
        c.divide_2_1();
    }
    std::cout << "\n\nHello World!\n";
}





#if 0

Введите num1 : 3
Введите num2 : 6
num1 + num2 = 9
num1 - num2 = -3
num2 - num1 = 3
num1 * num2 = 18
num1 / num2 = 0.5
num2 / num1 = 2
Введите num1 : 5
Введите num2 : 0
Неверный ввод!
Введите num2 : 5
num1 + num2 = 10
num1 - num2 = 0
num2 - num1 = 0
num1 * num2 = 25
num1 / num2 = 1
num2 / num1 = 1



void double_multiply() {
#endif