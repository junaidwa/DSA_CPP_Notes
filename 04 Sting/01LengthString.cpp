#include<iostream>
using namespace std;
int main(){
    char S[]={'J','U','N','A','I','D','\0'};
    int count=0,i;
    for(i=0;S[i]!='\0';i++){
        count++;
        
    }
    cout<<"Length of Our String is "<<count<<endl;

return 0;
}


//Second Way 
// #include<iostream>
// using namespace std;
// int main(){
//     char S[]="JUNAID";

//         int count=0,i;
//     for(i=0;S[i]!='\0';i++){
//         count++;
        
//     }
//     cout<<"Length of Our String is "<<count<<endl;



// return 0;
// }

//Create String in Heap
// #include<iostream>
// using namespace std;
// int main(){
//     char *S;
//     S=new char[7];
//     S[0]='J';
//     S[1]='U';
//     S[2]='N';
//     S[3]='A';
//     S[4]='I';
//     S[5]='D';
//     S[6]='\0';

//     int count=0,i;
//     for(i=0;S[i]!='\0';i++){
//         count++;
        
//     }
//     cout<<"Length of Our String is "<<count<<endl;

// return 0;
// }



