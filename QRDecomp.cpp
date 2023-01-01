#include <bits/stdc++.h>
#include <eigen3/Eigen/Dense>
using namespace std;
using namespace Eigen;
void ch(Matrix4d X){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(abs(X(i,j))<1e-12)
                X(i,j) = 0;
        }
    }
    cout << X << endl << endl;
}
int main(){
    Matrix4d M;
    M << 1,2,3,4,5,6,7,8,5,10,11,12,13,14,3,16;
    HouseholderQR<Matrix4d> qr(M);
    Matrix4d Q  = qr.householderQ();
    ch(Q);
    Matrix4d R = Q.transpose() * M;
    ch(R);
    Matrix4d A = Q * R;
    ch(A);
}