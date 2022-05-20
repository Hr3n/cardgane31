#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "Game.h"
#include <ctime>
#include <cstdlib>

using namespace std;
using namespace sf;

/*int i_deck = 13;

class Cards { //bazni razred
public:
    Sprite sprite;
    Texture texture;
    //0 = srce, 1 = kara, 2 = pik, 3 = križ
    int znak;
    //1 = ass, 11 = fant, 12 = dama, 13 = kralj
    int vrednost;
    int tocke;
};

class Deck : public Cards {

public:
    void Create(Deck deck[]);
    void Shuffle(Deck deck[]);
};
void Deck::Create(Deck deck[]) {
    int st = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <=13; j++,st++) {
            deck[st].vrednost = j;
            deck[st].znak = i;
            if (j == 1)
                tocke = 11;
            else if (j == 11 || j == 12 || j == 13)
                tocke = 10;
            else
                tocke = j;
            
            //dodeljevanje tekstur posamezni karti
            switch (j) {
            case 1:
                switch (i) {
                case 0:
					texture.loadFromFile("cards/ace_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/ace_of_diamonds.png");
                    break;                
                case 2:                   
                    texture.loadFromFile("cards/ace_of_spades.png");
                    break;                
                case 3:                   
                    texture.loadFromFile("cards/ace_of_clubs.png");
                    break;
                }
                break;
            
            case 2:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/2_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/2_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/2_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/2_of_clubs.png");
                    break;
                }
                break;
            
            case 3:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/3_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/3_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/3_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/3_of_clubs.png");
                    break;
                }
                break;
            
            case 4:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/4_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/4_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/4_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/4_of_clubs.png");
                    break;
                }
                break;
                
            case 5:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/5_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/5_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/5_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/5_of_clubs.png");
                    break;
                }
                break;

            case 6:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/6_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/6_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/6_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/6_of_clubs.png");
                    break;
                }
                break;

            case 7:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/7_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/7_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/7_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/7_of_clubs.png");
                    break;
                }
                break;

            case 8:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/8_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/8_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/8_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/8_of_clubs.png");
                    break;
                }
                break;

            case 9:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/9_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/9_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/9_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/9_of_clubs.png");
                    break;
                }
                break;

            case 10:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/10_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/10_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/10_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/10_of_clubs.png");
                    break;
                }
                break;

            case 11:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/11_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/11_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/11_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/11_of_clubs.png");
                    break;
                }
                break;

            case 12:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/12_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/12_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/12_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/12_of_clubs.png");
                    break;
                }
                break;

            case 13:
                switch (i) {
                case 0:
                    texture.loadFromFile("cards/13_of_hearts.png");
                    break;
                case 1:
                    texture.loadFromFile("cards/13_of_diamonds.png");
                    break;
                case 2:
                    texture.loadFromFile("cards/13_of_spades.png");
                    break;
                case 3:
                    texture.loadFromFile("cards/13_of_clubs.png");
                    break;
                }
                break;

            }
            deck[st].sprite.setTexture(deck[st].texture);
        }
    }

}
void Deck::Shuffle(Deck deck[]) {
    for (int i = 0; i < 52; i++)
    {
        int r = i + (rand() % (52 - i));
        swap(deck[i], deck[r]);
    }
    i_deck = 0;
}

class Player : public Cards {
public:
    void vsota();
    void draw_from_deck(Player player[],Deck deck[], int n) {
        player[n].vrednost = deck[i_deck].vrednost;
        player[n].znak = deck[i_deck].znak;
        player[n].texture = deck[i_deck].texture;
        player[n].tocke = deck[i_deck].tocke;
        i_deck++;
    }

};*/
int main() {
    srand(time(0));
    



  /*  OLD MENU
   RenderWindow MENU(sf::VideoMode(1600, 900), "CARD GAME 31!");
    Menu menu(MENU.getSize().x, MENU.getSize().y);

    RectangleShape background;
    background.setSize(Vector2f(1600, 900));
    Texture Maintexture;
    Maintexture.loadFromFile("Texture/backgroundmain.png");
    background.setTexture(&Maintexture);
    
    







    while (MENU.isOpen())
    {
        Event event;
        while (MENU.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                MENU.close();
            }
            if (event.type == Event::KeyReleased) {
                if (event.key.code == Keyboard::Up) {
                   menu.MoveUp();
                    break;
                }
                if (event.key.code == Keyboard::Down) {
                    menu.MoveDown();
                    break;
                }
                if (event.key.code == Keyboard::Enter) {
                    RenderWindow Play(VideoMode(1600, 900), "CardGame 31");
                    

                    int x = menu.MenuPressed();
                    if (x == 0) {
                        while (Play.isOpen()) {
                            Event aevent;
                            Play.draw(deck[1].sprite);
                            while (Play.pollEvent(aevent)) {

                                
                                if (aevent.type == Event::Closed) {
                                    Play.close();
                                }
                                if (aevent.type == Event::KeyPressed) {

                                    if (aevent.type == Keyboard::Escape) {
                                        Play.close();
                                    }
                                }
                            }
                            
                            Play.clear();
                            Play.draw(deck[1].sprite.setTextureRect(sf::IntRect(10, 10, 32, 32)));
                            Play.display();
                        }
                    }
                    if (x == 1) {
                        MENU.close();
                        break;

                    }
                }
            }
        }
            
            
            MENU.clear();
            MENU.draw(background);
            menu.draw(MENU);

            MENU.display();

        }
	*/
    //GAME ENGINE
    Game game;

    //GAME LOOP
    while (game.running())
    {
        
        //UPDATE
        game.update();

        

        //RENDER
        game.render();

        if (game.end() != 1) {
            game.closeGame();
            game.winnerwindow();
            //game.render();
        }
        
    }
    return 0;
}