#include "Trie.h"

void Trie::insert(std::string word)
{
    TrieNode* current = root;
    for (char c : word) {
        int index = c - 'a';
        if (!current->children[index])
        {
            current->children[index] = new TrieNode();
        }
        current = current->children[index];
    }
    current->isEndOfWord = true;
}

void Trie::printAllWords()
{
    std::string word;
    printAllWords(root, word);
}

bool Trie::remove(std::string word)
{
    return remove(root, word, 0);
}

void Trie::printAllWordsThatStartWith(std::string prefix)
{
    std::string resultPrefix = "";
    TrieNode* current = root;
    for (char c : prefix) {
        int index = c - 'a';
        if (!current->children[index]) {
            std::cout << "No words found with the given prefix" << '\n';
            return;
        }
        else {
            resultPrefix += c;
            current = current->children[index];
        }
    }
    printAllWordsThatStartWith(current, resultPrefix);
}

void Trie::printAllWords(TrieNode* node, std::string word)
{
    if (node->isEndOfWord) {
        std::cout << word << '\n';
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (node->children[i]) {
            char c = 'a' + i;
            printAllWords(node->children[i], word + c);
        }
    }
}

void Trie::printAllWordsWithSuffix(const std::string& suffix)
{
    std::string word;
    printAllWordsWithSuffix(root, word, suffix);
}

void Trie::printAllWordsWithSuffix(TrieNode* node, std::string word, const std::string& suffix)
{
    if (node->isEndOfWord) {
        if((int)word.rfind(suffix) == word.length() - suffix.length())
            std::cout << word << '\n';
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (node->children[i]) {
            char c = 'a' + i;
            printAllWordsWithSuffix(node->children[i], word + c, suffix);
        }
    }
}

void Trie::printAllWordsThatStartWith(TrieNode* node, std::string prefix)
{
    if (node == nullptr) {
        return;
    }
    else {
        if (node->isEndOfWord) {
            std::cout << prefix << '\n';
        }

        for (int i = 0; i < ALPHABET_SIZE; i++) {
            char c = 'a' + i;
            printAllWordsThatStartWith(node->children[i], prefix + c);
        }
    }
}

bool Trie::remove(TrieNode* node, std::string& word, int level)
{
    if (level == word.length()) {
        if (!node->isEndOfWord) 
            return false;
        node->isEndOfWord = false;
        return isLastNode(node);
    }
    else {
        int index = word[level] - 'a';
        if (!node->children[index]) 
            return false;
        bool shouldDeleteCurrentNode = remove(node->children[index], word, level + 1);
        if (shouldDeleteCurrentNode && !node->isEndOfWord) {
            delete node->children[index];
            node->children[index] = nullptr;
            return !isLastNode(node);
        }
        return false;
    }
}

bool Trie::isLastNode(TrieNode* node) const
{
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (node->children[i])
        {
            return false;
        }
    }
    return true;
}




