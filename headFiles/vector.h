#ifndef VECTOR_H
#define VECTOR_H

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


int main2();

#endif
