#include <string>
#include <math.h>
#include "StringParser.h"

int garland(std::string);
int getRoundedUpHalfLength(std::string);
bool isSubstringBeginningAndEndingSame(std::string, int);


int garland(std::string word)
{
	const int NO_DEGREE = 0;
	int halfLengthOfWord = getRoundedUpHalfLength(word);
	for (int i = halfLengthOfWord; i > 0; i--)
	{
		if (isSubstringBeginningAndEndingSame(word, i))
		{
			return i;
		}
	}
	return NO_DEGREE;
}

int getRoundedUpHalfLength(std::string text)
{
	int lengthOfWord = text.length();
	double halfLength = lengthOfWord * 0.5;
	double halfLengthRoundUp = ceil(halfLength);
	return static_cast<int>(halfLengthRoundUp);
}

bool isSubstringBeginningAndEndingSame(std::string text, int length)
{
	std::string beginning = StringParser::fromStart(text, length);
	std::string ending = StringParser::fromEnd(text, length);
	return beginning == ending;
}