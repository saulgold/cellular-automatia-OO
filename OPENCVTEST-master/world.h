#ifndef WORLD_H
#define WORLD_H
#include <QVector>
#include "block.h"
#include <QImage>
#include<QPixmap>

class world
{
public:
    world(int worldWidth, int worldHeight,int sharkPercent, int fishPercent);
    int worldWidth;
    int worldHeight;
    int sharkPercent;
    int fishPercent;
    cv::Mat sharkFrame;
    QImage sharkImage;
    QPixmap sharkPix;

    QPixmap showWorld();

   // void worldInit(int worldWidth, int worldHeight,int sharkPercent, int fishPercent);
    block **ghoastWorld;
    ~world();

};

#endif // WORLD_H
