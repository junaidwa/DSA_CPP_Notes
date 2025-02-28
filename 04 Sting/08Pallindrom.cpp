#include<iostream>
using namespace std;
int main(){
char Pall[]="madam";

int i,j;
char temp;
for(i=0;Pall[i]!='\0';i++){


}
i--;
for(j=0;i<j,i--;j++){
    temp=Pall[i];
    Pall[i]=Pall[j];
    Pall[j]=temp;
}
char B[6];
int k;
for(k=0;Pall[k]!='\0';k++){
    B[k]=Pall[k];
}
B[k]='\0';


for(i=0,j=0;Pall[i]!='\0',B[j]!='\0';i++,j++){
    if(Pall[i]!=B[j]){
    break;
    }
}
if(Pall[i]==B[j]){
    cout<<"Given String is Pallindrom "<<endl;

}
else{
    cout<<"Not Pallindrom "<<endl;
}




return 0;
}