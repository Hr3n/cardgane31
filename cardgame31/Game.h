#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace sf;
using namespace std;

class Game
{
private:
    struct Deck {

        sf::Texture texture;
        //0 = srce, 1 = kara, 2 = pik, 3 = križ
        int znak;
        //1 = ass, 11 = fant, 12 = dama, 13 = kralj
        int vrednost;
        int tocke;
    }deck[52];

    struct Player {

        Texture texture;
        //0 = srce, 1 = kara, 2 = pik, 3 = križ
        int znak;
        //1 = ass, 11 = fant, 12 = dama, 13 = kralj
        int vrednost;
        int tocke;
    }player1[4], player2[4], player3[4], player4[4];


    //enosmerni kazalcni seznam
    struct Kupcek
    {
        Texture texture;
        //0 = srce, 1 = kara, 2 = pik, 3 = križ
        int znak;
        //1 = ass, 11 = fant, 12 = dama, 13 = kralj
        int vrednost;
        int tocke;
    };
    struct Element {
        Kupcek podatek;
        Element* nasl;
    }*zacetek = NULL;


    sf::Event press;




    //neke spremenljivke k jih rabm -_-
    int rekurzija = 0;
    int i_deck = 0;
    //0 = ti si na potezi
    int turn = 0;
    bool zac = 1;
    bool trkaj = 1;
    bool bes = 0;
    bool cancer = 0;
    bool cancer2 = 0;
    bool updateStop = 0;
    


    //-----------------------------------------------------------------------------



    sf::RenderWindow* window;
    sf::VideoMode videoMode;
    sf::RenderWindow* window_w;
    sf::VideoMode videoMode_w;
    sf::Event ev;

    //game object
    sf::Texture texture;
    sf::Texture tekstura;
    sf::RectangleShape back_card;
    sf::RectangleShape g_player2;
    sf::RectangleShape g_player3;
    sf::RectangleShape g_player4;
    //karte v roki
    sf::Sprite karta_0;
    sf::Sprite karta_1;
    sf::Sprite karta_2;
    sf::Sprite karta_3;
    sf::Sprite sredina;

    sf::Texture tx;


    sf::Font font;
    sf::Text text;
    sf::Text text2;
    sf::Text text3;
    sf::Text znebi1;
    sf::Text znebi2;
    sf::Text znebi3;
    sf::Text znebi4;

    sf::Text zmagal;
    sf::Text izgubil;
    sf::Text modra;
    sf::Text rdeca;
    sf::Text rumena;






    void Create(Deck deck[]);
    void Shuffle(Deck deck[], int& i);
    void razdeli(Deck deck[], int& deck_i);
    int vsota(Player player[]);
    void shift(Player player[], int n) {
        swap(player[0], player[n]);
            for (int j = 0; j <= n; j++) {
                player[j].vrednost = player[j + 1].vrednost;
                player[j].znak = player[j + 1].znak;
                player[j].texture = player[j + 1].texture;
                player[j].tocke = player[j + 1].tocke;
            }
    }
    void draw_from_deck(Player player[], Deck deck[]);
    void rules();


    void put_on_kupcek(Player player[], int turn);
    void draw_from_kupcek(Player player[]);
        
        
        void initVariables();
        void initText();
        void initWindow();




    public:
        Game();
        virtual ~Game();

        void closeGame();
        void winnerwindow();
        void renderText(sf::RenderTarget & target);
        const bool running() const;
        const bool end() const;
        void initCards();
        void gameplay();
        void poolEvents();
        void update();

        void render();

    

};