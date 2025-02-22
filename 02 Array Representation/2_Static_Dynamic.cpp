#include<iostream>
using namespace std;
int main(){
int A[5]={1,2,3,4,5};
int *p;
p=new int[5];
//new is the only way in cpp to create anything in heap memory.
p[0]=5;
p[1]=4;
p[2]=3;
p[3]=2;
p[4]=1;

// cout<<"Size of A is "<
cout<<"Static Array"<<endl;
for(int i=0;i<5;i++){
    cout<<A[i]<<" ";
}
cout<<endl;

cout<<"Dynamic Array"<<endl;
for(int i=0;i<5;i++){
    cout<<p[i]<<" ";
}
cout<<endl;



return 0;
}