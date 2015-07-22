#include <string>
#include <regex>

int getGarland(std::string);
bool isLetters(std::string);
bool isLowercase(std::string);
int getDegrees(std::string);

int main()
{
	return 0;
}

int getGarland(std::string word)
{
	if (isLetters(word) && isLowercase(word))
	{
		return getDegrees(word);
	}
	else
	{
		return 0;
	}
}

// TODO make this a member function of garland.
bool areLetters(std::string text)
{
	std::regex ALPHABET ("[A-Za-z]+");
	return std::regex_match(text, ALPHABET);
}

bool isLowercase(std::string text)
{
	std::regex LOWERCASE_ALPHABET ("[a-z]+");
	return std::regex_match(text, LOWERCASE_ALPHABET);
}

int getDegrees(std::string word)
{
	return 1;
}
