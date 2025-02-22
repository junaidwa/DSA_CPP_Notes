#include<iostream>
using namespace std;
int main(){
    //Decalration. There are three methods of decalaration of 2-D Array
    //1.
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    //2.
    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    //Initialization.
    B[0][0]=1;
    B[0][1]=2;
    B[0][2]=3;
    B[0][3]=4;
    B[1][0]=2;
    B[1][1]=4;
    B[1][2]=6;
    B[1][3]=8;
    B[2][0]=1;
    B[2][1]=3;
    B[2][2]=5;
    B[2][3]=7;

    //3.
    int **C;
    C=new int*[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
    //Initialization.
    C[0][0]=1;
    C[0][1]=2;
    C[0][2]=3;
    C[0][3]=4;
    C[1][0]=2;
    C[1][1]=4;
    C[1][2]=6;
    C[1][3]=8;
    C[2][0]=1;
    C[2][1]=3;
    C[2][2]=5;
    C[2][3]=7;

   
cout<<"For Pure Static "<<endl;
    for(int i=0;i<3;i++){
        cout<<endl;
        for(int j=0;j<4;j++){
            cout<<A[i][j]<<" ";
        
        }
    }
    cout<<endl;

    cout<<"For Partial Dynamic and partial Static "<<endl;
    for(int i=0;i<3;i++){
        cout<<endl;
        for(int j=0;j<4;j++){
            cout<<B[i][j]<<" "; 
        }
    }
    cout<<endl;

    cout<<"For Pure Dynmaic"<<endl;
    for(int i=0;i<3;i++){
        cout<<endl;
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" "; 
        }
    }
    cout<<endl;

return 0;
}