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