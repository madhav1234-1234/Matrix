// Matrix boundry traversals.
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// o/p-1 2 3 4 8 12 16 15 14 13 9 5 

#include<iostream>
using namespace std;
int main(){
    int m=4,n=4;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<mat[0][i]<<" ";
    }
    for(int i=1;i<m;i++){
        cout<<mat[i][n-1]<<" ";
    }
    for(int i=n-2;i>=0;i--){
        cout<<mat[m-1][i]<<" ";
    }
    for(int i=m-2;i>0;i--){
        cout<<mat[i][0]<<" ";
    }
    
}




























// int sr=0,sc=0,er=0,ec=0;
//     for(int i=sc;i<ec;i++){
//         cout<<mat[sr][i]<<" ";
//         sr++;
//     }
//     for(int i=sr;i<er;i++){
//         cout<<mat[i][ec]<<" ";
//         ec--;
//     }
//     for(int i=ec;i>=sc;i--){
//         cout<<mat[er][i];
//         er--;
//     }
//     for(int i=er;i>=sr;i--){
//         cout<<mat[i][sc];
//     }