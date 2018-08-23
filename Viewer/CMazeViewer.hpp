#ifndef CMAZEVIEWER_HPP_INCLUDED
#define CMAZEVIEWER_HPP_INCLUDED

#include <SFML/Graphics.hpp>

#include "../CMaze.hpp"

class CMazeViewer : public sf::RenderWindow
{
    public:
        CMazeViewer(CMaze& maze);
        void Update();

    private:
        CMaze& m_maze;
        sf::View m_view;

        void DrawMaze();
};

#endif // CMAZEVIEWER_HPP_INCLUDED
