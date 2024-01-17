
        //a*x^3 + b*x^2 + c*x + d = 0
    cubicEqn eq2(1,2,3,4);
    scalar d;
    d = eq2.value(7);
    Info << "at x = 7 ,y = " << d << endl;
    //求导数get derivative
    Info << "dy/dx at x=0 is " << eq2.derivative(0) << endl;
    Info << "dy/dx at x=7 is " << eq2.derivative(7) << endl;
    Info << "roots " << eq2.roots() << endl;