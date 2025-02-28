#include<iostream>
using namespace std;
int main(){
    char S1[]="How are you";
    char S2[]="how are you";
    int i, j;
    for(i=0, j=0; S1[i]!='\0' && S2[j]!='\0'; i++, j++){
        if(S1[i]!=S2[j]){
            break;
        }
    }
    if(S1[i]==S2[j]){
        cout<<"Strings are equal"<<endl;
    }
    else if(S1[i]<S2[j]){
        cout<<"S1 is smaller than S2"<<endl;
    }
    else{
        cout<<"S1 is greater than S2"<<endl;
    }
    //It checks the ASCII value of the characters

return 0;
}

