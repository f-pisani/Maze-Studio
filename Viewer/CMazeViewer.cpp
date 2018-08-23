#include "CMazeViewer.hpp"

CMazeViewer::CMazeViewer(CMaze& maze) :
    sf::RenderWindow(sf::VideoMode(1280, 720), "Maze Viewer"), m_maze(maze), m_view(getDefaultView())
{
    m_view.setCenter((m_maze.Width()*16/2), (m_maze.Height()*16/2));
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PUBLIC METHODS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CMazeViewer::Update()
{
    static bool dragDropView(false);
    static sf::Vector2f dragDropStart(0.f, 0.f);


    //******************************************************************************************************************
    // Events
    sf::Event event;
    while(pollEvent(event))
    {
        // Camera movements
        if(!dragDropView && event.type == sf::Event::MouseButtonPressed &&
            event.mouseButton.button == sf::Mouse::Left)
        {
            dragDropView = true;
            dragDropStart = sf::Vector2f(event.mouseButton.x, event.mouseButton.y);
        }
        else if(dragDropView && event.type == sf::Event::MouseButtonReleased &&
                event.mouseButton.button == sf::Mouse::Left)
        {
            dragDropView = false;
            m_view.move(dragDropStart.x-event.mouseButton.x, dragDropStart.y-event.mouseButton.y);
        }

        // Camera zoom
        if(event.type == sf::Event::MouseWheelScrolled)
        {
            if(event.mouseWheelScroll.delta > 0)
                m_view.zoom(0.95);
            else
                m_view.zoom(1.05);
        }

        if(event.type == sf::Event::Closed)
            close();
    }


    //******************************************************************************************************************
    // Graphics
    clear();
        DrawMaze();
        setView(m_view);
    display();
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PRIVATE METHODS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CMazeViewer::DrawMaze()
{
    for(int y=0; y<m_maze.Height(); ++y)
    {
        for(int x=0; x<m_maze.Width(); ++x)
        {
            SMazeCell cell(m_maze.GetWalls(x, y));
            sf::VertexArray vertex(sf::PrimitiveType::Lines, 2);
            vertex[0].color = sf::Color::Yellow;
            vertex[1].color = sf::Color::Yellow;

            if(cell.walls.test(CMaze::WallLeft))
            {
                vertex[0].position = sf::Vector2f(x*16, y*16);
                vertex[1].position = sf::Vector2f(x*16, y*16+16);

                draw(vertex);
            }

            if(cell.walls.test(CMaze::WallRight))
            {
                vertex[0].position = sf::Vector2f(x*16+16, y*16);
                vertex[1].position = sf::Vector2f(x*16+16, y*16+16);

                draw(vertex);
            }

            if(cell.walls.test(CMaze::WallTop))
            {
                vertex[0].position = sf::Vector2f(x*16, y*16);
                vertex[1].position = sf::Vector2f(x*16+16, y*16);

                draw(vertex);
            }

            if(cell.walls.test(CMaze::WallBottom))
            {
                vertex[0].position = sf::Vector2f(x*16, y*16+16);
                vertex[1].position = sf::Vector2f(x*16+16, y*16+16);

                draw(vertex);
            }
        }
    }
}
