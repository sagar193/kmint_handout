#include "kmint/math/vector2d.hpp" // voor window en app
#include "kmint/ui.hpp"            // voor window en app4
#include "kmint/play.hpp"          // voor stage
#include "rectangle_drawable.h"


class hello_actor : public kmint::play::free_roaming_actor {
public:
	hello_actor(kmint::math::vector2d location)
		: free_roaming_actor{ location }, drawable_{ *this } {}

	const kmint::ui::drawable &drawable() const override { return drawable_; }
	void move(kmint::math::vector2d delta) { location(location() + delta); }

private:
	rectangle_drawable drawable_;
};