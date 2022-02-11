#include "playGame.h"
//#include <random>

using namespace std;
using namespace sf;
int k = 0;
int n;
void playGame::assingGameBackground()
{

    string addressColor1 = "blue.png";
	myState.push_back(state(addressColor1));
	string addressColor2 = "red.png";
	myState.push_back(state(addressColor2));

	string addressColor3 = "yelow.png";
	myState.push_back(state(addressColor3));

	string addressColor4 = "green.png";
	myState.push_back(state(addressColor4));


//-----------------------------------------------------------------

    string addressPants = "P1.png";
	myState.push_back(state(addressPants));

	string addressManto = "M1.png";
	myState.push_back(state(addressManto));
//------------------------------------------------------------------
	string addressColorPants1 = "P11.png";
	myState.push_back(state(addressColorPants1));

	string addressColorPants2 = "P12.png";
	myState.push_back(state(addressColorPants2));

	string addressColorPants3 = "P13.png";
	myState.push_back(state(addressColorPants3));

	string addressColorPants4 = "P14.png";
	myState.push_back(state(addressColorPants4));
//-------------------------------------------------------------------=
    string addressColorManto1 = "M11.png";
	myState.push_back(state(addressColorManto1));

    string addressColorManto2 = "M12.png";
	myState.push_back(state(addressColorManto2));

    string addressColorManto3 = "M13.png";
	myState.push_back(state(addressColorManto3));

    string addressColorManto4 = "M14.png";
	myState.push_back(state(addressColorManto4));
}

void playGame::statrtPage()
{
	RenderWindow window(VideoMode(1280, 891), "Tailor Game", Style::Titlebar | Style::Close);
	Texture IMG;
	if (!IMG.loadFromFile("BGP.png"))
	{
		return;
	}
	Sprite sprite1(IMG);

	while (window.isOpen())
	{

		Event ev;
		while (window.pollEvent(ev))
		{

			switch (ev.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				if (ev.key.code == Keyboard::Escape)
					window.close();
				break;
			}

			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 49 && ev.mouseButton.x <= 170) && (ev.mouseButton.y >= 725 && ev.mouseButton.y <= 852))
				{
					window.close();
					aboutPage();


				}
			}
			if (ev.mouseButton.button == Mouse::Left)
			{
				if ((ev.mouseButton.x >= 554 && ev.mouseButton.x <= 731) && (ev.mouseButton.y >= 250 && ev.mouseButton.y <= 428))
				{
					window.close();
					gamePage();


				}
			}
		}

		window.clear();
		window.draw(sprite1);
		window.display();

	}
}



void playGame::gamePage()
{
	RenderWindow window(VideoMode(685, 800), "Tailor(Game Page)", sf::Style::Titlebar | sf::Style::Close);

	Texture IMGgamePage;
	if (!IMGgamePage.loadFromFile("BG.png"))
        cout << "not load picture" << endl;

	Sprite sp(IMGgamePage);

	while (window.isOpen())
	{
		Event ev;
		window.clear();
		window.draw(sp);

			while (k != 1)
			{
				float i = 150;
				for (int w = 0; w < 1 ;w++, i += 101.1)
				{
					float j = 87;
					for ( int z = 0; z < 4 ;z++, j += 101.1)
					{
						Texture t;
						t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
						cout << j << "\t" << i << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
						Sprite s(t);
						s.setPosition(j, i);
						window.draw(s);
					}
				}
				k++;
				window.display();

			}



			while (window.pollEvent(ev))
			{

				switch (ev.type)
				{
					case Event::Closed:
						window.close();
						break;
					case Event::KeyPressed:
						if (ev.key.code == Keyboard::Escape)
							window.close();
						break;


					case Event::MouseButtonPressed:
						switch (ev.key.code)
						{
						case Mouse::Left:
							//-------------------------------------------------------------------------------------------------------------------
							if ((Mouse::getPosition(window).x >= 87 && Mouse::getPosition(window).x <= 188.1) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{

									gameBackground[0][0]->rotation();
									cout << "*** " << gameBackground[0][0]->getAddressOfPic() << endl;
									Texture t;
									t.loadFromFile(gameBackground[0][0]->getAddressOfPic());
									//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
									Sprite s(t);
									s.setPosition(87, 150);
									window.draw(s);
									float i = 150;
									for (int w = 0; w < 5; w++, i += 101.1)
									{
										float j = 87;
										for (int z = 0; z < 5; z++, j += 101.1)
										{
											Texture t;
											t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
											cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
											Sprite s(t);
											s.setPosition(j, i);
											window.draw(s);
										}
									}
									window.display();


							}
							//-------------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 188.1 && Mouse::getPosition(window).x <= 289.2) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{
								gameBackground[0][1]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[0][1]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[0][1]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(188.1, 150);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();

							}
							//-----------------------------------------------------------------------------------
							else if ((Mouse::getPosition(window).x >= 289.2 && Mouse::getPosition(window).x <= 390.3) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{
								gameBackground[0][2]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[0][2]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[0][2]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(289.2, 150);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//--------------------------------------------------------------------------
								else if ((Mouse::getPosition(window).x >= 289.2 && Mouse::getPosition(window).x <= 390.3) && (Mouse::getPosition(window).y >= 150 && Mouse::getPosition(window).y <= 251.1))
							{
								gameBackground[0][2]->rotation();
								//window.clear();
								cout << "*** " << gameBackground[0][3]->getAddressOfPic() << endl;
								Texture t;
								t.loadFromFile(gameBackground[0][2]->getAddressOfPic());
								//cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
								Sprite s(t);
								s.setPosition(289.2, 150);
								window.draw(s);
								float i = 150;
								for (int w = 0; w < 5; w++, i += 101.1)
								{
									float j = 87;
									for (int z = 0; z < 5; z++, j += 101.1)
									{
										Texture t;
										t.loadFromFile(gameBackground[w][z]->getAddressOfPic());
										cout << w << "\t" << z << "\t" << gameBackground[w][z]->getAddressOfPic() << endl;
										Sprite s(t);
										s.setPosition(j, i);
										window.draw(s);
									}
								}
								window.display();
							}
							//----------------------------------------------------------------------------
							break;
						}

				}

				if(ev.mouseButton.button == Mouse::Left)
				{
					if ((ev.mouseButton.x >= 606 && ev.mouseButton.x <= 663) && (ev.mouseButton.y >= 14 && ev.mouseButton.y <= 57))
					{
						window.close();
						k = 0;
						freeObj();
						assingGameBackground();
						statrtPage();

					}
				}

		}




	}


}


void playGame::freeObj()
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << i << "  " << j << endl;
			shape* temp = gameBackground[i][j];
			delete temp;
			gameBackground[i][j] = nullptr;


		}
	}

}

playGame::~playGame()
{

	freeObj();

}



