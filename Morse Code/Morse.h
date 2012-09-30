#ifndef MORSE_H
#define MORSE_H

#include <iostream>
#include <string>
#include <Windows.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Morse
{
public:
	Morse();
	~Morse();
	void obtainString ();
	void dotsDashesCounter();
	void convertString();
	void playMorse();
	void createCharMemory();
	void populateMorse();
private:
	string message;
	char *morseValues;
	int dotsDashesCount;
};

#endif