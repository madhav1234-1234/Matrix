// SPIRAL TRAVERSAL
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// O/P-1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13

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
    int sr=0,sc=0,er=m-1,ec=n-1;
    while(sr<=er && sc<=ec){
        for(int i=sc;i<=ec;i++){
          cout<<mat[sr][i]<<" ";
        }
        sr++;
        for(int i=sr;i<=er;i++){
           cout<<mat[i][ec]<<" ";
        }
        ec--;
    if(er>=sr){
        for(int i=ec;i>=sc;i--){
            cout<<mat[er][i]<<" ";
        }
        er--;
    }
    if(ec>=sc){
        for(int i=er;i>sr;i--){
            cout<<mat[i][sc]<<" ";
        }
        sc++;
    }
    }
}