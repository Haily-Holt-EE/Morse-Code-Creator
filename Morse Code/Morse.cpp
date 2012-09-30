#include "Morse.h"

//Constructor
Morse::Morse()
{
	message = ' ';
}

//Gets string from user
void Morse::obtainString()
{
	cout << "Please enter your message: ";
	getline(cin, message);
}

/*Counts how many dots and dashes there will be for the message (since it varies with each letter). Allows for us to create exactly
the amount of memory we need.*/
void Morse::dotsDashesCounter()
{
	int index = 0, number = 0;

	while(index < message.size())
	{
		if (message[index] != ' ')
		{
			switch(message[index])
			{
			case 'A': 
				number += 3;
				break;
			case 'B':
				number += 4;
				break;
			case 'C':
				number += 4;
				break;
			case 'D':
				number += 3;
				break;
			case 'E':
				number += 1;
				break;
			case 'F':
				number += 4;
				break;
			case 'G':
				number += 3;
				break;
			case 'H':
				number += 4;
				break;
			case 'I':
				number += 2;
				break;
			case 'J':
				number += 4;
				break;
			case 'K':
				number += 3;
				break;
			case 'L':
				number += 4;
				break;
			case 'M':
				number += 2;
				break;
			case 'N':
				number += 2;
				break;
			case 'O':
				number += 3;
				break;
			case 'P':
				number += 4;
				break;
			case 'Q':
				number += 4;
				break;
			case 'R':
				number += 3;
				break;
			case 'S':
				number += 3;
				break;
			case 'T':
				number += 1;
				break;
			case 'U':
				number += 3;
				break;
			case 'V':
				number += 4;
				break;
			case 'W':
				number += 3;
				break;
			case 'X':
				number += 4;
				break;
			case 'Y':
				number += 4;
				break;
			case 'Z':
				number += 4;
				break;
			case '1':
				number += 5;
				break;
			case '2':
				number += 5;
				break;
			case '3':
				number += 5;
				break;		
			case '4':
				number += 5;
				break;		
			case '5':
				number += 5;
				break;		
			case '6':
				number += 5;
				break;		
			case '7':
				number += 5;
				break;		
			case '8':
				number += 5;
				break;		
			case '9':
				number += 5;
				break;
			case '0':
				number += 5;
				break;
			case '.':
				number += 6;
				break;
			case ',':
				number += 6;
				break;
			case '/':
				number += 5;
				break;
			case '@':
				number += 6;
				break;
			case '?':
				number += 6;
				break;
			}
		}

		index++;
	}

	dotsDashesCount = number;
}

//Converts the string to all uppercase
void Morse::convertString()
{
	for(int index = 0; index < message.size(); index++)
	{
		message[index] = toupper(message[index]);
	}
}

//Allocates memory for the char array that holds the dots and dashes.
void Morse::createCharMemory()
{
	morseValues = new char[dotsDashesCount + 1];
}

//Puts the dots and dashes in the char array according to the letters within the message the user had inputted.
void Morse::populateMorse()
{
	int index = 0, index2 = 0, dot = 3, dash = 7;

	while(index2 < message.size())
	{
		if (message[index2] != ' ')
		{
			switch(message[index2])
			{
			case 'A': 
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'B':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'C':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'D':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'E':
				morseValues[index] = dot;
				index++;
				break;
			case 'F':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'G':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'H':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'I':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'J':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'K':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'L':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'M':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'N':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'O':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'P':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'Q':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'R':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'S':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case 'T':
				morseValues[index] = dash;
				index++;
				break;
			case 'U':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'V':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'W':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'X':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'Y':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case 'Z':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case '1':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case '2':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case '3':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;		
			case '4':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				break;		
			case '5':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;		
			case '6':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;		
			case '7':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;		
			case '8':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;		
			case '9':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case '0':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case '.':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case ',':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				break;
			case '/':
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case '@':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			case '?':
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dash;
				index++;
				morseValues[index] = dot;
				index++;
				morseValues[index] = dot;
				index++;
				break;
			}
		}

		index2++;
	}

	morseValues[index] = '\0';
}

//Prints the Morse code to the screen and plays it in beeps (note frequency - middle C).
void Morse::playMorse()
{
	cout << endl;

	for (int i = 0; morseValues[i] != '\0'; i++)
	{
		if (morseValues[i] == 3)
		{
			cout << ".";
		}
		else
		{
			cout << "-";
		}

		Beep(523, (morseValues[i] * 100));
		Sleep(100);
	}
}

//Destructor
Morse::~Morse()
{
	delete[] morseValues;
}
