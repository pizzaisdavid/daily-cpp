#include <string>
#include <math.h>
#include "StringParser.h"

int garland(std::string);
int getRoundedUpHalfLength(std::string);
bool isSubstringBeginningAndEndingSame(std::string, int);


int garland(std::string word)
{
	const int NO_DEGREE = 0;
	int halfwordLength = getRoundedUpHalfLength(word);
	for (int i = halfwordLength; i > 0; i--)
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
	int wordLength = text.length();
	double halfLength = wordLength / 2.0;
	double halfLengthRounded = ceil(halfLength);
	return static_cast<int>(halfLengthRounded);
}

bool isSubstringBeginningAndEndingSame(std::string text, int length)
{
	std::string beginning = StringParser::fromStart(text, length);
	std::string ending = StringParser::fromEnd(text, length);
	return beginning == ending;
}
