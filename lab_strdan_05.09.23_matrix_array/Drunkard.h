//#pragma once
//#include "Queue.h"
////enum Suit 
////{
////    SPADES, CLUBS, DIAMONDS, HEARTS
////};
//
////enum Name
////{
////    SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
////};
//
//class Player
//{
//    Queue deck;
//    std::string name;
//public:
//    Player() : deck(), name("NONAME"){}
//    Player(const std::vector<int>& newDeck, std::string newName) : deck(newDeck), name(newName){}
//    bool isEmpty();
//    std::string getName() const;
//    void getCards(int card1, int card2);
//    int giveCard();
//    void showHand();
//};
//
//struct winner {
//    std::string name;
//    int moves;
//    winner(std::string n, int m)
//    {
//        name = n;
//        moves = m;
//    }
//};
//
//class Drunkard
//{
//    Player player1;
//    Player player2;   
//public:
//    Drunkard() : player1(), player2() {}
//    Drunkard(const std::vector<int>& newDeck1, std::string newName1,
//        const std::vector<int>& newDeck2, std::string newName2) 
//        : player1(newDeck1, newName1), player2(newDeck2, newName2) {}
//    winner run();
//};
//
