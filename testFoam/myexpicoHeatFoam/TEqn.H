    
       
       tmp<fvScalarMatrix> tTEqn//fvScalarMatrix是一个class
        (
            fvm::ddt(T)
            + fvm::div(phi, T)
            - fvm::laplacian(alpha, T)
        );

        Info << tTEqn.ref() << endl;

        tTEqn.clear();


       /*fvScalarMatrix TEqn//fvScalarMatrix是一个class
        (
            fvm::ddt(T)
            + fvm::div(phi, T)
            - fvm::laplacian(alpha, T)
        );

        TEqn.solve();*/