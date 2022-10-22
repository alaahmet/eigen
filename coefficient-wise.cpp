// https://eigen.tuxfamily.org/dox/group__TutorialArrayClass.html
#include <bits/stdc++.h>
#include <eigen3/Eigen/Dense>
int main(){ 
    
    Eigen::VectorXd v(6);
    v << 2,3,1,6,4,5;
    std::cout << v.transpose() << std::endl;

    Eigen::VectorXd dinv = (1/v.array()).matrix();
    std::cout << dinv.transpose() << std::endl;

    Eigen::VectorXd Mul = dinv.cwiseProduct(v);
    std::cout << Mul.transpose() << std::endl;

    Eigen::VectorXd logv = v.array().log();
    std::cout << logv.transpose() << std::endl;
}
/*

2 3 1 6 4 5
0.5 0.333333 1 0.166667 0.25 0.2
1 1 1 1 1 1
0.693147  1.09861        0  1.79176  1.38629  1.60944

*/
