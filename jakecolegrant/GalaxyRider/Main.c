#include <SDL.h>
#include <stdio.h>
const int SCREEN_WIDTH = 500;
const int SCREEN_HEIGHT = 800;
bool quit == false;
SDL_Event w;
int main(int argc, char* args[]){
    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;

    if (SDL_Init(SDL_INIT_VIDEO)< 0 )
{
        printf("Error, Bad stuff happened", SDL_GetError());
}
    else
{
    window = SDL_CreateWindow("StarStriders", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL){
        printf("Error, Uh oh", SDL_GetError());

    }
    else {
        screenSurface = SDL_GetWindowSurface(window);
        SDL_FillRect(screenSurface,NULL,SDL_MapRGB(screenSurface ->format, 0xFF, 0xFF, 0xFF));
        SDL_UpdateWindowSurface(window);
        while (!quit)
        {
            while (SDL_PollEvent(&w)!= 0)
            {
                if (w.type == SDL_QUIT)
                {
                    quit = true;
                }
                }
            }
            }
        }
           //Moves player when arrow keys pressed
        if(stdEvent->type == SDL_KEYDOWN) {
            if(stdEvent->key.keysym.sym == SDLK_DOWN) {
                playerRect.y += 1;
            }
        }
        if(stdEvent->type == SDL_KEYDOWN) {
            if(stdEvent->key.keysym.sym == SDLK_UP) {
                playerRect.y -= 1;
            }
        }
        if(stdEvent->type == SDL_KEYDOWN) {
            if(stdEvent->key.keysym.sym == SDLK_LEFT) {
                playerRect.x -= 1;
            }
        }
        if(stdEvent->type == SDL_KEYDOWN) {
            if(stdEvent->key.keysym.sym == SDLK_RIGHT) {
                playerRect.x += 1;
            }
        }
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
}





