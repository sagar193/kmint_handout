#pragma once

#include "states/State.hpp"

class hare;
class HareWanderState : public State
{
public:
	HareWanderState() = default;
	HareWanderState(hare& hare);

	~HareWanderState() = default;
	void act(kmint::delta_time dt) override;
private:
	hare& _hare;
	kmint::delta_time t_passed_{};
};