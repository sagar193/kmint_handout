#include "../../../includes/states/cow/CowWanderState.hpp"
#include <map>
#include <algorithm>
#include "kmint/random.hpp"
#include "kmint/map/map.hpp"
#include "kmint/play.hpp"
#include "cow.hpp"

using namespace kmint;

CowWanderState::CowWanderState(cow &cow) : _cow(cow) {
	
}

void CowWanderState::act(kmint::delta_time dt) {
	//_cow.SetState(cow::STATE_NAMES::ATTACK_STATE);

	t_passed_ += dt;
	//_cow.SetState(cow::STATE_NAMES::WANDER_STATE);
	if (to_seconds(t_passed_) >= 1) {
		// pick random edge
		int next_index = random_int(0, _cow.node().num_edges());
		_cow.node(_cow.node()[next_index].to());
		t_passed_ = from_seconds(0);
	}
}