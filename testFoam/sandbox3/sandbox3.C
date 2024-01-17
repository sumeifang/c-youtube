/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2024 AUTHOR,AFFILIATION
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Application
    sandbox2

Description

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"
#include "linearEqn.H"
#include "cubicEqn.H"
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

int main(int argc, char *argv[])
{
    //#include "setRootCase.H"
    //#include "createTime.H"

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    //Info<< nl;
    //runTime.printExecutionTime(Info);

    //Info<< "End\n" << endl;

   /* Foam::Info << "hi" << Foam::endl;
    Info << "hi,i am using the foam namespace" << endl;*/
    
    
    //#include "linearEqn.H"如果把头文件放在这会出现很多错误
    scalar a = 5.42;
    scalar b = 4.23;

    Info << "a+b = " << a+b << endl;

    
    //对应头文件中的这段构造函数inline linearEqn(const scalar a, const scalar b);
    linearEqn eq1(2,7);//给a和b赋值并代入eq1， a*x + b = 0

    Info << "y = 2x + 7" << endl;
    //下面是为了求解y值，x = 5
    a = eq1.value(5);//使用了这个构造函数： inline scalar value(const scalar x) const;
    
    Info << "at x = 5 ,y = " << a << endl;

    //求导数get derivative
    Info << "dy/dx at x=5 is " << eq1.derivative(5) << endl;
    //roots求根
    Info << "root " << eq1.roots() << endl;


    //a*x^3 + b*x^2 + c*x + d = 0
    cubicEqn eq2(1,2,3,4);
    b = eq2.value(7);
    Info << "at x = 7 ,y = " << b << endl;
    //求导数get derivative
    Info << "dy/dx at x=0 is " << eq2.derivative(0) << endl;
    Info << "dy/dx at x=7 is " << eq2.derivative(7) << endl;
    Info << "roots " << eq2.roots() << endl;

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
    // argList::addNote
    //(
    //    "Transient solver for incompressible, laminar flow"
    //    " of Newtonian fluids."
    //);

    //#include "postProcess.H"

    //#include "addCheckCaseOptions.H"
    #include "setRootCaseLists.H"
    #include "createTime.H"
    //#include "createMesh.H"

    /*pisoControl piso(mesh);

    #include "createFields.H"
    #include "initContinuityErrs.H"*/

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    Info<< "\nStarting time loop\n" << endl;

    while (runTime.loop())
    {
        Info<< "Time = " << runTime.timeName() << nl << endl;

       /* #include "CourantNo.H"

        // Momentum predictor
        #include "UEqn.H"
        // --- PISO loop
        while (piso.correct())
        {  
            #include "pEqn.H"         
        }
         #include "TEqn.H"*/
        runTime.write();//表示循环几次后写出结果
        Info << runTime.path() << endl;//输出了路径

        runTime.printExecutionTime(Info);
    }

    Info<< "End\n" << endl;

    return 0;
}


// ************************************************************************* //
