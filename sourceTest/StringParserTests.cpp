#include "stdafx.h"
#include "CppUnitTest.h"
#include "../garland_words/StringParser.h"
#include "../garland_words/StringParser.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

std::string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

TEST_CLASS(StringParserTests)
{
public:

	TEST_METHOD(fromStart_alphabetAnd3_returnsABC)
	{
		std::string expected = "ABC";
		std::string result = StringParser::fromStart(ALPHABET, 3);
		Assert::AreEqual(expected, result);
	}

	TEST_METHOD(fromEnd_alphabetAnd3_returnsXYZ)
	{
		std::string expected = "XYZ";
		std::string result = StringParser::fromEnd(ALPHABET, 3);
		Assert::AreEqual(expected, result);
	}
};