// #include<iostream>
// using namespace std;
// int main(){
//     char S[]= "Junaid Wattoo";
//     int i,j;
//     char temp;

//     for(j=0;S[j]!='\0';j++){
//     }
//     j=j-1;
//     for(i=0;i<j;i++,j--){
//         temp=S[i];
//         S[i]=S[j];
//         S[j]=temp;
//     }
//     cout<<"Reverse String: "<<S<<endl;
// return 0;
// }

#include<iostream>
using namespace std;

int main() {
    char S[] = "Junaid Wattoo";
    int i, j;
    char temp;

    // Finding the length of the string
    for (j = 0; S[j] != '\0'; j++) {
    }
    j = j - 1;  // Move j to the last character

    // Reversing the string
    for (i = 0; i < j; i++, j--) {
        temp = S[i];
        S[i] = S[j];
        S[j] = temp;
    }

    // Copying reversed string to B[]
    char B[14];  // Size should be enough to include the null terminator
    int k;
    for (k = 0; S[k] != '\0'; k++) {
        B[k] = S[k];
    }
    B[k] = '\0';  // Adding null terminator to avoid garbage output

    cout << "Reverse String is " << B;

    return 0;
}
