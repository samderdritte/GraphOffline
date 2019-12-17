//
//  MaxClique.hpp
//  Graphoffline
//
//  Created by Samuel on 17.12.19.
//
//

#pragma once

#include <stdio.h>
#include "BaseAlgorithm.h"
#include "IGraph.h"
#include <vector>

class MaxClique : public BaseAlgorithm
{
public:
    MaxClique ();
    virtual ~MaxClique ();

    // Long name of algorithm: MaxClique.
    virtual const char* GetFullName() const override {return "MaxClique";};
    // Short name of algorithm: mc
    virtual const char* GetShortName() const override {return "mc";}
    // Calculate algorithm.
    virtual bool Calculate() override;
    // Hightlight nodes count.
    virtual IndexType GetHightlightNodesCount() const override;
    // Hightlight node.
    virtual ObjectId GetHightlightNode(IndexType index) const override;
    // Hightlight edges count.
    virtual IndexType GetHightlightEdgesCount() const override;
    // Hightlight edge.
    virtual NodesEdge GetHightlightEdge(IndexType index) const override;
    // Get result count.
    virtual IndexType GetResultCount() const override;
    // Get result of index. Algorithms can have complex result.
    virtual AlgorithmResult GetResult(IndexType index) const override;


private:

    // The maximum clique for the graph
    std::vector<ObjectId> m_MaxClique;
    
    int m_startNode = 0;
};