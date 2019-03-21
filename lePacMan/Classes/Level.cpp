#include "Level.h"

DevitoCult::Level::Level()
{
}

void DevitoCult::Level::drawMap(cocos2d::Scene * s)
{
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 27; j++) {
			if (levelData[i][j] == 1) {
				levelBounds.push_back(SquarePrimitive(cocos2d::Vec2(10, 10), cocos2d::Vec2(20, 20)));
				s->addChild(levelBounds.back().getDrawNode());
				levelBounds.back().getDrawNode()->setPosition(cocos2d::Vec2(10 + (j * 10), 270 - (i * 10)));
				levelBounds.back().setColour(cocos2d::Color4F(0, 0, 1.0f, 1.0f));
			}

		}
	}
	for (auto x : levelBounds)
		x.update();
}
