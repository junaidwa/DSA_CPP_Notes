#include<iostream>
using namespace std;
int main(){
    char S[]={'J','?','U','Z','\0'};
    cout<<"To Check Valid or not"<<endl;
       
    for(int i=0;S[i]!='\0';i++){
        if(!(S[i]>=65 && S[i]<=90) && !(S[i]>=97 && S[i]<=122) && !(S[i]>=48 && S[i]<=57)){
            cout<<"Invalid"<<endl;
            break;
        }
        else{
            cout<<"Valid"<<endl;
            break;
        }
    }

return 0;
}