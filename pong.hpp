#ifndef MAIN_HPP_
#define MAIN_HPP_

#include <SDL2/SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

const int CENTER_WIDTH = 5;

const float MAX_ANGLE = 3.142 / 5.0; // 72 stepena

const float BALL_MAXSPEED = 8.0f;
const float BALL_ACCELERATE = 1.05f;
const float BALL_INIT_SPEED = 4.0f;
const int BALL_WIDTH = 10;
const int BALL_HEIGHT = 10;

void Initialise(SDL_Renderer **ren, SDL_Window **win);
void Cleanup(SDL_Renderer **ren, SDL_Window **win, SDL_GameController **controller);

#endif /* MAIN_HPP_ */
