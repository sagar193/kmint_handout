#include "dijkstra.hpp"
#include <map>
#include <algorithm>

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




void dijkstra::use(const kmint::map::map_node &firstNode, const kmint::map::map_node &lastNode)
{
	std::map<const kmint::map::map_node*, kmint::map::map_node> previous;
	std::map<const kmint::map::map_node*, float> cost;
	
	std::vector<const kmint::map::map_node*> que;
	std::vector<const kmint::map::map_node*> visited;
	
	cost[&firstNode] = 0;
	que.push_back(&firstNode);



	const kmint::map::map_node * smallestVertex = nullptr;
	for (auto i = que.begin();i != que.end(); ++i) {
		if (smallestVertex == nullptr && cost[*i] < cost[smallestVertex]) {
			smallestVertex = *i;
		}
	}

	/*
	for (std::size_t i = 0; i < smallestVertex->num_edges(); ++i) {
		if (std::find(visited.begin(), visited.end(), (smallestVertex->operator[](i).to)) != visited.end()) {


			que.push_back(smallestVertex->operator[](i).to);
			auto edge = smallestVertex->operator[](i);
			if (cost[edge.to] > (cost[smallestVertex] + edge.weight)) {
				cost[edge.to] = cost[smallestVertex] += edge.weight;
			}
		}
	}
	//visited.push_back(firstNode);
	*/
	

}