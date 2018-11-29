#pragma once

#include "State.hpp"
#include "cow.hpp"

class WanderState : public State
{
public:
	WanderState() = default;
	WanderState(cow& cow);
	~WanderState() = default;
	void act(kmint::delta_time dt) override;
private:
	cow& _cow;

};
