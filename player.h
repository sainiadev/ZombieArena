#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;

class Player
{
private:
	const float START_SPEED = 200.0f;
	const float START_HEALTH= 100.0f;

	// Where is the player - 
	Vector2f m_Position;

	// The sprite
	Sprite m_Sprite;

	// Add a texture - 
	// !!Watch this are change soon
	Texture m_Texture;

	// What is the screen resolution
	Vector2f m_Resolution;
	// What size is the current arena
	IntRect m_Arena;
	// How big is each tile of arena is -	
	int m_Tilesize;

	// Which direction player is moving - 
	bool m_UpPressed;
	bool m_DownPressed;
	bool m_LeftPressed;
	bool m_RightPressed;

	// How much health is the player got -
	int m_Health;
	// What is the max health a player can have -
	int m_MaxHealth;

	// When was the player last hit -
	Time m_LastHit;
	// Speed in pixels per second
	float m_Speed;

	// All out public functions comes here -
public:
	Player();
	void spawn(IntRect, Vector2f resolution, int tileSize);

	// Call this at the end of every game -
	void resetPlayerStats();

	// Handle the player getting hit by a zombie -
	bool hit(Time timeHit);
	// How long ago was the player last hit
	Time getLastHitTime();
	// Where is the player -
	FloatRect getPosition();

	// Where is the center of the player -
	Vector2f getCenter();
	// What angle is player facing -
	float getRotation();
	// Send a copy of the sprite to main location -
	Sprite getSprite();
	
	// Next four function moves the player -
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	// Stop player moving in a specific direction -
	void stopLeft();
	void stopRight();
	void stopUp();
	void stopDown();

	// We will call this function once every frame -


};