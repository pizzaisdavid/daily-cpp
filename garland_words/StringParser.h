#pragma once
#include <string>


class StringParser
{
public:
	StringParser();
	static std::string fromStart(std::string, int);
	static std::string fromEnd(std::string, int);
	~StringParser();
};

