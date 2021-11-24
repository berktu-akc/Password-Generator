#include <iostream>
#include "passTor.h"

int main(int argc, char** argv) {
	passTor pull;
	int number1,number2,number3,number4;
	srand(time(0));
	
	pull.WelcomeMessage();
	number1=pull.getNumber();
	number2=pull.getLow();
	number3=pull.getHigh();
	number4=pull.getSpecial();
	pull.printPass(number1,number2,number3,number4);
	return 0;
}
