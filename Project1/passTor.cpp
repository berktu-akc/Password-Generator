#include <iostream>
#include "passTor.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

passTor::passTor()
{
	fillPool(Special_pool);
}
		
void passTor::WelcomeMessage()
{
	cout << "====> Wellcome to Password Generator <====" << endl;
}
		
int passTor::getNumber()
{
	cout << "How many numeral do you want to have in your password?" << endl << "Number of numeral:";
	cin >>numb;
			
	return numb;
}
		
int passTor::getLow()
{
	cout << "How many lower letter do you want to have in your password?" << endl << "Number of lower letters:";
	cin >>numb;
			
	return numb;
}
		
int passTor::getHigh()
{
	cout << "How many higher letter do you want to have in your password?" << endl << "Number of higher letters:";
	cin >>numb;
	
	return numb;
}
	
int passTor::getSpecial()
{
	cout << "How many special character do you want to have in your password?" << endl << "Number of special character:";
	cin >>numb;
		
	return numb;
}
		
void passTor::printPass(int n1,int l2, int h3, int s4)
{
	string password="";
	string hold;
		
	for(i=0;i<n1;i++){
		hold=pickNumber();
		password.append(hold);
	}
	for(i=n1;i<(n1+l2);i++){
		hold=pickLletter();
		password.append(hold);
	}
	for(i=l2;i<(l2+h3);i++){
		hold=pickHletter();
		password.append(hold);
	}
	for(i=h3;i<(h3+s4);i++){
		hold=pickSpecial();
		password.append(hold);
	}
		
	random_shuffle(password.begin(),password.end());
		
	cout << "pasword:" << password << endl;		// speacial içinde space var onu düzelt!!!!!!!!!!
}
		
string passTor::pickNumber()
{
	number=(rand()%10)+48;
		
	return number;
}
	
string passTor::pickLletter()
{
	lower=(rand()%26)+97;
		
	return lower;
}
		
string passTor::pickHletter()
{
	higher=(rand()%26)+65;
	
	return higher;
}
	
string passTor::pickSpecial()
{
	int random;
	
	random=rand()%31;
	special=Special_pool[random];
	
	return special;	
}
		
void passTor::fillPool(char arry[])
{
	for(i=0;i<31;i++){
		if(i<15){
			Special_pool[i]=33+i;
		}
		else if(i>=15 && i<22){
			Special_pool[i]=43+i;
		}
		else if(i>=22 && i<28){
			Special_pool[i]=69+i;
		}
		else if(i<=28){
			Special_pool[i]=95+i;
		}
	}
}
