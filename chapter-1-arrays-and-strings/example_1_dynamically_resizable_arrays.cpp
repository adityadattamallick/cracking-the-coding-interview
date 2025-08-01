/**
 * Dynamically Resizable Arrays
 * In C++: Vector
 * In Java: ArrayList
 * In Python: List
 */

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> merge(std::vector<std::string> words, std::vector<std::string> more) {
    std::vector<std::string> sentence;
    for (const std::string &w: words) {
        sentence.push_back(w);
    }

    for (const std::string &m: more) {
        sentence.push_back(m);
    }

    return sentence;

}

int main() {
    std::vector<std::string> words = {"Hey", "There,"};
    std::vector<std::string> more_words = {"from", "the", "Mighty", "C++"};

    std::vector<std::string> result = merge(words, more_words);

    for (const std::string& word : result) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
