#ifndef KMINTAPP_COW_HPP
#define KMINTAPP_COW_HPP

#include "kmint/map/map.hpp"
#include "kmint/play.hpp"
#include "kmint/primitives.hpp"
#include "cowState.hpp"
#include "cowTestState.hpp"
#include <map>
#include <memory>
#include "states/State.hpp"
#include "states/cow/CowWanderState.hpp"

class cow : public kmint::play::map_bound_actor {
public:

	enum STATE_NAMES {
		WANDER_STATE,
		ATTACK_STATE,
		FIND_PILL_STATE
	};

	cow(kmint::map::map_graph const &g, kmint::map::map_node const &initial_node);
	// wordt elke game tick aangeroepen
	void act(kmint::delta_time dt) override;
	kmint::ui::drawable const &drawable() const override { return drawable_; }
	// als incorporeal false is, doet de actor mee aan collision detection
	bool incorporeal() const override { return false; }
	// geeft de radius van deze actor mee. Belangrijk voor collision detection
	kmint::scalar radius() const override { return 16.0; }
	
	void setPathTo(const kmint::play::map_bound_actor &goalActor);
	const std::vector<const kmint::map::map_node*> get_path() const;
	void SetState(STATE_NAMES state);
private:

	// hoeveel tijd is verstreken sinds de laatste beweging
	kmint::delta_time t_passed_{};
	// weet hoe de koe getekend moet worden
	kmint::play::image_drawable drawable_;
	// edge_type const *next_edge_{nullptr};
	// edge_type const *pick_next_edge();

	void RegisterStates();
	State* currentState;
	std::map<STATE_NAMES, std::unique_ptr<State>> States;
	std::vector<const kmint::map::map_node*> path;
};

#endif /* KMINTAPP_COW_HPP */