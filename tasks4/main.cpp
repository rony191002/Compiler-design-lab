#include <iostream>
#include<string.h>
using namespace std;


bool isother(string str){

   for(int i=0;i<str.size();i++){
      if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9')){
        continue;
      }
      else return 1;
   }
  return 0;
}

int main()
{

    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    string str;
    cin>>str;
    cout<<"String is:: "<<str<<endl;
    cout<<endl;
    int len=str.size();

    if(isother(str)){
        cout<<"Undefined";
    }

    else if((str[0]>='i' && str[0]<='n') || (str[0]>='I' && str[0]<='N')){
        cout<<"Integer Variable";
        cout<<endl;
    }

    else if((str[0]>='1' && str[0]<='9') && len<=4){
        cout<<"ShortInt Number";
        cout<<endl;
    }

    else if((str[0]>='1' && str[0]<='9') && len>4){
        cout<<"LongInt Number";
        cout<<endl;
    }

    else{
        cout<<"Undefined";
        cout<<endl;
    }
}
