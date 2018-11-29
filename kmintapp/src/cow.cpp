#include "cow.hpp"
#include "kmint/random.hpp"
#include "states/WanderState.hpp"
using namespace kmint;
static const char *cow_image = "resources/cow.png";
cow::cow(map::map_graph const &g, map::map_node const &initial_node)
	: play::map_bound_actor{ g, initial_node }, drawable_{ *this,kmint::graphics::image{cow_image, 0.1} } {
	RegisterStates();
	currentState = States[STATE_NAMES::WANDER_STATE].get();
}



void cow::act(delta_time dt) {
	currentState->act(dt);

	//t_passed_ += dt;
	//if (to_seconds(t_passed_) >= 1) {
	//	// pick random edge
	//	int next_index = random_int(0, node().num_edges());
	//	this->node(node()[next_index].to());
	//	t_passed_ = from_seconds(0);
	//}

}

void cow::RegisterStates() {
	States[cow::STATE_NAMES::WANDER_STATE] = std::make_unique<WanderState>(*this);
	States[cow::STATE_NAMES::ATTACK_STATE] = std::make_unique<cowTestState>(*this);
}

void cow::SetState(cow::STATE_NAMES state) {
	currentState = States[state].get();
}