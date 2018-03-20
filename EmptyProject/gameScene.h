#pragma once
#include "cScene.h"

class tiles;
class gameScene : public cScene
{
private:
	unique_ptr<tiles> m_playerTiles;
	unique_ptr<tiles> m_enemyTiles;

	shared_ptr<texture> background;
	shared_ptr<texture> itemBarUI;
	shared_ptr<texture> timeBarUI;
public:
	gameScene();
	~gameScene();

	virtual void Init() override;
	virtual void Release() override;
	virtual void Update(double dt) override;
	virtual void Render(LPD3DXSPRITE sprite) override;

	void SetTilesData(unique_ptr<tiles>& playerTile, unique_ptr<tiles>& enemyTile);
};

