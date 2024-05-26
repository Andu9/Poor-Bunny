#ifndef OOP_GAME_H
#define OOP_GAME_H

#include "../Headers/Player.h"
#include "../Headers/GoldenCarrot.h"
#include "../Headers/Arrow.h"
#include "../Headers/Cannonball.h"
#include "../Headers/SpikeyBall.h"

#include <SFML/Graphics.hpp>

class Game {
    private:
        sf::RenderWindow* window;

        sf::Texture texture;
        sf::Sprite background;

        Thing* player;

        std::array<Thing, 8> platforms;

        sf::Font font;

        sf::Text currentScore;
        sf::Text currentHealth;

        Arrow currentArrow;
        Carrot currentCarrot;
        GoldenCarrot goldenCarrot;

        bool lost, pause;

        sf::Clock timer;
        sf::Clock totalTimer;
        std::vector<FiniteChoice *> traps;
        std::vector<int> choices;

        static int getRandom(int Maxim);

    public:
        Game();
        Game(const Game& oth);
        Game& operator=(const Game& oth);

        void drawThings();
        void run();
        void drawLost();
        void reset();
        void drawPause();

};

#endif
