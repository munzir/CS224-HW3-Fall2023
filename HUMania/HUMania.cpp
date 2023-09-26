#include<iostream>
#include "HUMania.hpp"
#include <vector>
using namespace std;

Unit pigeon = {{7,88,155,103}, {30, 40, 50, 50}};
// First rectangle is srcRect, second is moverRect
// these values are taken from the corresponding image in assets file
// use spritecow.com to find exact values of other asset images



vector<Unit> pigeons;
//create 2 more vectors for bees and butterflies

void drawObjects(SDL_Renderer* gRenderer, SDL_Texture* assets){

    // this functios is drawing one pigeon only right now
    SDL_RenderCopy(gRenderer, assets, &pigeon.srcRect, &pigeon.moverRect);


    // TODO: Write code to iterate over all the vectors and draw objects here: 
    
    
    pigeon.moverRect.x+=2; // moves the pigeon two pixel towards right
    // changing the srcRect to other positions of pigeon will make the fly animation
    // SDL_RenderPresent is already called in game.cpp file, you don't need to call here
}

void createObject(int x, int y){

    // TODO: create an object randomly, and push it into corresponding vector
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
}

