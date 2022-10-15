#include <bits/stdc++.h>
#include <eigen3/Eigen/Dense>
int main(){
    int n = 5;
    Eigen::VectorXd b(n);
    Eigen::VectorXd c(n);
    Eigen::VectorXd d(n);
    d << 1,1,2,3,5;
    c << 12,13,14,15,16;
    b << 25,26,27,28,29;
    Eigen::MatrixXd A(n+1,n+1);
    A.setZero();
    A.diagonal().head(n) = d;
    A.col(n).head(n) = c;
    A.row(n).head(n) = b;
    A(n,n) = 42;
    std::cout << A << std::endl;
}
/*
 1  0  0  0  0 12
 0  1  0  0  0 13
 0  0  2  0  0 14
 0  0  0  3  0 15
 0  0  0  0  5 16
25 26 27 28 29 42
*/

