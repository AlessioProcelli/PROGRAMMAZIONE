#ifndef BASEEFFECT_H
#define BASEEFFECT_H
#include "QColor"
#include "QImage"
#include "effectsinterface.h"

class BaseEffect : public EffectsInterface
{
public:
    enum class effect { Blur, Sharpening, EdgeDetection, Contrast };
    BaseEffect(enum effect e);
    void virtual apply(QPixmap &originalmatrix); /*la matrice viene trasformata in un
    immagine per poter lavorare con l'rgb dei pixel separatamente*/

private:
    void processing(QImage &img, int height, int width); //effettiva manipolazione della matrice
    void processingBlur(QImage &img,int height, int width); //manipolazione per effetto blur che necessita del divisore a 9
    int divisore;
    float **matrixeffect;
};

#endif // BASEEFFECT_H
