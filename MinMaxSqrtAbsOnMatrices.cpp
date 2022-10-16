// https://eigen.tuxfamily.org/dox/group__TutorialReductionsVisitorsBroadcasting.html
// https://eigen.tuxfamily.org/dox/group__CoeffwiseMathFunctions.html
#include <bits/stdc++.h>
#include <eigen3/Eigen/Dense>
int main(){ 
    
    Eigen::MatrixXd M(3,3);
    M << -32,21,-44,-42,32,5,22,89,97;
    std::cout << M << std::endl;
    
    double Min = M.minCoeff();
    double MinAbs = M.cwiseAbs().minCoeff();
    double Max = M.maxCoeff();
    printf("\nMin:%lf MinAbs:%lf Max:%lf\n",Min,MinAbs,Max);
    
    Eigen::MatrixXd AbsSqrt(3,3); 
    AbsSqrt << M.cwiseAbs().cwiseSqrt();
    std::cout << std::endl << AbsSqrt << std::endl;

}
/*

-32  21 -44
-42  32   5
 22  89  97

Min:-44.000000 MinAbs:5.000000 Max:97.000000

5.65685 4.58258 6.63325
6.48074 5.65685 2.23607
4.69042 9.43398 9.84886

*/

