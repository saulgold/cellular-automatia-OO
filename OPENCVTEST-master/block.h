#ifndef BLOCK_H
#define BLOCK_H
#include <opencv2/core/core.hpp>

class block
{
public:
    block();
    int blockType;
    int blockAge;
    int deathAge;
    int randomDeathProbability;
    int breedingAge;
    cv::Vec3b blockColour;

    void setShark(void);
    void setFish(void);
    void setEmpty(void);
    ~block();
};

#endif // BLOCK_H
