#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//下面有个double的函数上面需要有声明
double vector_length(double x,double y,double z);
double vector_add(double vector1[3][1],double vector2[3][1]);

int main ()
{
    //double Length;
    double vector1[3][1];
    //
    std::cout << "input x" << std::endl;
    std::cin >> vector1[0][0];
    std::cout << "input y" << std::endl;
    std::cin >> vector1[1][0];
    std::cout << "input z" << std::endl;
    std::cin >> vector1[2][0];

    double vector2[3][1];
    //
    std::cout << "input x" << std::endl;
    std::cin >> vector2[0][0];
    std::cout << "input y" << std::endl;
    std::cin >> vector2[1][0];
    std::cout << "input z" << std::endl;
    std::cin >> vector2[2][0];
    std::cout << "the Length is  " << std::endl;

    //Length = Vector_length(vector[0][0],vector[1][0],vector[2][0]);
    //调用下面的函数来计算
    double add_result = vector_add(vector1,vector2);
    //std::cout << Length << std::endl;

    return 0;
}

// make function
double vector_length(double x,double y,double z)
{
    double Length;
    Length = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
    return Length;
}

double vector_add(double vector1[3][1],double vector2[3][1])
{
    double vector_add_result[3][1];

    for (int i=0; i < 3; i++)
    {
        vector_add_result[i][0]= vector1[i][0]+vector2[i][0];
    }
    double *a;//定义了一个指针
    a = *vector_add_result;
    return  *a;
    //一维数组用1个*，二维数组用两个*
}