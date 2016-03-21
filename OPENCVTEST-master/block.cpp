#include "block.h"

block::block()
{
   setEmpty();
}

void block::setFish(void){
    blockType = 1;
    blockAge = 1;
    breedingAge = 2;
    deathAge = 10;
    randomDeathProbability = 1/32;
    blockColour = cv::Vec3b(100,0,0);

}

void block::setShark(void){
    blockType = 2;
    blockAge = 1;
    breedingAge = 2;
    deathAge = 10;
    randomDeathProbability = 0;
    blockColour = cv::Vec3b(0,0,100);

}

void block::setEmpty(void){
    blockType = 0;
    blockAge = 1;
    breedingAge = 0;
    deathAge = 0;
    randomDeathProbability = 0;
    blockColour = cv::Vec3b(0,0,0);

}

block::~block(){
    delete this;
}
