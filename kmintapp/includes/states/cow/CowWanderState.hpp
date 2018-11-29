#pragma once

#include "../State.hpp"
#include "cow.hpp"

class CowWanderState : public State
{
public:
	CowWanderState() = default;
	CowWanderState(cow& cow);
	~CowWanderState() = default;
	void act(kmint::delta_time dt) override;
private:
	cow& _cow;
	kmint::delta_time t_passed_{};
};
