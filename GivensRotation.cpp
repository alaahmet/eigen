#include <bits/stdc++.h>
#include <eigen3/Eigen/Dense>
using namespace std;
// A := G_{1,4}
int main(){
    Eigen::VectorXd v = Eigen::VectorXd(5);
    v << 13,8,4,92,3223; // vector
    // annihilate 3rd element of vector
    double c = 13/(sqrt(13*13+92*92));
    double s = 92/(sqrt(13*13+92*92));
    Eigen::MatrixXd A = Eigen::MatrixXd::Identity(5,5);
    A(1-1,1-1) = c;
    A(4-1,4-1) = c;
    A(1-1,4-1) = s;
    A(4-1,1-1) = -s;
    Eigen::VectorXd vnew = A * v;
    cout << A << endl << "------" << endl << v << endl << "------" << endl << vnew << endl;
}
