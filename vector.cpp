#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//下面有个double的函数上面需要有声明
double Vector(double x,double y,double z);

int main ()
{
    double x,y,z,Length;
    //
    std::cout << "input x" << std::endl;
    std::cin >> x;
    std::cout << "input y" << std::endl;
    std::cin >> y;
        std::cout << "input z" << std::endl;
    std::cin >> z;

    std::cout << "the Length is  " << std::endl;

    Length = Vector(x,y,z);
    //调用下面的函数来计算
    std::cout << Length << std::endl;

    return 0;
}

// make function
double Vector(double x,double y,double z)
{
    double Length;
    Length = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
    return Length;
}
