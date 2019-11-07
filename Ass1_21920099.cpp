//Code is messed 

#include<iostream>
using namespace std;

class Ass1{
private:
	char str[50] = "Hello";
	char *c = str;
	char str1[10];
	int length=0;
	string str3="fooof";
	char str4[6]="Hello";
	string chk="fooof";
	char str2[10];

public:

	void operator+(){
	int i = 0;
	int j = 0;

	cout<<"Enter string2 to concanitate: ";
	cin>>str2;

	while(str[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		str[i] = str2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	cout<<"concanitate: "<<str<<endl;
	}

	int operator[](char s[]){
		c = str;
		while(*c!='\0'){
		length++;
		*c++;
		}
			return length;
	}

	void operator<<(int &l){
	int j=0;
	for(int i=length-1; i>=0; i--)
		str2[j++]=str[i];

	str2[j]='\0';
	cout<<"Reverse:"<<str2<<endl;
	}

	void operator>>(char sc[]){
		int i=0;
		c = sc;
		while(*c!='\0'){
			str1[i++]=*c;
			*c++;
		}

		str1[i]='\0';
		cout<<"Copied string: "<<str1<<endl;
	}
	
	void operator<(char se[]){
		int flag;
		cout<<"Enter a String to comapre : ";
		cin>>str1;
		char *ch=str;
		c = se;
		while(*ch || *c){
			if(*ch!=*c){
				flag=0;
				break;
			}
			ch++;
			c++;
		}

		if(flag)
			cout<<"Equal"<<endl;
		else
			cout<<"Not Equal"<<endl;
	}

	void operator>(int sz){
	if(str3 == chk)
		cout<<"String is palindrome";
	else
		cout<<"String is not palindrome";
	}
};

int main(){
	Ass1 a;
	char strc[10];

	cout<<"Enter String: ";
	cin>>strc;

	//compare
	cout<<"\nComapre: "<<endl;
	a<(strc);

	//concatinate
	cout<<"\nConcatinate: "<<endl;
	+a;

	//copy
	cout<<"\nCopy: "<<endl;
	a>>(strc);

	//length
	cout<<"\nLength: "<<endl;
	int size = a[strc];
	cout<<"length: "<<size<<endl;


	//reverse
	cout<<"\nReverse: "<<endl;
	a<<(size);

	//pal
	cout<<"\nPalindrome: "<<endl;
	a>(size);


}