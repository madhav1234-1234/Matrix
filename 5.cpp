// Rotate matrix anticlockwise by 90

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
        int low=0,high=n-1;
        while(low<=high){
            swap(mat[i][low++],mat[i][high--]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}