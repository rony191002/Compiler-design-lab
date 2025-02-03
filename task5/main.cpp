#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,floatposition=0,floatingnumber=0;
    string s;
    cin >> s;
	bool floatvar,floatnum,doublenum;
	floatvar = floatnum = doublenum = 0;
	if(s[0]>='a'&&s[0]<='h'||s[0]>='A'&&s[0]<='H'||s[0]>='O'&&s[0]<='Z'||s[0]>='o'&&s[0]<='z')
		floatvar = 1;
	for(i=1;i<s.size();i++){
		if(!isdigit(s[i])&&!isupper(s[i])&&!islower(s[i]))
			floatvar = 0;
	}

	for(i=1;i<s.size()-2;i++)
		if(s[i]=='.'){
			floatnum = doublenum = 1;
			floatposition = i;
		}
	//cout <<"check : "<< floatnum<<endl;

	if(floatposition!=1 && s[0]=='0')
		floatnum = doublenum = 0;

	if(floatposition!=1){
		for(i=1;i<floatposition;i++){
			if(!isdigit(s[i]))
				floatnum = doublenum = 0;
		}
	}

	for(i=floatposition+1;i<s.size();i++){
		if(isdigit(s[i]))
			floatingnumber++;
		else
			floatnum = doublenum = 0;
	}
	if(floatingnumber<2)
		floatnum = doublenum = 0;


	else if(floatingnumber>2)
		floatnum = 0;

	if(floatvar)
		cout <<"Float variable"<<endl;
	else if(floatnum)
		cout <<"Float Number"<<endl;
	else if(doublenum)
		cout <<"Double Number"<<endl;
	else
		cout <<"Undfined"<<endl;
}
