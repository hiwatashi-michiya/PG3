#pragma once
class Enemy
{
public:

	Enemy();
	~Enemy();

	enum Phase
	{
		PhaseStrike,
		PhaseShot,
		PhaseLeave
	};

	//更新
	void Update();

	//近接攻撃
	void Strike();

	//射撃
	void Shot();

	//離脱
	void Leave();

private:

	static void (Enemy::*spFuncTable[])();

	Phase phase_ = PhaseStrike;

};

