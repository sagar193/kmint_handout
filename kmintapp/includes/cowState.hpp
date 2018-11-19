#pragma once
#include "kmint/primitives.hpp"
//#include "cow.hpp"


class cowState {
public:
	virtual void act(/*cow &cow,*/ kmint::delta_time dt) = 0;
};