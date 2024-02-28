#include <iostream>
#include <algorithm>
#include <string>
#include <random>
#include <ctime>

std::string reverse(const std::string& word) {
    std::string reversedWord = word;
    std::reverse(reversedWord.begin(), reversedWord.end());
    return reversedWord;
}

std::string removeVowels(const std::string& word) {
    std::string result;
    for (char c : word) {
        if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
            result += c;
        }
    }
    return result;
}

std::string removeConsonants(const std::string& word) {
    std::string result;
    for (char c : word) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            result += c;
        }
    }
    return result;
}

std::string shuffle(const std::string& word) {
    std::string shuffledWord = word;
    std::shuffle(shuffledWord.begin(), shuffledWord.end(), std::default_random_engine(std::time(0)));
    return shuffledWord;
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    int choice;
    std::cout << "Choose an action:\n";
    std::cout << "1. Reverse the word.\n";
    std::cout << "2. Remove vowels from the word.\n";
    std::cout << "3. Remove consonants from the word.\n";
    std::cout << "4. Shuffle the letters of the word.\n";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Reversed word: " << reverse(word) << std::endl;
        break;
    case 2:
        std::cout << "Word without vowels: " << removeVowels(word) << std::endl;
        break;
    case 3:
        std::cout << "Word without consonants: " << removeConsonants(word) << std::endl;
        break;
    case 4:
        std::cout << "Shuffled word: " << shuffle(word) << std::endl;
        break;
    default:
        std::cout << "Invalid choice.\n";
        break;
    }

    return 0;
}
