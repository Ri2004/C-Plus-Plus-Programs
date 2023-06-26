//Count Total Number of voowels and consonants in a given string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char ch[200];
	int len, vowel=0, consonant=0,i;
	
	cout<<"Enter A String"<<endl;
	cin>>ch;
	
	len = strlen(ch);
	
	for(i=0; i<len; i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
			vowel++;
		else
			consonant++;
	}
	cout<<"Total Number of Vowels are: "<<vowel<<endl;
	cout<<"Total Number of Consonants are: "<<consonant<<endl;
}