#ifndef PASSTOR_H
#define PASSTOR_H
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

class passTor
{
	public:
		passTor();
		void WelcomeMessage();
		int getNumber();
		int getLow();
		int getHigh();
		int getSpecial();
		void printPass(int n1,int l2, int h3, int s4);
		string pickNumber();
		string pickLletter();
		string pickHletter();
		string pickSpecial();
		void fillPool(char arry[]);
	private:
		string number;
		string lower;
		string higher;
		string special;
		char Special_pool[31];
		int i;
		int numb;
};

#endif
