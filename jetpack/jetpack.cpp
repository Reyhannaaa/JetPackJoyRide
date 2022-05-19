#include <iostream>
#include "SBDL.h"

using namespace std;
enum halat {
    pause, play,menu,setting
};

halat gameplay = play;
int background_x[12]; // x background
struct point{
    int x,y;
};
bool halat_back[12];
bool menu_bg = true,menu_set=false,sound=true,fitbarry=true,menu_pause=false ;

SDL_Rect barryrect = {0,420,80,80};

Texture jet,jet1,jet2,alien,alien2,alienup,back_menu,play_menu,quit_menu,set_menu,highscore_menu,sound_set,back_set,change_set,soundoff_set
,soundon_set,pausebg,resume,retry;
int width2,counterback= 0,x=0  ;
Texture zaptex[12];
Texture background[12];
SDL_Rect menurect{0,0,1000,500};
SDL_Rect setrect{350,430,120,40};
SDL_Rect highscorerect{750,430,120,40};
SDL_Rect quitrect{550,430,120,40};
SDL_Rect playrect{150,430,120,40};
SDL_Rect soundrect{150,430,120,40};
SDL_Rect changerect{350,430,120,40};
SDL_Rect backrect{550,430,120,40};
SDL_Rect soundoffrect{150,430,120,40};
SDL_Rect soundonrect{150,430,120,40};
SDL_Rect pausebgrect{0,0,1000,400};
SDL_Rect resumerect{150,430,120,40};
SDL_Rect retryrect{750,430,120,40};

int i=0;
void run()
{
    int number = 10;
    if(barryrect.y==420) {
        if (i % number < number/2)
            SBDL::showTexture(jet, barryrect);
        else if (i % number >= number/2)
            SBDL::showTexture(jet1, barryrect);
        i++;
        if (i ==  number)
            i = 0;
    }
}
void load_bg(){
    if(halat_back[0]==1)
    {
        SBDL::showTexture(background[0],{background_x[0],0,3000,500});
        background_x[0] -=20;
        if(background_x[0]<=-2000)
            halat_back[1]=true;
        if(background_x[0]<=-3000) {
            halat_back[0] = false;
            background_x[0] = 1000;
        }
    }
    if(halat_back[1]==1) {
        SBDL::showTexture(background[1], {background_x[1], 0, 3000, 500});
        background_x[1] -= 20;
        if (background_x[1] <= -2000)
            halat_back[2] = true;
        if(background_x[1]<=-3000) {
            halat_back[1] = false;
            background_x[1] = 1000;
        }
    }
    if(halat_back[2]==1) {
        SBDL::showTexture(background[2], {background_x[2], 0, 3000, 500});
        background_x[2] -= 20;
        if (background_x[2] <= -2000)
            halat_back[3] = true;
        if(background_x[2]<=-3000) {
            halat_back[2] = false;
            background_x[2] = 1000;
        }
    }
    if(halat_back[3]==1) {
        SBDL::showTexture(background[3], {background_x[3] , 0, 3000, 500});
        background_x[3] -= 20;
        if (background_x[3] <= -2000)
            halat_back[4] = true;
        if(background_x[3]<=-3000) {
            halat_back[3] = false;
            background_x[3] = 1000;
        }
    }
    if(halat_back[4]==1) {
        SBDL::showTexture(background[4], {background_x[4], 0, 3000, 500});
        background_x[4] -= 20;
        if (background_x[4] <= -2000)
            halat_back[5] = true;
        if (background_x[4] <= -3000)
        {
            background_x[4] = false;
            background_x[4]=1000;
        }
    }
    if(halat_back[5]==1){
        SBDL::showTexture(background[5],{background_x[5],0,3000,500});
        background_x[5] -=20;
        if (background_x[5] <= -2000)
            halat_back[6] = true;
        if (background_x[5] <= -3000)
        {
            background_x[5] = false;
            background_x[5]=1000;
        }
    }
    if(halat_back[6]==1){
        SBDL::showTexture(background[6],{background_x[6],0,3000,500});
        background_x[6] -=20;
        if (background_x[6] <= -2000)
            halat_back[7] = true;
        if (background_x[6] <= -3000)
        {
            background_x[6] = false;
            background_x[6]=1000;
        }
    }
    if(halat_back[7]==1){
        SBDL::showTexture(background[7],{background_x[7],0,3000,500});
        background_x[7] -=20;
        if (background_x[7] <= -2000)
            halat_back[8] = true;
        if (background_x[7] <= -3000)
        { background_x[7] = false;
            background_x[7]=1000;}
    }
    if(halat_back[8]==1){
        SBDL::showTexture(background[8],{background_x[8],0,3000,500});
        background_x[8] -=20;
        if (background_x[8] <= -2000)
            halat_back[9] = true;
        if (background_x[8] <= -3000)
        { background_x[8] = false;
            background_x[8]=1000;}
    }
    if(halat_back[9]==1){
        SBDL::showTexture(background[9],{background_x[9],0,3000,500});
        background_x[9] -=20;
        if (background_x[9] <= -2000)
            halat_back[10] = true;
        if (background_x[9] <= -3000)
        { background_x[9] = false;
            background_x[9]=1000;}
    }
    if(halat_back[10]==1){
        SBDL::showTexture(background[10],{background_x[10],0,3000,500});
        background_x[10] -=20;
        if (background_x[10] <= -2000)
            halat_back[11] = true;
        if (background_x[10] <= -3000)
        {  background_x[10] = false;
            background_x[10]=1000;}
    }
    if(halat_back[11]==1){
        SBDL::showTexture(background[11],{background_x[11],0,3000,500});
        background_x[11] -=20;
        if (background_x[11] <= -2000)
            halat_back[0] = true;
        if (background_x[11] <= -3000)
        { background_x[11] = false;
            background_x[11]=1000;}
    }
}
SDL_Rect zapper_rect[2];
void initzapper(){


        for ( int i = 0 ; i < 2 ; i++ ){
            zapper_rect[i].w = 100;
            zapper_rect[i].h = 100;
            srand(time(NULL));
            zapper_rect[i].y = rand() % 420;
            zapper_rect[i].x = 1300 + i;
        }

        if ( zapper_rect[0].y + zapper_rect->h >= zapper_rect[1].y && zapper_rect[0].y + zapper_rect->h <= zapper_rect[1].y + zapper_rect->h ){
            if ( zapper_rect[1].y + zapper_rect->h >= zapper_rect[0].y && zapper_rect[1].y + zapper_rect->h <= zapper_rect[0].y + zapper_rect->h )
            {}
        }

        for ( int i = 0 ; i < 2 ; i++ ){

        }


}
void showzapper(){
    for ( int i = 0 ; i < 2 ; i++ ) {
        srand(time(NULL));
        int random = rand() % 12;
        SBDL::showTexture(zaptex[random] , zapper_rect[i]);
    }
}

void move_zapper(){
    for ( int i = 0 ; i < 2 ; i++ ){
        zapper_rect[i].x -= 20;
    }
}
void loadT()
{

   background[0] = SBDL::loadTexture("assets/pic/back/Lab Start.png");
     background[1] = SBDL::loadTexture("assets/pic/back/Lab1.png");
     background[2]= SBDL::loadTexture("assets/pic/back/Lab2.png");
     background[3] = SBDL::loadTexture("assets/pic/back/Sector Start.png");
     background[4] = SBDL::loadTexture("assets/pic/back/Sector1.png");
     background[5] = SBDL::loadTexture("assets/pic/back/Sector2.png");
     background[6] = SBDL::loadTexture("assets/pic/back/Volcano1.png");
     background[7] = SBDL::loadTexture("assets/pic/back/Volcano2.png");
     background[8] = SBDL::loadTexture("assets/pic/back/Volcano 2.png");
     background[9] = SBDL::loadTexture("assets/pic/back/Volcano Start.png");
     background[10] = SBDL::loadTexture("assets/pic/back/warehouse.png");
     background[11] = SBDL::loadTexture("assets/pic/back/warehouse Start.png");
     jet = SBDL::loadTexture("assets/pic/barry/barry.png");
     jet1 = SBDL::loadTexture("assets/pic/barry/barry2.png");
     jet2 = SBDL::loadTexture("assets/pic/barry/barry3.png");
     back_menu = SBDL::loadTexture("assets/pic/menu/Background.png");
     play_menu = SBDL::loadTexture("assets/pic/menu/play.png");
     quit_menu = SBDL::loadTexture("assets/pic/menu/quit.png");
     set_menu = SBDL::loadTexture("assets/pic/menu/setting.png");
     highscore_menu = SBDL::loadTexture("assets/pic/menu/highscores.png");
     sound_set = SBDL::loadTexture("assets/pic/menu/sound.png");
     change_set = SBDL::loadTexture("assets/pic/menu/change keys.png");
     back_set = SBDL::loadTexture("assets/pic/menu/back.png");
     soundoff_set = SBDL::loadTexture("assets/pic/menu/sound off.png");
     soundon_set = SBDL::loadTexture("assets/pic/menu/sound on.png");
     pausebg = SBDL::loadTexture("assets/pic/menu/pauseb.png");
     resume = SBDL::loadTexture("assets/pic/menu/resume.png");
     retry = SBDL::loadTexture("assets/pic/menu/retry.png");
     alien = SBDL::loadTexture("assets/pic/barry/alien.png");
    alien2 = SBDL::loadTexture("assets/pic/barry/alien2.png");
    alienup = SBDL::loadTexture("assets/pic/barry/alienup.png");
    Texture Barryrun1;
    Texture Barryrun2;
    Texture Barryrising;
    Texture Barryfall;
    Texture Barryspeed;
//Zappers
    Texture d1;
    Texture d2;
    Texture d3;
    Texture d4;
    Texture h1;
    Texture h2;
    Texture h3;
    Texture h4;
    Texture v1;
    Texture v2;
    Texture v3;
    Texture v4;

    d1 = SBDL::loadTexture("assets/pic/zappers/d1.png");
    d2 = SBDL::loadTexture("assets/pic/zappers/d2.png");
    d3 = SBDL::loadTexture("assets/pic/zappers/d3.png");
    d4 = SBDL::loadTexture("assets/pic/zappers/d4.png");
    h1 = SBDL::loadTexture("assets/pic/zappers/h1.png");
    h2 = SBDL::loadTexture("assets/pic/zappers/h2.png");
    h3 = SBDL::loadTexture("assets/pic/zappers/h3.png");
    h4 = SBDL::loadTexture("assets/pic/zappers/h4.png");
    v1 = SBDL::loadTexture("assets/pic/zappers/v1.png");
    v2 = SBDL::loadTexture("assets/pic/zappers/v2.png");
    v3 = SBDL::loadTexture("assets/pic/zappers/v3.png");
    v4 = SBDL::loadTexture("assets/pic/zappers/v4.png");
    zaptex[0] = d1;
    zaptex[1] = d2;
    zaptex[2] = d3;
    zaptex[3] = d4;
    zaptex[4] = h1;
    zaptex[5] = h2;
    zaptex[6] = h3;
    zaptex[7] = h4;
    zaptex[8] = v1;
    zaptex[9] = v2;
    zaptex[10] = v3;
    zaptex[11] = v4;


}

int zapper_freq = 100 / 20;
int frame_counter = 0;


int main(int argc, char *argv[]) {

    for (int i = 0; i < 12; i++) background_x[i] = 1000;
    for (int i = 0; i < 12; i++) halat_back[i] = false;
    halat_back[0] = true;
    background_x[0] = 0;

    const int window_width = 1000;
    const int window_height = 500;
    SBDL::InitEngine("SBDL Test", window_width, window_height);

    const int FPS = 60; //frame per second
    const int delay = 1000 / FPS; //delay we need at each frame
    loadT();
    initzapper();
    gameplay = menu;
    while (SBDL::isRunning()) {
        int startTime = SBDL::getTime();
        SBDL::updateEvents();
        SBDL::clearRenderScreen();

        if (gameplay == menu) {
            SBDL::showTexture(back_menu, menurect);
            SBDL::showTexture(play_menu, playrect);
            SBDL::showTexture(highscore_menu, highscorerect);
            SBDL::showTexture(set_menu, setrect);
            SBDL::showTexture(quit_menu, quitrect);

            if (SBDL::mouseInRect(playrect))
                if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED))
                    gameplay = play;

            if (SBDL::mouseInRect(quitrect))
                if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED))
                    return 0; //end game


            if (SBDL::mouseInRect(setrect))
                if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED))
                    gameplay = setting ;
        }
        if (gameplay==setting) //in setmenu
        {
            SBDL::showTexture(back_menu,menurect);
            if (sound) {
                SBDL::showTexture(sound_set, soundrect);
                if (SBDL::mouseInRect(soundrect))
                    if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED))
                        sound = false;

            } else //turn off sound
            {
                SBDL::showTexture(soundoff_set, soundoffrect);
                if (SBDL::mouseInRect(soundoffrect))
                    if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED))
                        sound = true;
            }

            SBDL::showTexture(change_set, changerect);
            if (SBDL::mouseInRect(changerect))
                if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED))
                    if (fitbarry)
                        fitbarry = false;
                    else
                        fitbarry = true;

            SBDL::showTexture(back_set, backrect);
            if (SBDL::mouseInRect(backrect))
                if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED))
                    gameplay = menu;

        }
        if (gameplay==play) {

            //===========================
            //start background loading
            load_bg();
            //end background loading
            //===========================
            run();

            if (SBDL::keyHeld(SDL_SCANCODE_SPACE)) {
                barryrect.y -= 1;
                if(fitbarry)
                    SBDL::showTexture(jet2, barryrect);
                else
                    SBDL::showTexture(alienup,barryrect);
                if (barryrect.y <= 0)
                    barryrect.y = 0;
            } else {
                if (barryrect.y < 420) {
                    barryrect.y += 1;
                    if(fitbarry)
                        SBDL::showTexture(jet1, barryrect);
                    else
                        SBDL::showTexture(alien,barryrect);
                    if (barryrect.y >= 420)
                        barryrect.y = 420;
                }
            }


            if (frame_counter % zapper_freq == 0 && zapper_rect[0].x < 0) {
                initzapper();
                frame_counter = 0;
            }
            frame_counter++;
            showzapper();
            move_zapper();

//    if( !SBDL::keyHeld(SDL_SCANCODE_SPACE)  &&  barryrect.y>420) {
//            barryrect.y+=1;
//            SBDL::showTexture(jet1,barryrect);
//        if(barryrect.y>=420)
//            barryrect.y=420;
//    }
        }
        if (SBDL::keyPressed(SDL_SCANCODE_P))//Menu e pause
        {
            gameplay = pause;
        }


        if (gameplay == pause) {
                    SBDL::showTexture(pausebg, pausebgrect);
                    SBDL::showTexture(resume, resumerect);
                    SBDL::showTexture(retry, retryrect);
                    SBDL::showTexture(set_menu, setrect);
                    SBDL::showTexture(quit_menu, quitrect);

                    if (SBDL::mouseInRect(setrect)) //setting in pause menu
                        if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED)) {
                            gameplay = setting ;
                            //cout << "dakhel e if e settingButton" << endl;
                        }
                    if (SBDL::mouseInRect(retryrect)) //setting in pause menu
                        if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED)) {
                            gameplay = menu ;
                    //cout << "dakhel e if e settingButton" << endl;
                        }

                    if (SBDL::mouseInRect(resumerect))
                        if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED)) {
                            gameplay = play;
                        }

                    if (SBDL::mouseInRect(quitrect))
                        if (SBDL::Mouse.clicked(SDL_BUTTON_LEFT, 1, SDL_PRESSED))
                            return 0;
                    /*
                    inja bayad dokmeye retry tarif she :|
                    */

                }


            SBDL::updateRenderScreen();

            int elapsedTime = SBDL::getTime() - startTime;
            if (elapsedTime < delay)
                SBDL::delay(delay - elapsedTime);


        }
    }

