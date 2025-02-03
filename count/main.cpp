#include<iostream>
#include<string.h>
using namespace std;

void displayAll()
{
      char str[50],str2[50],str3[50],str4[50];
      cout<<"Enter a string::"<<" ";
      gets(str);

      int i,word=0,digits=0,letter=0,others=0;

      for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            word++;
        }
        else if(str[i]>='0' && str[i]<='9'){
              str2[digits]=str[i];
              digits++;
        }

        else if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')){
            str3[letter]=str[i];
            letter++;
        }

        else{
            str4[others]=str[i];
            others++;
        }

      }

      cout<<"The Word of the string::"<<word+1<<endl;
      cout<<"The digits of the string::"<<digits<<endl;
      cout<<"The letter of the string::"<<letter<<endl;
      cout<<"The spetial charecter of the string::"<<others<<endl;


    cout<<"Separet Digits::"<<endl;
    for(i=0; i<digits; i++){
       cout<<str2[i]<<" ";
      }
    cout<<endl;

    cout<<"Separet letter::"<<endl;
    for(i=0; i<letter; i++){
       cout<<str3[i]<<" ";
      }
    cout<<endl;

    cout<<"Separet spetial charecters::"<<endl;
    for(i=0; i<others; i++){
       cout<<str4[i]<<" ";
      }
    cout<<endl;
}


int main()
{
    displayAll();
    return 0;
}

