template<class Type>
Type returnNumber(Type a)
{
    Info << "a is " << a << endl; 
    Info << "data type is " << typeid(a).name() << endl;
    return a;
}

/*
int returnNumber(int a)
{
    Info << "a is " << a << endl;
    return a;
}

float returnNumber(float a)
{
    Info << "b is " << a << endl;
    return a;
}

char returnNumber(char a)
{
    Info << "a is " << a << endl;
    return a;
}

double returnNumber(double a)
{
    Info << "b is " << a << endl;
    return a;
}*/

template<class Type>
class printClass
{
private:

protected:

public:
    //constructor
        printClass()
        {
            Info << "constructor declared" << endl;
        }

        printClass(Type data)
        {
            Info << "you gave me data of type... " << endl;
            Info << typeid(data).name() << endl;
            Info << data << endl;
        }

    //destructor清楚内存，伤处上面已经不需要的变量
    ~printClass()
    {
        Info << "Destructor declared" << endl;
    }


};