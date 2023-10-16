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

	//�X�V
	void Update();

	//�ߐڍU��
	void Strike();

	//�ˌ�
	void Shot();

	//���E
	void Leave();

private:

	static void (Enemy::*spFuncTable[])();

	Phase phase_ = PhaseStrike;

};

