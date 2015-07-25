#include <string>
#include <math.h>

int garland(std::string);
int getRoundedUpHalfLength(std::string);
bool isSubstringBeginningAndEndingSame(std::string, int);
std::string parseSubstringfromStart(std::string, int);
std::string parseSubstringfromEnd(std::string, int);


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
	std::string beginning = parseSubstringfromStart(text, length);
	std::string ending = parseSubstringfromEnd(text, length);
	return beginning == ending;
}

std::string parseSubstringfromStart(std::string text, int length)
{
	const int START_INDEX = 0;
	return text.substr(START_INDEX, length);
}

std::string parseSubstringfromEnd(std::string text, int length)
{
	int startIndex = text.length() - length;
	return text.substr(startIndex);
}