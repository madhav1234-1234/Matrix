// Creation of matrix.

// M-1.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m=3,n=3;
//     int mat[m][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             mat[i][j]=i+j;
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// M-2 Double pointer.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m=3,n=3;
//     int **arr;
//     arr =new int *[m];
//     for(int i=0;i<m;i++){
//         arr[i]=new int[n];
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=10;
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;

//     }
// }

// M-3 ARRAY OF VECTORS.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m=3,n=3;
//     vector<int>mat[3];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             mat[i].push_back(10);
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// M-4 VECTOR OF VECTORS.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=3,n=3;
    vector<vector<int>>arr;
    for(int i=0;i<m;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            v.push_back(10);
        }
        arr.push_back(v);
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}