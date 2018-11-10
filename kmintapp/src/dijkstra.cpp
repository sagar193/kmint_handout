#include "dijkstra.hpp"
#include <map>

/*
struct queItem
{
	queItem() = default;
	queItem(kmint::graph::basic_node < map_node_info > node, int cost) 
	{
		this->cost = cost;
		this->node = node;
	};
	kmint::graph::basic_node < map_node_info > node;
	int cost;
};*/

dijkstra::dijkstra()
= default;

dijkstra::~dijkstra()
= default;




void dijkstra::use(const kmint::graph::basic_node<map_node_info> &firstNode, const kmint::graph::basic_node<map_node_info> &lastNode) 
{
	std::map<const kmint::graph::basic_node<map_node_info>*, kmint::graph::basic_node<map_node_info>> previous;
	std::map<const kmint::graph::basic_node<map_node_info>*, int> cost;
	
	std::vector<const kmint::graph::basic_node<map_node_info>*> que;
	std::vector<const kmint::graph::basic_node<map_node_info>*> visited;
	
	cost[&firstNode] = 0;
	que.push_back(&firstNode);



	kmint::graph::basic_node<map_node_info> * smallestEdge;
	for (auto i = que.begin();i != que.end(); ++i) {
		smallestEdge = que[i];
		if (cost[*i] < cost[smallestEdge]) {
			
		}
	}



	for (std::size_t i = 0; i < firstNode.num_edges(); ++i) {
		que.push_back(firstNode[i].to);
		auto edge = firstNode[i];
		cost[edge.to] = edge.weight;
	}
	visited.push_back(firstNode);

	

}