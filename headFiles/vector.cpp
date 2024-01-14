#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include "vector.h"
int main2()
{
    #include "vector.h"
    cout << "eeee" << endl;
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
