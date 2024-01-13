#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Vectors
{
    public:
       // Vectors();
    //constructor构造函数
    Vectors();
    //destructor析构函数
    ~Vectors();

    int printVectors1();
    int printVectors2();
    void setVector1();
    void setVector2();

    int printAddedVectors();
    void addVectors();
    double length(double x, double y, double z);
    

    protected:
    private://定义的内容在main函数中不会被随意改变

    double vector1[3][1];
    double vector2[3][1];
    double vector_add_result[3][1];

};


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
    vec.addVectors();
    vec.printAddedVectors();
    return 0;
}
void Vectors::setVector1(){

    //
    std::cout << "input 1 x" << std::endl;
    std::cin >> vector1[0][0];
    std::cout << "input 1 y" << std::endl;
    std::cin >> vector1[1][0];
    std::cout << "input 1 z" << std::endl;
    std::cin >> vector1[2][0];

}


void Vectors::setVector2(){
    //
    std::cout << "input 2 x" << std::endl;
    std::cin >> vector2[0][0];
    std::cout << "input 2 y" << std::endl;
    std::cin >> vector2[1][0];
    std::cout << "input 2 z" << std::endl;
    std::cin >> vector2[2][0];

}

Vectors::Vectors(){
    //初始化vector1 = zeros(3,1)
     cout << "初始化vector1" << endl;
    for (int i = 0; i < 3; i++)
    {
        vector1[i][0] = 0;
        vector2[i][0] = 0;
    }
}
Vectors::~Vectors(){
    cout << "end of object,destructor running" << endl;
}

// make function

int Vectors::printVectors1()
{
    
    std::cout << "printing a vector" << std::endl;
        for (int i = 0; i < 3; i++)
    {
        cout << "vector i row" << i << "column" << "i is " << endl;
        cout << vector1[i][0] << endl;
    }
    return 0;
 }

int Vectors::printVectors2()
{
    
    std::cout << "printing a vector" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "vector 2 row" << i << "column" << "i is " << endl;
        cout << vector2[i][0] << endl;
    }
    return 0;
 }
void Vectors::addVectors()
{
    for (int i = 0; i < 3; i++)
    {
        vector_add_result[i][0]= vector1[i][0] + vector2[i][0];
    }

}
int Vectors::printAddedVectors()
{
    
    std::cout << "printing added vector" << std::endl;
        for (int i = 0; i < 3; i++)
    {
        cout << "added vector row " << i << " column " << "i is " << endl;
        cout << vector_add_result[i][0] << endl;
    }
    return 0;
 }

double Vectors::length(double x, double y, double z)
{
    double Length;
    Length = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
    return Length;
}

