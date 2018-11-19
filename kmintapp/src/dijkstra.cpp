#include "dijkstra.hpp"
#include <map>
#include <algorithm>

dijkstra::dijkstra()
= default;

dijkstra::~dijkstra()
= default;




std::vector<const kmint::map::map_node*> dijkstra::FindShortestPath(const kmint::map::map_node &startNode, const kmint::map::map_node &endNode)
{
	std::map<const kmint::map::map_node*, const kmint::map::map_node*> previous;
	std::map<const kmint::map::map_node*, float> cost;
	
	std::vector<const kmint::map::map_node*> que;
	std::vector<const kmint::map::map_node*> visited;
	
	cost[&startNode] = 0;
	que.push_back(&startNode);

	bool found = false;
	//
	while (que.size() > 0 && !found) {
		int it = 0;
		const kmint::map::map_node * smallestVertex = nullptr;
		for (int i = 0;i<que.size(); i++) {
			if (smallestVertex == nullptr || cost[que[i]] < cost[smallestVertex]) {
				smallestVertex = que[i];
				it = i;
			}
		}
		/*
		for (auto i = que.begin(); i != que.end(); ++i) {
			if (smallestVertex == nullptr || cost[*i] < cost[smallestVertex]) {
				smallestVertex = (*i);
			}
		}*/

		for (std::size_t i = 0; i < smallestVertex->num_edges(); ++i) {
			auto edge = (*smallestVertex)[i];
			auto toVertex = &edge.to();
			bool notInVisited = std::find(visited.begin(), visited.end(), toVertex) == visited.end();
			bool notInQue = std::find(que.begin(), que.end(), toVertex) == que.end();

			//TODO add A* weight

			if (notInVisited && notInQue) {
				que.push_back(toVertex);
			}
			if (cost.find(toVertex) == cost.end() || cost[toVertex] > cost[smallestVertex] + edge.weight()) {
				cost[toVertex] = cost[smallestVertex] + edge.weight();
				previous[toVertex] = smallestVertex;
			}
			if (toVertex == &endNode) {
				cost[toVertex] = cost[smallestVertex] + edge.weight();
				previous[toVertex] = smallestVertex;
				found = true;
				break;
			}

		}
		que.erase(que.begin()+it);
		visited.push_back(smallestVertex);
	}

	// TODO tagvisited nodes

	auto lastNode = previous[&endNode];
	std::vector<const kmint::map::map_node*> path;
	while (lastNode != &startNode) {
		path.insert(path.begin(), lastNode);
		lastNode = previous[lastNode];
	}
	return path;
}