#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "vector.h"
int main ()
{
   
    Vectors vec;//将一个类导入到主文件中称为创建对象

    vec.setVector1();
    vec.setVector2();
    vec.printVectors1();//调用类中函数的办法
    vec.printVectors2();//调用类中函数的办法

    double a,b,c;
    a = 1.23;
    b = 3.45;
    c = 2.56;
    double length = vec.length(a,b,c);
    cout << "l is " << length << endl;

    #include "vector.h"
    main2();
    vec.addVectors();
    vec.printAddedVectors();
    return 0;
}


