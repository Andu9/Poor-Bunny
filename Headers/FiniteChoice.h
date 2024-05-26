#ifndef OOP_FINITECHOICE_H
#define OOP_FINITECHOICE_H

#include <vector>
#include <utility>

#include "Trap.h"

#include <utility>

class FiniteChoice : public Trap {
    protected:
        bool hasCollided;

        static std::vector<std::pair<float, float>> choices1;
        static std::vector<std::pair<float, float>> choices2;

        static int getRandom(int Max);

    public:

        virtual void spawn() = 0;
        virtual void move(sf::RenderWindow& window) = 0;
        virtual FiniteChoice* clone() const = 0;

        bool getHasCollided() const;
        void setHasCollided(bool _hasCollided);

        std::pair<float, float> choose(int which);
        explicit FiniteChoice(const std::vector<std::pair<float, float>>& _choices, const std::string& fileName, int which);
};

#endif


