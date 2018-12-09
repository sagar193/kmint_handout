#include "pill.hpp"
#include "kmint/random.hpp"

static const char *pill_image = "resources/pill.png";

using namespace kmint;

map::map_node const &random_pill_node(map::map_graph const &graph) {
	int r = kmint::random_int(0, graph.num_nodes());
	for (std::size_t i = 0; i < graph.num_nodes(); ++i) {
		if (graph[i].node_info().kind == 'G') {
			if (r == 0)
				return graph[i];
			else
				--r;
		}
	}
	throw "could not find node for pill";
}

pill::pill(map::map_graph const &g)
	: play::map_bound_actor{ g, random_pill_node(g) },
	drawable_{ *this, kmint::graphics::image{pill_image, 1} } {}

void pill::act(delta_time dt) {
	t_passed_ += dt;
	if (to_seconds(t_passed_) >= 1) {
		// pick random edge
		int next_index = random_int(0, node().num_edges());
		this->node(node()[next_index].to());
		t_passed_ = from_seconds(0);
	}
}