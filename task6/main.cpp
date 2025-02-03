#include<bits/stdc++.h>
using namespace std;
bool ischaracter(char c){
	if(isupper(c)||islower(c))
		return true;
	else
		return false;
}
int main(){
	int i;
	string s;
	getline(cin, s);
	bool character,binaryvar,binarynum;
	character = binaryvar = binarynum = 0;
	if(s[0]=='c'&&s[1]=='h'&&s[2]=='_' && (ischaracter(s[3])||isdigit(s[3])))
		character = 1;

	if(s[0]=='b'&&s[1]=='n'&&s[2]=='_' && (ischaracter(s[3])||isdigit(s[3])))
		binaryvar = 1;

	for(i=4;i<s.size();i++){
		if(!ischaracter(s[i]) && !isdigit(s[i])){
			character = 0;
			binaryvar = 0;
		}
	}

	if(s[0]=='0' && (s[1]=='0'||s[1]=='1'))
		binarynum = 1;
	for(i=2;i<s.size();i++){
		if(s[i]!='0'&&s[i]!='1')
			binarynum = 0;
	}
	if(character)
		cout <<"Character variable"<<endl;
	else if(binaryvar)
		cout <<"Binary variable"<<endl;
	else if(binarynum)
		cout <<"Binary Number"<<endl;
	else
		cout <<"Undefined"<<endl;
}
