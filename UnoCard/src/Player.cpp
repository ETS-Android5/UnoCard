////////////////////////////////////////////////////////////////////////////////
//
// Uno Card Game
// Author: Hikari Toyama
// Compile Environment: Qt 5 with Qt Creator
// COPYRIGHT HIKARI TOYAMA, 1992-2022. ALL RIGHTS RESERVED.
//
////////////////////////////////////////////////////////////////////////////////

#include <vector>
#include <Card.h>
#include <Color.h>
#include <Player.h>

/**
 * @return This player's all hand cards.
 */
const std::vector<Card*>& Player::getHandCards() {
    return handCards;
} // getHandCards()

/**
 * Calculate the total score of this player's hand cards. According to the
 * official rule, Wild Cards are worth 50 points, Action Cards are worth 20
 * points, and Number Cards are worth points that equals to the number.
 *
 * @return Score of this player's hand cards.
 */
int Player::getHandScore() {
    int score = 0;
    for (Card* card : handCards) {
        switch (card->content) {
        case WILD:
        case WILD_DRAW4:
            score += 50;
            break; // case WILD, WILD_DRAW4

        case REV:
        case SKIP:
        case DRAW2:
            score += 20;
            break; // case REV, SKIP, DRAW2

        default: // Number Cards
            score += int(card->content);
            break; // default
        } // switch (card->content)
    } // for (Card* card : handCards)

    return score;
} // getHandScore()

/**
 * @return How many cards in this player's hand.
 */
int Player::getHandSize() {
    return int(handCards.size());
} // getHandSize()

/**
 * When this player played a wild card, record the color specified, as this
 * player's strong color. The strong color will be remembered until this
 * player played a number of card matching that color. You can use this
 * value to defend this player's UNO dash.
 *
 * @return This player's strong color, or Color::NONE if no available
 *         strong color.
 */
Color Player::getStrongColor() {
    return strongColor;
} // getStrongColor()

/**
 * When this player draw a card in action, record the previous played card's
 * color, as this player's weak color. What this player did means that this
 * player probably do not have cards in that color. You can use this value
 * to defend this player's UNO dash.
 *
 * @return This player's weak color, or Color::NONE if no available weak
 *         color.
 */
Color Player::getWeakColor() {
    return weakColor;
} // getWeakColor()

/**
 * @return This player's recent played card, or nullptr if this player drew
 *         one or more cards in its previous action.
 */
Card* Player::getRecent() {
    return recent;
} // getRecent()

// E.O.F