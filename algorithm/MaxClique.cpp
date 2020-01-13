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
    printf("max clique calculation started...\n");
    const IGraph* currentGraph = m_pGraph;
    const std::vector<std::vector<bool>> adjacencyMatrix = GetAdjacencyMatrixBool(*currentGraph);
    bool** adjMatrixPtr = ConvertAdjacencyMatrix(adjacencyMatrix);
    int size = adjacencyMatrix.size();

    // test printout of adjacency matrix
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; j++){
            if(adjMatrixPtr[i][j]){
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    

    // TODO implement
    printf("max clique calculation ended...\n");
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

bool** MaxClique::ConvertAdjacencyMatrix(const std::vector<std::vector<bool>> & adjacencyMatrix)
{
    int size = adjacencyMatrix.size();
    bool** adjMatrixPtr = new bool*[size];
    for (int i = 0; i < size; i++){
        adjMatrixPtr[i] = new bool[size];
        memset(adjMatrixPtr[i], 0, size * sizeof(bool));

    }
    for(int i = 0; i < adjacencyMatrix.size(); ++i){
        for(int j = 0; j < adjacencyMatrix[i].size(); j++){
            adjMatrixPtr[i][j] = adjacencyMatrix[i][j];
        }
    }
    return adjMatrixPtr;
}