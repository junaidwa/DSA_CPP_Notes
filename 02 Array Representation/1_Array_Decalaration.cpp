#include<iostream>
using namespace std;
int main(){
    int A[5];
    int B[5] = {1,2,3,4,5};
    int C[5] = {1,2,3};
    int D[5] = {0};
    int E[] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0;i<5;i++){
        cout<<A[i]<<endl;
    } //Print Garbage Value
    cout<<endl;
    for(i=0;i<5;i++){
        cout<<B[i]<<endl;
    } //print 1 to 5
    cout<<endl;
    for(i=0;i<5;i++){
        cout<<C[i]<<endl;
    } //print 1 to 3 and 0 ,0
    cout<<endl;
    for(i=0;i<5;i++){
        cout<<D[i]<<endl;
    } //print 0,0,0,0,0
    cout<<endl;
    for(i=0;i<10;i++){
        cout<<E[i]<<endl;
    } //print 1 to 10 with flexible Size
    cout<<endl;

    cout<<B[2]<<endl; //print 3
    cout<<2[B]<<endl; //print 3
    cout<<*(B+2)<<endl; //print 3
  
//Also there are more ways to print the value of any index in array
    


return 0;
}