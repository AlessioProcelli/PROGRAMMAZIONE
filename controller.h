#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "directions.h"
#include "effectsinterface.h"
#include "model.h"
#include "shape.h"
#include "viewinterface.h"
#include <memory>

class Controller
{
public:
    Controller(Model *mod);
    void effectPressed(std::shared_ptr<EffectsInterface> effect);//Riceve il riferimento all'effetto premuto
    void shapePressed();//Sblocca le funzionalità di drawshape
    void paintPressed();//sblocca le funzionalità di disegno libero
    void drawShape(int x, int y, Brush &brush, std::shared_ptr<Shape> shape);/*ridisegna la figura
    in base alla posizione corrente del mouse*/
    void draw(int x, int y, Brush &brush);//disegna un punto nella posizione corrente del mouse
    void beginDrawing(int x, int y, Brush &brush);
    void beginShape(int x, int y, std::shared_ptr<Shape> shape);//disegna il punto di partenza della figura
    void openFile(QString filename);//apre i file
    void saveFile(QString filename);//Salva l'immagine in Png
    void undo();
    void redo();
    void enlargeResize(QPixmap &matrix, int scale);//ingrandisce l'immagine se troppo piccola
    void rotate(Direction direction);

private:
    QImage turnLeft(QImage &matrix);
    QImage turnRight(QImage &matrix);
    void reverse(QImage &matrix);
    bool isequal(QPixmap a, QPixmap b);
    Model *model;
};

#endif // CONTROLLER_H
