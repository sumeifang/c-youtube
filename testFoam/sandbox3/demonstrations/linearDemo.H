    
    //对应头文件中的这段构造函数inline linearEqn(const scalar a, const scalar b);
    linearEqn eq1(2,7);//给a和b赋值并代入eq1， a*x + b = 0

    Info << "y = 2x + 7" << endl;
    //下面是为了求解y值，x = 5
    
    scalar c=eq1.value(5);//使用了这个构造函数： inline scalar value(const scalar x) const;
    
    Info << "at x = 5 ,y = " << c << endl;

    //求导数get derivative
    Info << "dy/dx at x=5 is " << eq1.derivative(5) << endl;
    //roots求根
    Info << "root " << eq1.roots() << endl;
