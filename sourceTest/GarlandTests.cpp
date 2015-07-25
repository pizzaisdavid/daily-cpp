#include "stdafx.h"
#include "CppUnitTest.h"
#include "../garland_words/Garland.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(GarlandTests)
{
public:

	TEST_METHOD(isSubstringBeginningAndEndingSame_blankString_returnsTrue)
	{
		Assert::IsTrue(isSubstringBeginningAndEndingSame("", 0));
	}

	TEST_METHOD(isSubstringBeginningAndEndingSame_garland_returnsTrue)
	{
		Assert::IsTrue(isSubstringBeginningAndEndingSame("121", 1));
	}

	TEST_METHOD(isSubstringBeginningAndEndingSame_nongarland_returnsFalse)
	{
		Assert::IsFalse(isSubstringBeginningAndEndingSame("1234", 2));
	}

	TEST_METHOD(garland_blankString_returns0)
	{
		Assert::AreEqual(0, garland(""));
	}

	TEST_METHOD(garland_evenLengthAndNongarland_returns0)
	{
		Assert::AreEqual(0, garland("12"));
	}

	TEST_METHOD(garland_evenLengthAndMinimumDegree_returns1)
	{
		Assert::AreEqual(1, garland("11"));
	}

	TEST_METHOD(garland_evenLengthAndMaximumDegree_returns2)
	{
		Assert::AreEqual(2, garland("1212"));
	}

	TEST_METHOD(garland_oddLengthAndNongarland_returns0)
	{
		Assert::AreEqual(0, garland("123"));
	}

	TEST_METHOD(garland_oddLengthAndMinimumDegree_returns1)
	{
		Assert::AreEqual(1, garland("121"));
	}
	
	TEST_METHOD(garland_oddLengthAndMaximumDegree_returns2)
	{
		Assert::AreEqual(2, garland("111"));
	}
};