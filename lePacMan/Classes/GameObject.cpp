#include "GameObject.h"
namespace DevitoCult {



	GameObject::GameObject(const char * FILEPATH, const cocos2d::Vec2 & LOCATION, float RADIUS, float ANGLE, unsigned int SEGMENTS)
		:hitBox(new CirclePrimitive(LOCATION, RADIUS, ANGLE, SEGMENTS))
	{
		sprite = cocos2d::Sprite::create(FILEPATH);
		sprite->setScale(0.5f);
		sprite->setPosition(hitBox->getLocation());

	}

	cocos2d::Sprite * GameObject::getSprite() const
	{
		return sprite;
	}

	CirclePrimitive* GameObject::getBox() const
	{
		return hitBox;
	}

	DevitoCult::SquarePrimitive * GameObject::getAltBox() const
	{
		return altHitBox;
	}

	void GameObject::updateGameObject()
	{
		altHitBox->update();
		sprite->setPosition(altHitBox->getDrawNode()->getPosition());

	}
	int GameObject::getHP() const
	{
		return objectHp;
	}
	void GameObject::setHP(int hp)
	{
		objectHp = hp;
	}

}
