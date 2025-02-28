// #include<iostream>
// using namespace std;
// int main(){
// char Upper[]={'J','U','n','A','i','D','\0'};
// char Lower[]={'j','u','n','a','i','d'};


// cout<<"Convert Upper case to Lower"<<endl;
// for(int i=0;Upper[i]!='\0';i++){
//     if(Upper[i]>=65&&Upper[i]<=90){
//         Upper[i]+=32;
//     }
//     else{
//         Upper[i]+32;
//     }
// }
// cout<<"After Convert Print Array"<<endl;
// for(int j=0;Upper[j]!='\0';j++){
//     cout<<Upper[j]<<"";
// }

// cout<<"Convert lower case to Upper Case"<<endl;



// for(int i=0;Lower[i]!='\0';i++){
//     if(Lower[i]>=97&& Lower[i]<=122){
//         Lower[i]-=32;
//     }
//     else{
//         Lower[i]-=32;
//     }
// }
// cout<<"After Convert Print Array"<<endl;
// for(int j=0;Upper[j]!='\0';j++){
//     cout<<Upper[j]<<"";
// }
// return 0;
// }


//If we have a string containing numbers and chracter of both upper and lower case
#include<iostream>
using namespace std;
int main(){
    
    char S[]={'J','u','N','a','I','d','\0'};

    cout<<"Convert into Lower"<<endl;
    for(int i=0;S[i]!='\0';i++){
        if(S[i]>=60&&S[i]<=90){
            S[i]+=32;
        }
       
    }
    cout<<"Print after Conversion "<<endl;
    for(int i=0;S[i]!='\0';i++){
        cout<<S[i];
    }
    cout<<"Convert into Upper"<<endl;
    for(int i=0;S[i]!='\0';i++){
        if(S[i]>=97&&S[i]<=122){
            S[i]-=32;
        }
       
    }
    cout<<"Print after Conversion "<<endl;
    for(int i=0;S[i]!='\0';i++){
        cout<<S[i];
    }

return 0;
}