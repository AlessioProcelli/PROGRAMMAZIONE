#ifndef MODEL_H
#define MODEL_H
#include "brush.h"
#include "directions.h"
#include "subject.h"
#include <QGraphicsScene>
#include <QList>

const int widthGraphicsView = 839;
const int heightGraphicsView = 613;

class Model : Subject
{
public:
    Model();
    void addState(QPixmap lastview); //aggiungere il nuovo stato alla lista
    void removeState();              //rimuove lo stato corrente e lo aggiunge negli stati eliminati
    void cleanDeletedState();        //Svuota la lista degli stati eliminati
    void removeDeletedState();       //elimina lo stato eliminato più recente
    QPixmap getCurrentDeletedState();
    QPixmap getNextDeletedStated(); //ritorna lo stato che si aspetta il prossimo a essere eliminato
    void removeStatePermanently();  //rimuove lo stato corrente definitivamente
    void setNextDeletedStated(QPixmap pix);
    void restoreState();        //ripristina l'ultima pixMap
    QPixmap *getCurrentState(); //rende la vista corrente
    void virtual addObserver(Observer *o);
    void virtual removeObserver(Observer *o);
    void virtual notify();         //implementazione Observer
    void setDrawing(bool allowed); //Autorizza Disegno
    bool getDrawing();
    void setShape(bool allowed); //Autorizza DisegnoFigura
    bool getShape();

private:
    std::list<QPixmap> state;         // lo stato di tutte le cose fatte
    std::list<QPixmap> deletedStated; //matiene gli stati eliminati
    QPixmap nextDeletedStated;        //mantiene lo stato che si aspetta di trovare per rendo o undo
    std::list<Observer *> observers;  // lista osservatori
    bool allowDrawing = false;        //verificare se può disegnare
    bool allowShape = false;
};

#endif // MODEL_H
