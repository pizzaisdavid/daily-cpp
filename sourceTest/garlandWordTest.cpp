#include "stdafx.h"
#include "CppUnitTest.h"
#include "../garland_words/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace garland
{		
	int NO_DEGREE = 0;

	TEST_CLASS(garland_words)
	{
	public:

		TEST_METHOD(isLetters_numbers_returnsFalse)
		{
			Assert::AreEqual(isLetters("0123456789"), false);
		}

		TEST_METHOD(isLetters_emptyString_returnsFalse)
		{
			Assert::AreEqual(isLetters(""), false);
		}

		TEST_METHOD(isLetters_sentence_returnsFalse)
		{
			Assert::AreEqual(isLetters("this has a space."), false);
		}

		TEST_METHOD(isLetters_lettersAndNumbers_returnsFalse)
		{
			Assert::AreEqual(isLetters("l33th4ck3r"), false);
		}

		TEST_METHOD(isLetters_lowercaseString_returnsTrue)
		{
			Assert::AreEqual(isLetters("hello"), false);
		}

		TEST_METHOD(isLetters_uppercaseString_returnsTrue)
		{
			Assert::AreEqual(isLetters("HELLO"), false);
		}

		TEST_METHOD(isLowercase_uppercaseString_returnsFalse)
		{
			Assert::AreEqual(isLetters("HELLO"), false);
		}

		TEST_METHOD(isLowercase_lowercaseString_returnsFalse)
		{
			Assert::AreEqual(isLetters("hello"), true);
		}

		TEST_METHOD(garland_noDegrees_returnsZero)
		{
			Assert::AreEqual(getGarland("programmer"), NO_DEGREE);

		}

	};
}