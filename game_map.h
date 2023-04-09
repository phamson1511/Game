#ifndef GAME_MAP_H_
#define GAME_MAP_H_

#include"CommonFuns.h"
#include"BaseObject.h"

#define MAX_TILES 20


class TileMat :public BaseObject
{
    public:
        TileMat(){;}
        ~TileMat(){;}


};
class Gamemap
{
public:
    Gamemap(){;}
    ~Gamemap(){;}

    void LoadMap(char*nam);
    void LoadTiles(SDL_Renderer* screen);
    void Drawmap(SDL_Renderer* screen);
    Map getmap() const {return game_map_;}
    void Setmap (Map& map_data) {game_map_ = map_data;}



private:
    Map game_map_;
    TileMat tile_mat[MAX_TILES];

};



#endif // GAME_MAP_H_INCLUDED
