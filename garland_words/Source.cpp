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

bool isLetters(std::string text)
{
	std::regex ALPHABET ("[A-Za-z]");
	return std::regex_match(text, ALPHABET);
}

bool isLowercase(std::string text)
{
	std::regex ALPHABET ("[a-z]");
	return std::regex_match(text, ALPHABET);
}

int getDegrees(std::string word)
{

}