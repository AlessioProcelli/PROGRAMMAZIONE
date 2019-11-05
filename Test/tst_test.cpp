#include "../baseeffect.cpp"
#include "../baseeffect.h"
#include "../brush.cpp"
#include "../brush.h"
#include "../line.cpp"
#include "../line.h"
#include "../rectangle.cpp"
#include "../rectangle.h"
#include "../triangle.cpp"
#include "../triangle.h"
#include <iostream>
#include <QFile>
#include <QObject>
#include <QtTest>

// add necessary includes here

class Test : public QObject
{
    Q_OBJECT

public:
    Test();
    ~Test();
    QImage turnRight(QImage &image);
    QImage turnLeft(QImage &image);
    void reverse(QImage &image);

private slots:
    void test_blur();
    void test_sharpening();
    void test_edgeDetection();
    void test_contrast();
    void test_turnRight();
    void test_turnLeft();
    void test_revese();
    void test_rectangle();
    void test_line();
    void test_triangle();
};

Test::Test() {}

Test::~Test() {}

void Test::test_blur()
{
    BaseEffect blur(BaseEffect::effect::Blur);
    QImage testImage(9, 9, QImage::Format_RGB32);
    testImage.fill(QColor(200, 200, 200, 200));
    QPixmap pixmap;
    pixmap.convertFromImage(testImage);
    blur.apply(pixmap);
    QImage imageWithEffect;
    imageWithEffect = pixmap.toImage();
    QCOMPARE(testImage, imageWithEffect);
}

void Test::test_sharpening()
{
    BaseEffect sharpening(BaseEffect::effect::Sharpening);
    QImage testImage(6, 6, QImage::Format_RGB32);
    testImage.fill(QColor(1, 1, 1, 1));
    QPixmap pixmap;
    pixmap.convertFromImage(testImage);
    sharpening.apply(pixmap);
    QImage imageWithEffect;
    imageWithEffect = pixmap.toImage();
    /*Riempimento Con valori Attesi */
    testImage.setPixelColor(0, 0, QColor(4, 4, 4, 4));
    testImage.setPixelColor(0, 1, QColor(3, 3, 3, 3));
    testImage.setPixelColor(0, 2, QColor(3, 3, 3, 3));
    testImage.setPixelColor(0, 3, QColor(3, 3, 3, 3));
    testImage.setPixelColor(0, 4, QColor(3, 3, 3, 3));
    testImage.setPixelColor(0, 5, QColor(4, 4, 4, 4));
    testImage.setPixelColor(1, 0, QColor(3, 3, 3, 3));
    testImage.setPixelColor(2, 0, QColor(3, 3, 3, 3));
    testImage.setPixelColor(3, 0, QColor(3, 3, 3, 3));
    testImage.setPixelColor(4, 0, QColor(3, 3, 3, 3));
    testImage.setPixelColor(5, 0, QColor(4, 4, 4, 4));
    testImage.setPixelColor(5, 1, QColor(3, 3, 3, 3));
    testImage.setPixelColor(5, 2, QColor(3, 3, 3, 3));
    testImage.setPixelColor(5, 3, QColor(3, 3, 3, 3));
    testImage.setPixelColor(5, 4, QColor(3, 3, 3, 3));
    testImage.setPixelColor(5, 5, QColor(4, 4, 4, 4));
    testImage.setPixelColor(1, 5, QColor(3, 3, 3, 3));
    testImage.setPixelColor(2, 5, QColor(3, 3, 3, 3));
    testImage.setPixelColor(3, 5, QColor(3, 3, 3, 3));
    testImage.setPixelColor(4, 5, QColor(3, 3, 3, 3));
    QCOMPARE(testImage, imageWithEffect);
}

void Test::test_edgeDetection()
{
    BaseEffect edgeDetection(BaseEffect::effect::EdgeDetection);
    QImage testImage(4, 4, QImage::Format_RGB32);
    testImage.fill(QColor(1, 1, 1, 1));
    QPixmap pixmap;
    pixmap.convertFromImage(testImage);
    edgeDetection.apply(pixmap);
    QImage imageWithEffect;
    imageWithEffect = pixmap.toImage();
    testImage.setPixelColor(0, 0, QColor(0, 0, 0, 0));
    testImage.setPixelColor(1, 0, QColor(0, 0, 0, 0));
    testImage.setPixelColor(2, 0, QColor(0, 0, 0, 0));
    testImage.setPixelColor(3, 0, QColor(0, 0, 0, 0));
    testImage.setPixelColor(0, 1, QColor(0, 0, 0, 0));
    testImage.setPixelColor(1, 1, QColor(0, 0, 0, 0));
    testImage.setPixelColor(2, 1, QColor(0, 0, 0, 0));
    testImage.setPixelColor(3, 1, QColor(0, 0, 0, 0));
    testImage.setPixelColor(0, 2, QColor(0, 0, 0, 0));
    testImage.setPixelColor(1, 2, QColor(0, 0, 0, 0));
    testImage.setPixelColor(2, 2, QColor(0, 0, 0, 0));
    testImage.setPixelColor(3, 2, QColor(0, 0, 0, 0));
    testImage.setPixelColor(0, 3, QColor(3, 3, 3, 3));
    testImage.setPixelColor(1, 3, QColor(4, 4, 4, 4));
    testImage.setPixelColor(2, 3, QColor(4, 4, 4, 4));
    testImage.setPixelColor(3, 3, QColor(3, 3, 3, 3));
    QCOMPARE(testImage, imageWithEffect);
}

void Test::test_contrast()
{
    BaseEffect contrast(BaseEffect::effect::Contrast);
    QImage testImage(4, 4, QImage::Format_RGB32);
    testImage.fill(QColor(1, 1, 1, 1));
    QPixmap pixmap;
    pixmap.convertFromImage(testImage);
    contrast.apply(pixmap);
    QImage imageWithEffect;
    imageWithEffect = pixmap.toImage();
    testImage.setPixelColor(0, 0, QColor(3, 3, 3, 3));
    testImage.setPixelColor(1, 0, QColor(2, 2, 2, 2));
    testImage.setPixelColor(2, 0, QColor(2, 2, 2, 2));
    testImage.setPixelColor(3, 0, QColor(3, 3, 3, 3));
    testImage.setPixelColor(0, 1, QColor(2, 2, 2, 2));
    testImage.setPixelColor(3, 1, QColor(2, 2, 2, 2));
    testImage.setPixelColor(0, 2, QColor(2, 2, 2, 2));
    testImage.setPixelColor(3, 2, QColor(2, 2, 2, 2));
    testImage.setPixelColor(0, 3, QColor(3, 3, 3, 3));
    testImage.setPixelColor(1, 3, QColor(2, 2, 2, 2));
    testImage.setPixelColor(2, 3, QColor(2, 2, 2, 2));
    testImage.setPixelColor(3, 3, QColor(3, 3, 3, 3));
    QCOMPARE(testImage, imageWithEffect);
}

void Test::test_turnRight()
{
    QImage testImage(4, 4, QImage::Format_RGB32);
    testImage.fill(QColor(1, 1, 1, 1));
    testImage.setPixelColor(0, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(1, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(2, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(3, 0, QColor(7, 7, 7, 7));
    QImage rotateImage = Test::turnRight(testImage);
    testImage.fill(QColor(1, 1, 1, 1));
    testImage.setPixelColor(3, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(3, 1, QColor(7, 7, 7, 7));
    testImage.setPixelColor(3, 2, QColor(7, 7, 7, 7));
    testImage.setPixelColor(3, 3, QColor(7, 7, 7, 7));
    QCOMPARE(testImage, rotateImage);
}

QImage Test::turnRight(QImage &matrix)
{
    int height = matrix.height();
    int width = matrix.width();
    QImage rotateImg(height, width, QImage::Format_RGB32);
    for (int j = height - 1, originalY = 0; j >= 0; j--, originalY++) {
        for (int i = 0; i < width; i++) {
            rotateImg.setPixel(j, i, matrix.pixel(i, originalY));
        }
    }
    return rotateImg;
}

void Test::test_turnLeft()
{
    QImage testImage(4, 4, QImage::Format_RGB32);
    testImage.fill(QColor(1, 1, 1, 1));
    testImage.setPixelColor(0, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(1, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(2, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(3, 0, QColor(7, 7, 7, 7));
    QImage rotateImage = Test::turnLeft(testImage);
    testImage.fill(QColor(1, 1, 1, 1));
    testImage.setPixelColor(0, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(0, 1, QColor(7, 7, 7, 7));
    testImage.setPixelColor(0, 2, QColor(7, 7, 7, 7));
    testImage.setPixelColor(0, 3, QColor(7, 7, 7, 7));
    QCOMPARE(testImage, rotateImage);
}

QImage Test::turnLeft(QImage &matrix)
{
    int height = matrix.height();
    int width = matrix.width();
    QImage rotateImg(height, width, QImage::Format_RGB32);
    for (int j = 0; j < height; j++) {
        for (int i = width - 1, originalJ = 0; i >= 0; i--, originalJ++) {
            rotateImg.setPixel(j, i, matrix.pixel(originalJ, j));
        }
    }
    return rotateImg;
}

void Test::test_revese()
{
    QImage testImage(4, 4, QImage::Format_RGB32);
    testImage.fill(QColor(1, 1, 1, 1));
    testImage.setPixelColor(0, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(1, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(2, 0, QColor(7, 7, 7, 7));
    testImage.setPixelColor(3, 0, QColor(7, 7, 7, 7));
    QImage rotateImage(4, 4, QImage::Format_RGB32);
    rotateImage.fill(QColor(1, 1, 1, 1));
    rotateImage.setPixelColor(0, 0, QColor(7, 7, 7, 7));
    rotateImage.setPixelColor(1, 0, QColor(7, 7, 7, 7));
    rotateImage.setPixelColor(2, 0, QColor(7, 7, 7, 7));
    rotateImage.setPixelColor(3, 0, QColor(7, 7, 7, 7));
    Test::reverse(rotateImage);
    testImage.fill(QColor(1, 1, 1, 1));
    testImage.setPixelColor(0, 3, QColor(7, 7, 7, 7));
    testImage.setPixelColor(1, 3, QColor(7, 7, 7, 7));
    testImage.setPixelColor(2, 3, QColor(7, 7, 7, 7));
    testImage.setPixelColor(3, 3, QColor(7, 7, 7, 7));
    QCOMPARE(testImage, rotateImage);
}

void Test::reverse(QImage &matrix)
{
    int height = matrix.height();
    int width = matrix.width();
    QImage rotateImg(width, height, QImage::Format_RGB32);
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            rotateImg.setPixel(width - 1 - i, height - 1 - j, matrix.pixel(i, j));
        }
    }
    matrix = rotateImg;
}

void Test::test_rectangle()
{
    QImage testImage(4, 4, QImage::Format_RGB32);
    testImage.fill(QColor(1, 1, 1, 1));
    QPixmap matrix;
    matrix.convertFromImage(testImage);
    QPixmap matrix_test2;
    matrix_test2.convertFromImage(testImage);
    QPixmap matrix_test3;
    matrix_test3.convertFromImage(testImage);
    QPixmap matrix_test4;
    matrix_test4.convertFromImage(testImage);
    Rectangle rect;
    rect.setStartCoordinates(1, 1);
    QVERIFY2(rect.getStartCoordinates().x() == 1, "cordinata x sbagliata");
    QVERIFY2(rect.getStartCoordinates().y() == 1, "cordinata y sbagliata");
    Brush brush;
    brush.setTickness(1);
    rect.draw(matrix, 3, 3, brush);
    testImage.setPixelColor(1, 1, QColor(0, 0, 0, 0));
    testImage.setPixelColor(1, 2, QColor(0, 0, 0, 0));
    testImage.setPixelColor(1, 3, QColor(0, 0, 0, 0));
    testImage.setPixelColor(2, 1, QColor(0, 0, 0, 0));
    testImage.setPixelColor(3, 1, QColor(0, 0, 0, 0));
    testImage.setPixelColor(3, 2, QColor(0, 0, 0, 0));
    testImage.setPixelColor(3, 3, QColor(0, 0, 0, 0));
    testImage.setPixelColor(2, 3, QColor(0, 0, 0, 0));
    QImage drawedImage(matrix.toImage());
    QCOMPARE(drawedImage, testImage);
    QVERIFY2(rect.getArea() == 9, "Area Sbagliata");
    /*verifica disegno al contrario*/
    rect.setStartCoordinates(3, 3);
    QVERIFY2(rect.getStartCoordinates().x() == 3, "cordinata x sbagliata:test Contrario");
    QVERIFY2(rect.getStartCoordinates().y() == 3, "cordinata y sbagliata:test Contrario");
    rect.draw(matrix_test2, 1, 1, brush);
    QImage drawedImageInverse(matrix_test2.toImage());
    QCOMPARE(drawedImageInverse, testImage);
    QVERIFY2(rect.getArea() == 9, "Area Sbagliata:test Contrario");
    /*verifica angolo destro*/
    rect.setStartCoordinates(1, 3);
    QVERIFY2(rect.getStartCoordinates().x() == 1, "cordinata x sbagliata:test Contrario");
    QVERIFY2(rect.getStartCoordinates().y() == 3, "cordinata y sbagliata:test Contrario");
    rect.draw(matrix_test3, 3, 1, brush);
    QImage drawedImage_test3(matrix_test3.toImage());
    QCOMPARE(drawedImage_test3, testImage);
    QVERIFY2(rect.getArea() == 9, "Area Sbagliata:test Contrario");
    /*verifica inverso angolo destro*/
    rect.setStartCoordinates(3, 1);
    QVERIFY2(rect.getStartCoordinates().x() == 3, "cordinata x sbagliata:test Contrario");
    QVERIFY2(rect.getStartCoordinates().y() == 1, "cordinata y sbagliata:test Contrario");
    rect.draw(matrix_test4, 1, 3, brush);
    QImage drawedImage_test4(matrix_test4.toImage());
    QCOMPARE(drawedImage_test4, testImage);
    QVERIFY2(rect.getArea() == 9, "Area Sbagliata:test Contrario");
}

void Test::test_line()
{
    QImage test_image(4, 4, QImage::Format_RGB32);
    test_image.fill(QColor(1, 1, 1, 1));
    QPixmap matrix_straightTest;
    matrix_straightTest.convertFromImage(test_image);
    QPixmap matrix_straightTestInverse;
    matrix_straightTestInverse.convertFromImage(test_image);
    Brush brush;
    brush.setTickness(1);
    test_image.setPixelColor(1, 0, QColor(0, 0, 0));
    test_image.setPixelColor(1, 1, QColor(0, 0, 0));
    test_image.setPixelColor(1, 2, QColor(0, 0, 0));
    test_image.setPixelColor(1, 3, QColor(0, 0, 0));
    Line line;
    /*linea diritta e inverso*/
    line.setStartCoordinates(1, 0);
    line.draw(matrix_straightTest, 1, 3, brush);
    QImage drawedImage_test1(matrix_straightTest.toImage());
    QCOMPARE(drawedImage_test1, test_image);
    line.setStartCoordinates(1, 3);
    line.draw(matrix_straightTestInverse, 1, 0, brush);
    QImage drawedImage_test2(matrix_straightTestInverse.toImage());
    QCOMPARE(drawedImage_test2, test_image);
    /*test linea obliqua e inverso*/
    test_image.fill(QColor(1, 1, 1, 1));
    QPixmap matrix_obliqueTest;
    matrix_obliqueTest.convertFromImage(test_image);
    test_image.setPixelColor(0, 0, QColor(0, 0, 0));
    test_image.setPixelColor(1, 1, QColor(0, 0, 0));
    test_image.setPixelColor(2, 2, QColor(0, 0, 0));
    test_image.setPixelColor(3, 3, QColor(0, 0, 0));
    line.setStartCoordinates(0, 0);
    line.draw(matrix_obliqueTest, 3, 3, brush);
    QImage drawedImage_test3(matrix_obliqueTest.toImage());
    QCOMPARE(drawedImage_test3, test_image);
    QPixmap matrix_obliqueTestInverse;
    matrix_obliqueTestInverse.convertFromImage(test_image);
    line.setStartCoordinates(3, 3);
    line.draw(matrix_obliqueTestInverse, 0, 0, brush);
    QImage drawedImage_test4(matrix_obliqueTestInverse.toImage());
    QCOMPARE(drawedImage_test4, test_image);
    /*test linea obliqua e inverso (altro angolo)*/
    test_image.fill(QColor(1, 1, 1, 1));
    QPixmap matrix_obliqueTest2;
    matrix_obliqueTest2.convertFromImage(test_image);
    test_image.setPixelColor(0, 3, QColor(0, 0, 0));
    test_image.setPixelColor(1, 2, QColor(0, 0, 0));
    test_image.setPixelColor(2, 1, QColor(0, 0, 0));
    test_image.setPixelColor(3, 0, QColor(0, 0, 0));
    line.setStartCoordinates(0, 3);
    line.draw(matrix_obliqueTest2, 3, 0, brush);
    QImage drawedImage_test5(matrix_obliqueTest2.toImage());
    QCOMPARE(drawedImage_test5, test_image);
    QPixmap matrix_obliqueTestInverse2;
    matrix_obliqueTestInverse2.convertFromImage(test_image);
    line.setStartCoordinates(3, 0);
    line.draw(matrix_obliqueTestInverse2, 0, 3, brush);
    QImage drawedImage_test6(matrix_obliqueTestInverse2.toImage());
    QCOMPARE(drawedImage_test6, test_image);
}

void Test::test_triangle()
{
    QImage test_image(5, 5, QImage::Format_RGB32);
    test_image.fill(QColor(1, 1, 1, 1));
    QPixmap matrix;
    matrix.convertFromImage(test_image);
    QPixmap matrix_inverse;
    matrix_inverse.convertFromImage(test_image);
    Brush brush;
    brush.setTickness(1);
    Triangle triangle;
    triangle.setStartCoordinates(0, 4);
    triangle.draw(matrix, 4, 0, brush);
    QImage drawedImage_test(matrix.toImage());
    test_image.setPixelColor(0, 4, QColor(0, 0, 0, 0));
    test_image.setPixelColor(1, 2, QColor(0, 0, 0, 0));
    test_image.setPixelColor(1, 4, QColor(0, 0, 0, 0));
    test_image.setPixelColor(2, 0, QColor(0, 0, 0, 0));
    test_image.setPixelColor(2, 4, QColor(0, 0, 0, 0));
    test_image.setPixelColor(3, 2, QColor(0, 0, 0, 0));
    test_image.setPixelColor(3, 4, QColor(0, 0, 0, 0));
    test_image.setPixelColor(4, 4, QColor(0, 0, 0, 0));
    QCOMPARE(drawedImage_test, test_image);
    /*Al Contrario*/
    triangle.setStartCoordinates(4, 0);
    triangle.draw(matrix_inverse, 0, 4, brush);
    test_image.fill(QColor(1, 1, 1, 1));
    test_image.setPixelColor(0, 0, QColor(0, 0, 0, 0));
    test_image.setPixelColor(1, 0, QColor(0, 0, 0, 0));
    test_image.setPixelColor(2, 0, QColor(0, 0, 0, 0));
    test_image.setPixelColor(3, 0, QColor(0, 0, 0, 0));
    test_image.setPixelColor(4, 0, QColor(0, 0, 0, 0));
    test_image.setPixelColor(1, 2, QColor(0, 0, 0, 0));
    test_image.setPixelColor(2, 4, QColor(0, 0, 0, 0));
    test_image.setPixelColor(3, 2, QColor(0, 0, 0, 0));
    QImage drawedImage_test_Inverse = matrix_inverse.toImage();
    QCOMPARE(drawedImage_test_Inverse, test_image);
}

QTEST_MAIN(Test)

#include "tst_test.moc"
