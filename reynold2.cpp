#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//下面有个double的函数上面需要有声明
double Recacul(double rho,double U,double D,double mu);

int main ()
{
    double rho,U,D,mu,Re;
    //
    cout << "input density in kg/m^3" << endl;
    cin >> rho;
    cout << "input velocity in m/s" << endl;
    cin >> U;
        cout << "input characteristic length in m" << endl;
    cin >> D;
    cout << "input dynamic viscosity in SI units" << endl;
    cin >> mu;
    cout << "the Re number is: " <<endl;

    Re = Recacul(rho,U,D,mu);
    //调用下面的函数来计算
    cout << Re <<endl;

    return 0;
}

// make function
double Recacul(double rho,double U,double D,double mu)
{
    double Re;
    Re = rho*D*U/mu;
    return Re;
}