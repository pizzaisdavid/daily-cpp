#include "stdafx.h"
#include "CppUnitTest.h"
#include "../garland_words/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace garland
{		

	TEST_CLASS(garland_words)
	{
	public:

		TEST_METHOD(isLetters_invalidStrings_returnsFalse)
		{
			Assert::IsFalse(isLetters("0123456789"), L"numbers");
			Assert::IsFalse(isLetters(""), L"empty");
			Assert::IsFalse(isLetters(" "), L"space");
		}

		TEST_METHOD(isLetters_letterStrings_returnsTrue)
		{
			Assert::IsTrue(isLetters("hello"), L"lowercase");
			Assert::IsTrue(isLetters("Hello"), L"mixedcase");
			Assert::IsTrue(isLetters("HELLO"), L"uppercase");
		}

		TEST_METHOD(isLowercase_uppercaseString_returnsFalse)
		{
			Assert::IsFalse(isLowercase("HELLO"));
		}

		TEST_METHOD(isLowercase_lowercaseString_returnsTrue)
		{
			Assert::IsTrue(isLowercase("hello"));
		}
	};
}