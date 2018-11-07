#include "kmint/graphics.hpp"      // kleuren en afbeeldingen
#include "kmint/play.hpp"          // voor stage
#include "kmint/ui.hpp"            // voor window en app4

class rectangle_drawable : public kmint::ui::drawable {
public:
	rectangle_drawable(kmint::play::actor const &actor) : drawable{}, actor_{ &actor } {}
	void draw(kmint::ui::frame &f) const override;

private:
	kmint::play::actor const *actor_;
};

