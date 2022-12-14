//
// Created by hector on 31/10/22.
//

#ifndef RAYCASTING_RENDERER_H
#define RAYCASTING_RENDERER_H

#include <SDL2/SDL.h>
#include <memory>
#include <iostream>
#include "Color.h"

class Renderer {
private:
    static std::unique_ptr<Renderer> _instance;
    SDL_Window * _window;
    SDL_Renderer * _renderer;

    const unsigned int _WIN_HEIGHT = 720;
    const unsigned int _WIN_WIDTH  = 1280;

public:
    Renderer();
    virtual ~Renderer();

    Renderer(const Renderer &) = delete;
    Renderer & operator=(const Renderer &) = delete;

    static const Renderer & getInstance();

    SDL_Window * getSDLWindow() const {
        return _window;
    }

    SDL_Renderer * getSDLRenderer() const {
        return _renderer;
    }

    void clear() const;

    void renderPresent() const;

    void drawLine(int, int, int, int, Color&) const;

    void drawSquare(int, int, int, Color&) const;

};


#endif //RAYCASTING_RENDERER_H
