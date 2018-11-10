#pragma once
#include "kmint/graph/basic_edge.hpp"
#include "kmint/graph/basic_graph.hpp"
#include "kmint/graph/basic_node.hpp"
#include "kmint/map/map.hpp"
#include "kmint/math/size.hpp"

struct map_node_info {
	/*! \brief The kind of tile.

	  This could for instance convey information about the type of area:
	  grassland, or desert or water.
	*/
	char kind;
};

class dijkstra
{
public:
	dijkstra();
	~dijkstra();
	void use(const kmint::graph::basic_node<map_node_info> &firstNode, const kmint::graph::basic_node<map_node_info> &lastNode);
private:

};