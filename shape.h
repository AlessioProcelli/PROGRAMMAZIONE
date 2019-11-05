#ifndef SHAPE_H
#define SHAPE_H
#include "brush.h"
#include <QPixmap>
class Shape
{
public:
    virtual ~Shape() {}
    void virtual draw(QPixmap &matrix, int x, int y, Brush &brush) = 0;
    void virtual setStartCoordinates(int x, int y) = 0;
    QPoint virtual getStartCoordinates() = 0;
};

#endif // SHAPE_H
