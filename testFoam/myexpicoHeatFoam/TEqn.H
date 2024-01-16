       fvScalarMatrix TEqn//fvScalarMatrix是一个class
        (
            fvm::ddt(T)
            + fvm::div(phi, T)
            - fvm::laplacian(alpha, T)
        );

        TEqn.solve();
