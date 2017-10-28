#include <iostream>
#include <fstream>
using namespace std;

const string inputfile = "C:/Users/Gebruiker/Desktop/IOOP opdrachten/Opdracht 6/Opdracht6_LetterScramble/Opdracht6_LetterScramble/text1.txt";
const string outputfile = "C:/Users/Gebruiker/Desktop/IOOP opdrachten/Opdracht 6/Opdracht6_LetterScramble/Opdracht6_LetterScramble/text2.txt";
const string scrambleFile = "C:/Users/Gebruiker/Desktop/IOOP opdrachten/Opdracht 6/Opdracht6_LetterScramble/Opdracht6_LetterScramble/text3.txt";

int countCharacters(string file)
{
	ifstream in_stream;
	int count = 0;
	in_stream.open(inputfile);
	
	char ch;
	in_stream.get(ch);
	
	while (!in_stream.fail()) 
	{
		count++;
		in_stream.get(ch);
	}

	in_stream.close();

	return count;
}

char getCharactersPosition(int number, string file)
{
	char ch;
	std::ifstream fileInput;

	fileInput.open(file);
	for (int i = 0; i < number; i++) {
		fileInput.get(ch);
	}
	fileInput.close();

	return ch;
}

void scramble()
{
	int count = countCharacters(inputfile);
	char ch;

	ofstream file3;

	file3.open(scrambleFile);

	for (int number = count; number > 0; number--)
	{
		if (number % 2 == 0)
		{
			file3 << getCharactersPosition(number, inputfile);
		}
		else
			file3 << getCharactersPosition(number, outputfile);
	}

	file3.flush();
	file3.close();

}

int main()
{
	int count = countCharacters(inputfile);
	std::cout << count << " tekens in bestand" << std::endl;

	ofstream outputStream;
	outputStream.open(outputfile);

	for (int number = count; number > 0; number--) 
	{
		outputStream << getCharactersPosition(number, inputfile);
	}

	outputStream.flush();

	outputStream.close();

	scramble();

	cin.get();
}