#include <iostream>
#include <string.h>

using namespace std;

void displayAll(){

    char str[50],str2[50],str3[50];
    cout<<"Enter a string::"<<" ";
    gets(str);

    int i, vowel=0, consonant=0;

    for(i=0; i<strlen(str); i++){

      if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'
        ||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' ){
            str2[vowel]=str[i];
            vowel++;
      }

      else if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )){
        str3[consonant]=str[i];
        consonant++;
      }

  }

   cout<<"Number of vowels:"<<vowel<<endl;
   cout<<"Number of consonants:"<<consonant<<endl;

   cout<<"Existing vowels are::"<<endl;
    for(i=0; i<vowel; i++){
       cout<<str2[i]<<" ";
      }
    cout<<endl;

    cout<<"Existing consonant are::"<<endl;
    for(i=0; i<consonant; i++){
       cout<<str3[i]<<" ";
      }
    cout<<endl;
  }




int main(){
    displayAll();
    return 0;
}








