//#include "Drunkard.h"
//
//bool Player::isEmpty()
//{
//	return deck.isEmpty();
//}
//
//std::string Player::getName() const
//{
//	return name;
//}
//
//void Player::getCards(int card1, int card2)
//{
//	deck.push(card1);
//	deck.push(card2);
//}
//
//int Player::giveCard()
//{
//	int card = deck.peek();
//	deck.pop();
//	return card;
//}
//
//void Player::showHand()
//{
//	deck.print();
//}
//
//winner Drunkard::run()
//{
//	int moves = 0;
//	int card1 = -1;
//	std::cout << "move " << moves << '\n';
//	std::cout << "P1: "; player1.showHand();
//	std::cout << "P1: "; player2.showHand();
//	int card2 = -1;
//	while (!player1.isEmpty() && !player2.isEmpty())
//	{
//		
//		card1 = player1.giveCard();
//		card2 = player2.giveCard();
//		if ( card1 < card2 || card1 == 9 && card2 == 0)
//		{
//			player2.getCards(card1, card2);
//		}
//		else
//		{
//			player1.getCards(card1, card2);
//		}
//		++moves;
//
//		std::cout << "move " << moves << '\n';
//		std::cout << "P1: "; player1.showHand();
//		std::cout << "P1: "; player2.showHand();
//
//		if (moves > 1000)
//		{
//			return winner("botva", moves);
//		}
//	}
//
//	std::cout << "move " << moves << '\n';
//	std::cout << "P1: "; player1.showHand();
//	std::cout << "P1: "; player2.showHand();
//
//	if (player1.isEmpty())
//	{
//		return winner(player2.getName(), moves);
//	}
//	else
//	{
//		return winner(player1.getName(), moves);
//	}
//	
//}
