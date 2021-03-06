#ifndef GRAPH_H_
#define GRAPH_H_

#include <string>
#include <vector>

namespace entity_project {

class IGraphNode;

/// Represents a read only graph object
class IGraph {
public:
	/// Destructor
	virtual ~IGraph() {}
	/// Gets a node in the graph by name
	virtual const IGraphNode* GetNode(const std::string& name) const = 0;
	/// Gets all nodes in the graph
	virtual const std::vector<IGraphNode*>& GetNodes() const = 0;

  /// Given a source and destination in the form of 3-element x,y,z vectors,
  /// this function will return a list of positions to traverse in-order, which
  /// avoids the geometry of the scene. The returned path includes the source
  /// and destination points.
  virtual const std::vector< std::vector<float> > 
    GetPath(std::vector<float> src, std::vector<float> dest) const = 0;
};

/// Represents a node in a graph object
class IGraphNode {
public:
	/// Destructor
	virtual ~IGraphNode() {}
	/// Gets the node name
	virtual const std::string& GetName() const = 0;
	/// Gets the node's neighbors
	virtual const std::vector<IGraphNode*>& GetNeighbors() const = 0;
	/// Gets the node's position
	virtual const std::vector<float> GetPosition() const = 0;
};

}

#endif