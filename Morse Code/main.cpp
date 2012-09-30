#include "Morse.h"

int main (void)
{
	Morse myMorseCode;
	int number = 0;

	myMorseCode.obtainString();
	myMorseCode.convertString();
	myMorseCode.dotsDashesCounter();
	myMorseCode.createCharMemory();
	myMorseCode.populateMorse();
	myMorseCode.playMorse();
	
	return 0;
}