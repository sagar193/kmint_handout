#pragma once
#include "kmint/graph/basic_edge.hpp"
#include "kmint/graph/basic_graph.hpp"
#include "kmint/graph/basic_node.hpp"
#include "kmint/map/map.hpp"
#include "kmint/math/size.hpp"

class aStar
{
public:
	aStar();
	~aStar();
	void FindShortestPath(const kmint::map::map_node &firstNode, const kmint::map::map_node &lastNode);
private:

};