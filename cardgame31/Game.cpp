#include "Game.h"
using namespace std;
using namespace sf;


//inicializacija classov

    void Game::Create(Deck deck[])
    {
        int st = 0;
        for (int i = 0; i < 4; i++) {
            for (int j = 1; j <= 13; j++, st++) {
                deck[st].vrednost = j;
                deck[st].znak = i;
                if (j == 1)
                    deck[st].tocke = 11;
                else if (j == 11 || j == 12 || j == 13)
                   deck[st].tocke = 10;
                else
                    deck[st].tocke = j;

                //dodeljevanje tekstur posamezni karti
                switch (j) {
                case 1:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/ace_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/ace_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/ace_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/ace_of_clubs.png");
                        break;
                    }
                    break;

                case 2:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/2_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/2_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/2_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/2_of_clubs.png");
                        break;
                    }
                    break;

                case 3:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/3_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/3_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/3_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/3_of_clubs.png");
                        break;
                    }
                    break;

                case 4:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/4_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/4_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/4_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/4_of_clubs.png");
                        break;
                    }
                    break;

                case 5:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/5_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/5_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/5_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/5_of_clubs.png");
                        break;
                    }
                    break;

                case 6:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/6_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/6_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/6_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/6_of_clubs.png");
                        break;
                    }
                    break;

                case 7:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/7_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/7_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/7_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/7_of_clubs.png");
                        break;
                    }
                    break;

                case 8:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/8_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/8_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/8_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/8_of_clubs.png");
                        break;
                    }
                    break;

                case 9:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/9_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/9_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/9_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/9_of_clubs.png");
                        break;
                    }
                    break;

                case 10:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/10_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/10_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/10_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/10_of_clubs.png");
                        break;
                    }
                    break;

                case 11:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/jack_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/jack_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/jack_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/jack_of_clubs.png");
                        break;
                    }
                    break;

                case 12:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/queen_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/queen_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/queen_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/queen_of_clubs.png");
                        break;
                    }
                    break;

                case 13:
                    switch (i) {
                    case 0:
                        deck[st].texture.loadFromFile("cards/king_of_hearts.png");
                        break;
                    case 1:
                        deck[st].texture.loadFromFile("cards/king_of_diamonds.png");
                        break;
                    case 2:
                        deck[st].texture.loadFromFile("cards/king_of_spades.png");
                        break;
                    case 3:
                        deck[st].texture.loadFromFile("cards/king_of_clubs.png");
                        break;
                    }
                    break;

                }
                
            }
        
        }
        
    }

    //rekurzija zkj pa ne hihi
void Game::Shuffle(Deck deck[],int &i)
{
    if(i < 52)
    {
        int r = i + (rand() % (52 - i));
        swap(deck[i], deck[r]);
        Shuffle(deck, i = i+1);
    }   
}

void Game::razdeli(Deck deck[], int &deck_i)
{
    for (int i = 0; deck_i < 12; i++) {
        player1[i + 1].vrednost = deck[deck_i].vrednost;
        player1[i + 1].znak = deck[deck_i].znak;
        player1[i + 1].tocke = deck[deck_i].tocke;
        player1[i + 1].texture = deck[deck_i].texture;
        deck_i++;
        //cout << "player1  " << player1[i + 1].vrednost<<" "<< player1[i + 1].znak<<endl;
        

        
        player2[i + 1].vrednost = deck[deck_i].vrednost;
        player2[i + 1].znak = deck[deck_i].znak;
        player2[i + 1].tocke = deck[deck_i].tocke;
        player2[i + 1].texture = deck[deck_i].texture;
        deck_i++;
        //cout << "player2  " << player2[i + 1].vrednost << " " << player2[i + 1].znak << endl;

        player3[i + 1].vrednost = deck[deck_i].vrednost;
        player3[i + 1].znak = deck[deck_i].znak;
        player3[i + 1].tocke = deck[deck_i].tocke;
        player3[i + 1].texture = deck[deck_i].texture;
        deck_i++;
        //cout << "player3  " << player3[i + 1].vrednost << " " << player3[i + 1].znak << endl;

        player4[i + 1].vrednost = deck[deck_i].vrednost;
        player4[i + 1].znak = deck[deck_i].znak;
        player4[i + 1].tocke = deck[deck_i].tocke;
        player4[i + 1].texture = deck[deck_i].texture;
        deck_i++;
        //cout << "player4  " << player4[i + 1].vrednost << " " << player4[i + 1].znak << endl;
    }
    
}

int Game::vsota(Player player[])
{
    if (player[2].znak == player[1].znak && player[2].znak == player[3].znak)
        return player[0].tocke + player[1].tocke + player[2].tocke;

     if (player[2].znak == player[1].znak)
        return player[2].tocke + player[1].tocke;

     if (player[3].znak == player[2].znak)
        return player[3].tocke + player[2].tocke;

     if (player[3].znak == player[1].znak)
        return player[3].tocke + player[1].tocke;

    else {
        int m1 = max(player[3].tocke, player[1].tocke);
        return max(m1, player[2].tocke);
    }
}

void Game::draw_from_deck(Player player[], Deck deck[])
{
    player[0].vrednost = deck[i_deck].vrednost;
    player[0].znak = deck[i_deck].znak;
    player[0].texture = deck[i_deck].texture;
    player[0].tocke = deck[i_deck].tocke;
    i_deck++;
}

void Game::rules()
{
    std::ifstream f("rules.txt");

    if (f.is_open())
        cout << f.rdbuf();
}

void Game::put_on_kupcek(Player player[], int turn) {
    int i = rand() % 3;
    Element* novi = new Element;
    switch (turn)
    {
        
    case 0:
        
        while (cancer2 == 0) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) {
                for (bool loop = 1; loop;)
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                        loop = 1;
                    else {
                        novi->podatek.znak = player[0].znak;
                        novi->podatek.vrednost = player[0].vrednost;
                        novi->podatek.texture = player[0].texture;
                        novi->podatek.tocke = player[0].tocke;
                        novi->nasl = zacetek;
                        player[0].tocke = 0;
                        player[0].texture = tx;

                        zacetek = novi;
                        loop = 0;
                        cancer2 = 1;
                    }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) {
                for (bool loop = 1; loop;)
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
                        loop = 1;
                    else {
                        novi->podatek.znak = player[1].znak;
                        novi->podatek.vrednost = player[1].vrednost;
                        novi->podatek.texture = player[1].texture;
                        novi->podatek.tocke = player[1].tocke;
                        novi->nasl = zacetek;
                        player[1].tocke = 0;
                        player[1].texture = tx;
                        zacetek = novi;
                        swap(player[0], player[1]);
                        loop = 0;
                        cancer2 = 1;
                    }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) {
                for (bool loop = 1; loop;)
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
                        loop = 1;
                    else {
                        novi->podatek.znak = player[2].znak;
                        novi->podatek.vrednost = player[2].vrednost;
                        novi->podatek.texture = player[2].texture;
                        novi->podatek.tocke = player[2].tocke;
                        novi->nasl = zacetek;
                        zacetek = novi;
                        player[2].tocke = 0;
                        player[2].texture = tx;
                        swap(player[0], player[2]);
                        loop = 0;
                        cancer2 = 1;
                    }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4)) {
                for (bool loop = 1; loop;)
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
                        loop = 1;
                    else {
                        novi->podatek.znak = player[3].znak;
                        novi->podatek.vrednost = player[3].vrednost;
                        novi->podatek.texture = player[3].texture;
                        novi->podatek.tocke = player[3].tocke;
                        novi->nasl = zacetek;
                        zacetek = novi;
                        player[3].tocke = 0;
                        player[3].texture = tx;
                        swap(player[0], player[3]);
                        loop = 0;
                        cancer2 = 1;
                    }
            }
        }
        cancer2 = 0;
            break;
        



    case 1:

        novi->podatek.znak = player[i].znak;
        novi->podatek.vrednost = player[i].vrednost;
        novi->podatek.texture = player[i].texture;
        novi->podatek.tocke = player[i].tocke;
        novi->nasl = zacetek;
        zacetek = novi;
        break;

    case 2:

        novi->podatek.znak = player[i].znak;
        novi->podatek.vrednost = player[i].vrednost;
        novi->podatek.texture = player[i].texture;
        novi->podatek.tocke = player[i].tocke;
        novi->nasl = zacetek;
        zacetek = novi;
        break;

    case 3:

        novi->podatek.znak = player[i].znak;
        novi->podatek.vrednost = player[i].vrednost;
        novi->podatek.texture = player[i].texture;
        novi->podatek.tocke = player[i].tocke;
        novi->nasl = zacetek;
        zacetek = novi;
        break;
    }
    
}

void Game::draw_from_kupcek(Player player[]) {
    Element* tmp;
    player[0].texture = zacetek->podatek.texture;
    player[0].tocke = zacetek->podatek.tocke;
    player[0].vrednost = zacetek->podatek.vrednost;
    player[0].znak = zacetek->podatek.znak;


    if (zacetek != NULL)
    {
        tmp = zacetek;
        zacetek = tmp->nasl;
        delete tmp;
    }
}

void Game::initVariables()
{
	this->window = nullptr;
}

void Game::initText()
{
    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->text.setFont(font);
    this->text.setCharacterSize(24);
    this->text.setPosition(sf::Vector2f(40.f, 40.f));
    this->text.setFillColor(sf::Color::White);
    this->text.setString("Pritisni 1 da vleces iz kupcka");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->text2.setFont(font);
    this->text2.setCharacterSize(24);
    this->text2.setPosition(sf::Vector2f(40.f, 60.f));
    this->text2.setFillColor(sf::Color::White);
    this->text2.setString("Pritisni 2 da vleces iz sredine");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->text3.setFont(font);
    this->text3.setCharacterSize(24);
    this->text3.setPosition(sf::Vector2f(40.f, 80.f));
    this->text3.setFillColor(sf::Color::White);
    this->text3.setString("Pritisni 3 da potrkas");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->znebi1.setFont(font);
    this->znebi1.setCharacterSize(24);
    this->znebi1.setPosition(sf::Vector2f(40.f, 40.f));
    this->znebi1.setFillColor(sf::Color::White);
    this->znebi1.setString("Pritisni 1 da se znebis 1. karte");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->znebi2.setFont(font);
    this->znebi2.setCharacterSize(24);
    this->znebi2.setPosition(sf::Vector2f(40.f, 60.f));
    this->znebi2.setFillColor(sf::Color::White);
    this->znebi2.setString("Pritisni 2 da se znebis 2. karte");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->znebi3.setFont(font);
    this->znebi3.setCharacterSize(24);
    this->znebi3.setPosition(sf::Vector2f(40.f, 80.f));
    this->znebi3.setFillColor(sf::Color::White);
    this->znebi3.setString("Pritisni 3 da se znebis 3. karte");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->znebi4.setFont(font);
    this->znebi4.setCharacterSize(24);
    this->znebi4.setPosition(sf::Vector2f(40.f, 100.f));
    this->znebi4.setFillColor(sf::Color::White);
    this->znebi4.setString("Pritisni 4 da se znebis 4. karte");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->zmagal.setFont(font);
    this->zmagal.setCharacterSize(60);
    this->zmagal.setPosition(sf::Vector2f(40.f, 40.f));
    this->zmagal.setFillColor(sf::Color::White);
    this->zmagal.setString("ZMAGAL SI");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->izgubil.setFont(font);
    this->izgubil.setCharacterSize(60);
    this->izgubil.setPosition(sf::Vector2f(40.f, 40.f));
    this->izgubil.setFillColor(sf::Color::White);
    this->izgubil.setString("IZGUBIL SI");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->modra.setFont(font);
    this->modra.setCharacterSize(60);
    this->modra.setPosition(sf::Vector2f(40.f, 40.f));
    this->modra.setFillColor(sf::Color::White);
    this->modra.setString("Zmagal je modri");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->rdeca.setFont(font);
    this->rdeca.setCharacterSize(60);
    this->rdeca.setPosition(sf::Vector2f(40.f, 40.f));
    this->rdeca.setFillColor(sf::Color::White);
    this->rdeca.setString("Zmagal je rdeci");

    this->font.loadFromFile("Fonts/Oswald-Regular.ttf");
    this->rumena.setFont(font);
    this->rumena.setCharacterSize(60);
    this->rumena.setPosition(sf::Vector2f(40.f, 40.f));
    this->rumena.setFillColor(sf::Color::White);
    this->rumena.setString("Zmagal je rumeni");
}

void Game::initWindow()
{
	this->videoMode.height = 1600;
	this->videoMode.width = 900;
	this->window = new sf::RenderWindow(sf::VideoMode(1600, 900), "CARD GAME 31!", Style::Titlebar | sf::Style::Close);
    this->window->setFramerateLimit(60);

}


void Game::initCards()
{
	this->back_card.setSize(sf::Vector2f(150.f, 270.f));
	this->back_card.setPosition(sf::Vector2f(1100.f, 370.f));
	texture.loadFromFile("cards/card_back.png");
	this->back_card.setTexture(&texture);

	//players
	this->g_player2.setFillColor(sf::Color::Blue);
	this->g_player2.setSize(sf::Vector2f(100.f, 100.f));
	this->g_player2.setPosition(sf::Vector2f(0.f, 370.f));

	this->g_player3.setFillColor(sf::Color::Red);
	this->g_player3.setSize(sf::Vector2f(100.f, 100.f));
	this->g_player3.setPosition(sf::Vector2f(750.f, 0.f));

	this->g_player4.setFillColor(sf::Color::Yellow);
	this->g_player4.setSize(sf::Vector2f(100.f, 100.f));
	this->g_player4.setPosition(sf::Vector2f(1500.f, 370.f));
   
    
    //KARTE V ROKI
    
    this->karta_3.setScale(sf::Vector2f(0.25f, 0.35f));
    this->karta_3.setPosition(sf::Vector2f(1000.f, 590.f));
    this->karta_3.setTexture(player1[3].texture);
    
    

    this->karta_2.setScale(sf::Vector2f(0.25f, 0.35f));
    this->karta_2.setPosition(sf::Vector2f(850.f, 590.f));
    this->karta_2.setTexture(player1[2].texture);

    this->karta_1.setScale(sf::Vector2f(0.25f, 0.35f));
    this->karta_1.setPosition(sf::Vector2f(700.f, 590.f));
    this->karta_1.setTexture(player1[1].texture);

    
    this->karta_0.setScale(sf::Vector2f(0.25f, 0.35f));
    this->karta_0.setPosition(sf::Vector2f(550.f, 590.f));
    this->karta_0.setTexture(player1[1].texture);
    this->karta_0.setTexture(player1[0].texture);

    //sredina render iz kazalcnega seznama
    if (zacetek != NULL) {
        this->sredina.setScale(sf::Vector2f(0.25f, 0.35f));
        this->sredina.setPosition(sf::Vector2f(550.f, 300.f));
        this->sredina.setTexture(zacetek->podatek.texture);
    }

}

Game::Game()
{
	this->initVariables();
	this->initWindow();
    this->Create(deck);
    this->Shuffle(deck,rekurzija);
    this->razdeli(deck, i_deck);
    //this->draw_from_deck(player1, deck);
	this->initCards();
    this->initText();
    this->rules();
}

Game::~Game()
{
	delete this->window;
}

void Game::closeGame()
{
    this->window->close();
    
}

void Game::winnerwindow()
{   
    this->videoMode_w.height = 1600;
    this->videoMode_w.width = 900;
    this->window_w = new sf::RenderWindow(sf::VideoMode(1600, 900), "CARD GAME 31!", Style::Titlebar | sf::Style::Close);
    this->window_w->setFramerateLimit(60);
    this->window->clear(sf::Color(0, 128, 0));

    if (vsota(player1) > vsota(player2) && vsota(player1) > vsota(player3) && vsota(player1) > vsota(player4))
        this->window_w->draw(zmagal);
    else
        this->window_w->draw(izgubil);
      

    this->window_w->display();

}

void Game::renderText(sf::RenderTarget& target)
{
    if (bes == 0) {
        target.draw(this->text);
        target.draw(this->text2);
        target.draw(this->text3);
    }
    else {
        target.draw(this->znebi1);
        target.draw(this->znebi2);
        target.draw(this->znebi3);
        target.draw(this->znebi4);
    }
        
        
    
}

const bool Game::running() const
{
	return this->window->isOpen();
}

const bool Game::end() const
{   
    return trkaj;
}

void Game::gameplay()
{
    //ko se zacne igra usakemu razdeli karte
	if (zac) {
        zac = 0;
        i_deck++;
        Element *novi = new Element;
        novi->podatek.znak = deck[i_deck].znak;
        novi->podatek.vrednost = deck[i_deck].vrednost;
        novi->podatek.texture = deck[i_deck].texture;
        novi->podatek.tocke = deck[i_deck].tocke;
        
        novi->nasl = zacetek;
        zacetek = novi;
        i_deck++;
        this->initCards();
    }
    
        
        if (turn == 0) {

            
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))  {
                    for (bool loop = 1; loop;)
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                            loop = 1;

                        else {
                            draw_from_deck(player1, deck);
                            loop = 0;
                            bes = 1;
                            this->initText();
                            //this->render();
                            cancer = 1;
                            cout << "pritisk 1  " <<bes<< endl;
                            break;
                        }

                }           
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) {
                    for (bool loop = 1; loop;)
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
                            loop = 1;
                        else {
                            draw_from_kupcek(player1);
                            loop = 0;
                            bes = 1;
                            this->render();
                            cancer = 1;
                            cout << "pritisk 2  " << bes << endl;
                            break;
                        }
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) {
                    for (bool loop = 1; loop;)
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
                            loop = 1;
                        else {
                            trkaj = 0;
                            loop = 0;
                            bes = 1;
                            this->render();
                            cancer = 1;
                            break;
                        }
                }
            
                if (cancer) {
                    cout << "nasledni if"<<endl;
                    
                    this->initText();
                    
                    this->render();

                    put_on_kupcek(player1, 0);
                    //this->initCards();
                    bes = 0;
                    turn = 1;
                    cancer = 0;
                    
                }
                
        }

        if (turn == 1) {
            if (vsota(player2) > 26) {
                trkaj = 0;
            }
            else {
                this->draw_from_deck(player2, deck);
                this->put_on_kupcek(player2, turn);
                this->initCards();
                //this->render();
                turn = 2;
            }
        }

        if (turn == 2) {
            if (vsota(player3) >= 26)
                trkaj = 0;

            else {
                draw_from_deck(player3, deck);
                this->put_on_kupcek(player3, turn);
                this->initCards();
                //this->render();
                turn = 3;
            }
        }

        if (turn == 3) {
            if (vsota(player4) >= 26)
                trkaj = 0;

            else {
                draw_from_deck(player4, deck);
                this->put_on_kupcek(player4, turn);
                this->initCards();
                this->render();
                turn = 0;
            }
        }
    }

//}

void Game::poolEvents()
{
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;

		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

bool g = 1;

void Game::update()
{this->poolEvents();
if(this->trkaj = 1)
this->gameplay();



}


void Game::render()
{
    if (trkaj) {
        this->window->clear(sf::Color(0, 128, 0));
        this->window->draw(this->back_card);
        this->window->draw(this->g_player2);
        this->window->draw(this->g_player3);
        this->window->draw(this->g_player4);
        this->window->draw(this->karta_0);
        this->window->draw(this->karta_1);
        this->window->draw(this->karta_2);
        this->window->draw(this->karta_3);
        this->window->draw(this->sredina);
        this->renderText(*this->window);
    }
    else
    {
        winnerwindow();
    }
    
    

	this->window->display();
}
