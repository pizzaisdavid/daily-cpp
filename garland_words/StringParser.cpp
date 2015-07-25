#include "StringParser.h"


StringParser::StringParser()
{
}

std::string StringParser::fromStart(std::string text, int length)
{
	const int START_INDEX = 0;
	return text.substr(START_INDEX, length);
}

std::string StringParser::fromEnd(std::string text, int length)
{
	int startIndex = text.length() - length;
	return text.substr(startIndex);
}

StringParser::~StringParser()
{
}
