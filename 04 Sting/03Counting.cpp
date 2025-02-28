#include<iostream>
using namespace std;
int main(){

    char S[]="How are you";
    int CountCharacters=0, CountWords=0, CountVowels=0;

    for(int i=0; S[i]!='\0'; i++){
        if((S[i]>=65 && S[i]<=90) || (S[i]>=97 && S[i]<=122)){
            CountCharacters++;

            // Check if the character is a vowel
            if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'||
               S[i]=='A'||S[i]=='E'||S[i]=='I'||S[i]=='O'||S[i]=='U'){
                CountVowels++;
            }
        }  
        else if(S[i]==' '){
            CountWords++;
        }
    }
    
    cout<<"Number of Characters: "<<CountCharacters<<endl;
    cout<<"Number of Words: "<<CountWords+1<<endl;  // +1 to count the last word
    cout<<"Number of Vowels: "<<CountVowels<<endl;

    return 0;
}
