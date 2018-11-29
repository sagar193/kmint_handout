#pragma once
#include "cowState.hpp"
//#include "cow.hpp"
#include "states/State.hpp"

class cow;
class cowTestState : public State {
public:
	cowTestState(cow &cow);
	void act(/*cow &cow,*/kmint::delta_time dt) override;
private:
	kmint::delta_time t_passed_{};
	cow& _cow;
};