//
// Created by hector on 31/10/22.
//

#ifndef RAYCASTING_APP_H
#define RAYCASTING_APP_H

#include <memory>
#include "World.h"
#include <SDL2/SDL.h>
#include <vector>
#include "Renderer.h"
#include <iostream>
#include "FileReader.h"
#include "Input.h"

class App {
private:
    bool _running;

    static std::unique_ptr<World> _world;

public:
    App();
    virtual ~App();

    int onExecute();

    bool onInit();

    void onEvent(SDL_Event* event);

    void onLoop();

    void onRender();

    void onCleanup();

    void exit();

};


#endif //RAYCASTING_APP_H
