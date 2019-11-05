#include "line.h"
#include <cmath>
#include <iostream>

Line::Line() {}
void Line::setStartCoordinates(int x, int y)
{
    xStart = x;
    yStart = y;
}

QPoint Line::getStartCoordinates()
{
    return QPoint(xStart, yStart);
}

void Line::draw(QPixmap &matrix, int x, int y, Brush &brush)//implementazione divisa il quadranti geometrici
{
    float angularCoefficient;
    if (x - xStart > 1 && y - yStart > 1) { //4° Quadrante
        angularCoefficient = computesAngularCoefficient(y, yStart, x, xStart);
        if (angularCoefficient > 5) {
            angularCoefficient = computesAngularCoefficient(xStart, x, y, yStart);
            for (int i = y - yStart; i >= 0; i--) {
                float xc = (angularCoefficient * i);
                xc = std::round(xc);
                brush.draw(matrix, xStart - xc, yStart + i);
            }
        } else {
            for (int i = 0; i <= x - xStart; i++) {
                float yc = (angularCoefficient * i);
                yc = std::round(yc);
                brush.draw(matrix, xStart + i, yStart + yc);
            }
        }
    }
    if (xStart - x > 1 && yStart - y > 1) { //2°Quadrante
        angularCoefficient = computesAngularCoefficient(yStart, y, xStart, x);
        if (angularCoefficient > 5) {
            angularCoefficient = computesAngularCoefficient(x, xStart, yStart, y);
            for (int i = yStart - y; i >= 0; i--) {
                float xc = (angularCoefficient * i);
                xc = std::round(xc);
                brush.draw(matrix, xStart + xc, yStart - i);
            }
        } else {
            for (int i = xStart - x; i >= 0; i--) {
                float yc = -(angularCoefficient * i);
                yc = std::round(yc);
                brush.draw(matrix, xStart - i, yStart + yc);
            }
        }
    }
    if (x - xStart > 1 && yStart - y > 1) { //1°Quadrante
        angularCoefficient = computesAngularCoefficient(yStart, y, x, xStart);
        if (angularCoefficient > 5) {
            angularCoefficient = computesAngularCoefficient(x, xStart, yStart, y);
            for (int i = yStart - y; i >= 0; i--) {
                float xc = (angularCoefficient * i);
                xc = std::round(xc);
                brush.draw(matrix, xStart + xc, yStart - i);
            }
        } else {
            for (int i = 0; i <= x - xStart; i++) {
                float yc = -(angularCoefficient * i);
                yc = std::round(yc);
                brush.draw(matrix, xStart + i, yStart + yc);
            }
        }
    }
    if (xStart - x > 1 && y - yStart > 1) { //3° Quadrante
        angularCoefficient = computesAngularCoefficient(y, yStart, xStart, x);
        if (angularCoefficient > 5) {
            angularCoefficient = computesAngularCoefficient(xStart, x, y, yStart);
            for (int i = y - yStart; i >= 0; i--) {
                float xc = (angularCoefficient * i);
                xc = std::round(xc);
                brush.draw(matrix, xStart - xc, yStart + i);
            }
        } else {
            for (int i = xStart - x; i >= 0; i--) {
                float yc = (angularCoefficient * i);
                yc = std::round(yc);
                brush.draw(matrix, xStart - i, yStart + yc);
            }
        }
    }
    //linea destra
    if (x - xStart > 0
        && ((y - yStart < 2 && y - yStart > -2) || (yStart - y > -2 && yStart - y < 2))) {
        for (int i = xStart; i <= x; i++) {
            brush.draw(matrix, i, yStart);
        }
    }
    //linea sinistra
    if (xStart - x > 0
        && ((y - yStart < 2 && y - yStart > -2) || (yStart - y > -2 && yStart - y < 2))) {
        for (int i = x; i <= xStart; i++) {
            brush.draw(matrix, i, yStart);
        }
    }
    //linea Basso
    if (y - yStart > 0
        && ((x - xStart < 2 && x - xStart > -2) || (xStart - x > -2 && xStart - x < 2))) {
        for (int i = yStart; i <= y; i++) {
            brush.draw(matrix, xStart, i);
        }
    }
    //linea Alto
    if (yStart - y > 0
        && ((x - xStart < 2 && x - xStart > -2) || (xStart - x > -2 && xStart - x < 2))) {
        for (int i = y; i <= yStart; i++) {
            brush.draw(matrix, xStart, i);
        }
    }
}

float Line::computesAngularCoefficient(float y2, float y1, float x2, float x1)
{
    float result = (y2 - y1) / (x2 - x1);
    return result;
}
