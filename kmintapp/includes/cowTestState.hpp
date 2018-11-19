#pragma once
#include "cowState.hpp"
#include "cow.hpp"

class cowTestState : public cowState {
public:
	cowTestState(cow &cow);
	void act(/*cow &cow,*/kmint::delta_time dt) override;
private:
	kmint::delta_time t_passed_{};
	cow _cow;
};