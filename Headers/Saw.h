#ifndef OOP_SAW_H
#define OOP_SAW_H

#include "FiniteChoice.h"

class Saw : public FiniteChoice {
    private:
        int signOnGround, signFly;
        bool onGround;
        std::pair<float, float> initialPosition;
        bool hasCollided;

    public:
        Saw();
        void spawn();
        void move(sf::RenderWindow& window);
        void resetCoordinates();
        bool getHasCollided() const;
        void setHasCollided(bool collided);
};

#endif
