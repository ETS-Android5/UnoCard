////////////////////////////////////////////////////////////////////////////////
//
// Uno Card Game
// Author: Hikari Toyama
// Compile Environment: Qt 5 with Qt Creator
// COPYRIGHT HIKARI TOYAMA, 1992-2022. ALL RIGHTS RESERVED.
//
////////////////////////////////////////////////////////////////////////////////

#include <Card.h>
#include <Color.h>
#include <Content.h>
#include <opencv2/core.hpp>

/**
 * Constructor. Provide parameters for an Uno card and create its instance.
 */
Card::Card(cv::Mat image, cv::Mat darkImg,
    Color color, Content content, const char* name) :
    name(name),
    color(color),
    image(image),
    darkImg(darkImg),
    content(content),
    order((color << 8) | content) {
} // Card(Mat, Mat, Color, Content, const char*) (Class Constructor)

/**
 * @return Card's color.
 * @deprecated Please access this->color directly.
 */
[[deprecated]]
Color Card::getRealColor() {
    return color;
} // getRealColor()

/**
 * @return Whether the card is a [wild] or [wild +4].
 */
bool Card::isWild() {
    return content == WILD || content == WILD_DRAW4;
} // isWild()

// E.O.F