// Print matrix in snake pattern
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// o/p-1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=4,n=4;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int j=0;j<n;j++){
                cout<<mat[i][n-j-1]<<" ";
            }
        }
    }

}