#ifndef KMINTAPP_PILL_HPP
#define KMINTAPP_PILL_HPP

#include "kmint/map/map.hpp"
#include "kmint/play.hpp"
#include "kmint/primitives.hpp"
#include "kmint/random.hpp"
#include <map>
#include <memory>


class pill : public kmint::play::map_bound_actor {
public:
	pill(kmint::map::map_graph const &g);
	// wordt elke game tick aangeroepen
	void act(kmint::delta_time dt) override;
	kmint::ui::drawable const &drawable() const override { return drawable_; }
	// als incorporeal false is, doet de actor mee aan collision detection
	bool incorporeal() const override { return false; }
	// geeft de radius van deze actor mee. Belangrijk voor collision detection
	kmint::scalar radius() const override { return 16.0; }

private:
	// hoeveel tijd is verstreken sinds de laatste beweging
	kmint::delta_time t_passed_{};
	// weet hoe de gun getekend moet worden
	kmint::play::image_drawable drawable_;
	// edge_type const *next_edge_{nullptr};
	// edge_type const *pick_next_edge();
};


#endif /* KMINTAPP_PILL_HPP */