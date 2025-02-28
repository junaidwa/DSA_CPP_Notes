#include<iostream>
using namespace std;
int main(){
char Upper[]={'J','U','n','A','i','D','\0'};
char Lower[]={'j','u','n','a','i','d'};


cout<<"Convert Upper case to Lower"<<endl;
for(int i=0;Upper[i]!='\0';i++){
    if(Upper[i]>=65&&Upper[i]<=90){
        Upper[i]+=32;
    }
    else{
        Upper[i]+32;
    }
}
//Now this above loop toggle the case but without else part it simply convert case 
cout<<"After Convert Print Array"<<endl;
for(int j=0;Upper[j]!='\0';j++){
    cout<<Upper[j]<<"";
}




return 0;
}