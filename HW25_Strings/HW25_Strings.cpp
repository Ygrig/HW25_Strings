#include <iostream>
#include <string>

bool palindrome(std::string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);

	if (str.length() % 2 == 0) {
		for (int i = 0; i < str.length() / 2; i++) {
			if (str[i] == str[str.length() - i - 1])
				return true;
			else
				return false;
		}
	}
	else
		for (int i = 0; i < (str.length()-1) / 2; i++) {
			if (str[i] == str[str.length() - i - 1])
				return true;
			else
				return false;
		}
}

int punctuation(std::string str) {
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
			counter++;
	}
	return counter ;
}

std::string last_sym(std::string str, char sym) {
	for (int i = 0; i < str.length(); i++) {
		if (str.rfind(sym) > str.length())
			return "";
		std::string new_str = str.substr(str.rfind(sym));
		return new_str;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//Task 25.1
	std::cout << "Task 25.1 New string.\n";
	std::string str = "Hello world!";
	char sym = 'o';
	std::string result;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			result += sym;
	std::cout << result << "\n";
	std::cout << '\n';
	
	//Task 25.2
	std::cout << "Task 25.2 Palindrome.\n";
	std::string word;
	std::cout << "Enter the word: \n";
	getline(std::cin, word);
	if (palindrome(word))
		std::cout << "TRUE\n";
	else
		std::cout << "FALSE\n";
	std::cout << '\n';

	//Task 25.3
	std::cout << "Task 25.3 Total.\n";
	std::string line;
	std::cout << "Enter the line: \n";
	getline(std::cin, line);
	std::cout << "Total amount of punctuation marks = " << punctuation(line) << '\n';
	std::cout << '\n';
	
	//Task 25.4
	std::cout << "Task 25.4 Last symbol.\n";
	std::string str4 = "Hello, world!";
	char sym4;
	std::cout << "Initial line: " << str4 << '\n';
	std::cout << "Enter symbol: " << '\n';
	std::cin >> sym4;
	std::cout << "New line: \n";
	std::cout << last_sym(str4, sym4);
	std::cout << '\n';

	return 0;
}