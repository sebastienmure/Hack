#include <vector>
#include <string>
#include <iostream>

class Alphabet
{
	std::vector<std::string> m_alphabet;

	Alphabet()
	{
		m_alphabet.push_back("a");
		m_alphabet.push_back("b");
		m_alphabet.push_back("c");
	}

	void createPassword()
	{
		for (int i = 0; i <= 3; i++) {
			std::cout << m_alphabet[i] << std::endl;

		}
	}
};