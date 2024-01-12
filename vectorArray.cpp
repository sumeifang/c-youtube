#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//下面有个double的函数上面需要有声明
double Vector(double x,double y,double z);

int main ()
{
    double Length;
    double vector[3][1];
    //
    std::cout << "input x" << std::endl;
    std::cin >> vector[0][0];
    std::cout << "input y" << std::endl;
    std::cin >> vector[1][0];
        std::cout << "input z" << std::endl;
    std::cin >> vector[2][0];

    std::cout << "the Length is  " << std::endl;

    Length = Vector(vector[0][0],vector[1][0],vector[2][0]);
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
