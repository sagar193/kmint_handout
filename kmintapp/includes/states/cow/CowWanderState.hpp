#pragma once

#include "states/State.hpp"

class cow;
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
