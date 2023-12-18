#include <iostream>

//2

const int ALPHABET_SIZE = 26;

class TrieNode {
public:
    TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            children[i] = nullptr;
        }
    }
};

class Trie {
private:
    TrieNode* root;
public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(std::string word);

    void printAllWords();

    bool remove(std::string word);

    void printAllWordsThatStartWith(std::string prefix);

private:
    void printAllWords(TrieNode* node, std::string word);

    void printAllWordsThatStartWith(TrieNode* node, std::string prefix);
    bool remove(TrieNode* node, std::string& word, int level);
    bool isLastNode(TrieNode* node) const;
};