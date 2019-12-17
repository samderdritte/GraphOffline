//
//  MaxClique.cpp
//  Graphoffline
//
//  Created by Samuel on 17.12.19.
//
//

#include "MaxClique.h"
#include "IAlgorithmFactory.h"
#include <list>
#include <string.h>
#include <algorithm>
#include "Logger.h"
#include <vector>

MaxClique::MaxClique ()
{

}

MaxClique::~MaxClique ()
{

}

bool MaxClique::Calculate()
{
    // TODO implement
}

// Highglight nodes count.
IndexType MaxClique::GetHightlightNodesCount() const
{
    return (IndexType)m_MaxClique.size();
}

// Hightlight node.
ObjectId MaxClique::GetHightlightNode(IndexType index) const
{
    return m_MaxClique[index];
}

// Hightlight edges count.
IndexType MaxClique::GetHightlightEdgesCount() const
{
    // a clique of size n has n(n-1)/2 edges
    return m_MaxClique.size()*(m_MaxClique.size() - 1) / 2;
}

// Hightlight edge.
NodesEdge MaxClique::GetHightlightEdge(IndexType index) const
{
    // TODO implement
}

// Get result count.
IndexType MaxClique::GetResultCount() const
{
    // TODO implement
}

// Get result.
AlgorithmResult MaxClique::GetResult(IndexType index) const
{
    // TODO implement
}