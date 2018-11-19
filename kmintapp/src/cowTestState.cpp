#include "cowTestState.hpp"
#include <map>
#include <algorithm>
#include "kmint/random.hpp"
#include "kmint/map/map.hpp"
#include "kmint/play.hpp"

using namespace kmint;

cowTestState::cowTestState(cow &cow) : _cow(cow){

}

void cowTestState::act(/*cow &cow,*/ kmint::delta_time dt) {
	t_passed_ += dt;
	if (to_seconds(t_passed_) >= 1) {
		// pick random edge
		int next_index = random_int(0, _cow.node().num_edges());
		_cow.node(_cow.node()[next_index].to());
		t_passed_ = from_seconds(0);
	}
}