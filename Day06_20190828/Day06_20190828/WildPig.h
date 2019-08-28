#pragma once
#include "Monster.h"
class WildPig :
	public Monster
{
public:
	WildPig();
	~WildPig();

	virtual void BeginPlay() override;

	virtual void Tick() override;
	virtual void Render() override;
};

