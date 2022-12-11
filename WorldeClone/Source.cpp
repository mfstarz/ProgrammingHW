#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <Windows.h>
#include <fstream>
#include <ctime>

const int WORD_LENGTH = 5;
const int NOT_MATCH = 0;
const int PARTIAL_MATCH = 1;
const int MATCH = 2;

std::string getRandomWord()
{
	std::string word;
	std::ifstream file("words.txt");
    std::srand(std::time(nullptr));
	if (file.is_open())
	{
		std::vector<std::string> words;
		std::string line;
		while (std::getline(file, line))
		{
			words.push_back(line);
		}
		word = words[rand() % words.size()];
	}
	return word;
}

std::string convertToUpperCase(std::string input) {
    std::for_each(input.begin(), input.end(), [](char& c) {
        c = ::toupper(c);
        });
    return input;
}

bool isValid(std::string word)
{
	return word.length() == WORD_LENGTH && word.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos;
}

void printWordle(std::vector<std::string> tries, std::vector<std::vector<int>> matches, int currentTry)
{
    system("cls");
    std::cout << "=================================================================" << std::endl;
    std::cout << "|                                                               |" << std::endl;
    std::cout << "|   $$\\      $$\\                           $$\\ $$\\   |" << std::endl;
    std::cout << "|   $$ | $\\  $$ |                          $$ |$$ |             |" << std::endl;
    std::cout << "|   $$ |$$$\\ $$ | $$$$$$\\   $$$$$$\\   $$$$$$$ |$$ | $$$$$$\\     |" << std::endl;
    std::cout << "|   $$ $$ $$\\$$ |$$  __$$\\ $$  __$$\\ $$  __$$ |$$ |$$  __$$\\    |" << std::endl;
    std::cout << "|   $$$$  _$$$$ |$$ /  $$ |$$ |  \\__|$$ /  $$ |$$ |$$$$$$$$ |   |" << std::endl;
    std::cout << "|   $$$  / \\$$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |$$   ____|   |" << std::endl;
    std::cout << "|   $$  /   \\$$ |\\$$$$$$  |$$ |      \\$$$$$$$ |$$ |\\$$$$$$$\\    |" << std::endl;
    std::cout << "|   \\__/     \\__| \\______/ \\__|       \\_______|\\__| \\_______|   |" << std::endl;
    std::cout << "|                                                               |" << std::endl;
    std::cout << "=================================================================" << std::endl;
    for (int i = 0; i <= currentTry && i < tries.size(); i++)
    {
        std::string separator = "-";
        std::string padding = "|";
        std::string text = "|";
        for (int j = 0; j < tries[i].length(); j++)
        {
            separator += "------";
            padding += "     |";
            char value = std::toupper(tries[i][j]);
            text += "  ";
            if (matches[i][j] == PARTIAL_MATCH)
            {
                text += "\033[33m";
            }
            else if (matches[i][j] == MATCH)
            {
                text += "\033[32m";
            }
            text += value;
            if (matches[i][j] == PARTIAL_MATCH || matches[i][j] == MATCH)
            {
                text += "\033[0m";
            }
            text += "  |";
        }
        if (i == 0)
        {
            std::cout << separator << std::endl;
        }
        std::cout << padding << std::endl;
        std::cout << text << std::endl;
        std::cout << padding << std::endl;
        std::cout << separator << std::endl;
    }
}

void markMatch(std::vector<std::vector<int>>& matches, int tryIndex, std::string target, std::string guess)
{
    for (int i = 0; i < guess.length(); i++)
    {
        matches[tryIndex][i] = NOT_MATCH;
    }
    for (int j = 0; j < guess.length(); j++)
    {
        for (int i = 0; i < target.length(); i++)
        {
            if (guess[j] == target[i])
            {
                if (i == j)
                {
                    matches[tryIndex][j] = MATCH;
                    break;
                }
                else
                {
                    matches[tryIndex][j] = PARTIAL_MATCH;
                }
            }
        }
    }
}

bool isAllMatch(std::string target, std::string guess)
{
    for (int i = 0; i < guess.length(); i++)
    {
        if (guess[i] != target[i])
            return false;
    }
    return true;
}

int main(int, char**)
{
	int numberOfTries = 6;
	std::vector<std::string> tries(numberOfTries);
	std::vector<std::vector<int>> matches(numberOfTries, std::vector<int>(WORD_LENGTH));
	std::string targetWord = getRandomWord();
	
	targetWord = convertToUpperCase(targetWord);

	std::string input;
	int currentTry = 0;
	
	while (currentTry < numberOfTries) {
		do {
            printWordle(tries, matches, currentTry);
			std::cout << "Attempts left: " << numberOfTries - currentTry << std::endl;
            std::cout << "Please enter your guess or type Q to quit. " << targetWord + ": ";
			std::getline(std::cin, input);
            input = convertToUpperCase(input);
            markMatch(matches, currentTry, targetWord, input);
		} while (input != "Q" && !isValid(input));
		
		if (input == "Q") {
			std::cout << "Quit game" << std::endl;
			break;
		}
		
		tries[currentTry] = input;
		currentTry++;
		
        if (isAllMatch(targetWord, input)) {
            std::cout << "Found the word" << std::endl;
            break;
        }
		
        else if (currentTry == numberOfTries) {
            std::cout << "You didn't find the word" << std::endl;
        }
	}
    return 0;
}