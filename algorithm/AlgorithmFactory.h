//
//  AlgorithmFactory.hpp
//  Graphoffline
//
//  Created by Олег on 10.12.15.
//
//

#ifndef AlgorithmFactory_hpp
#define AlgorithmFactory_hpp

#include <stdio.h>
#include <map>
#include <memory>
#include "IAlgorithm.h"
#include "YString.h"

// Map of parameter name and value.
typedef std::map<String, String> ParametersMap;

class AlgorithmFactory
{
public:
    
    std::shared_ptr<IAlgorithm> CreateAlgorithm(const IGraph* pGraph, const String& name, const ParametersMap& map);
    
    static AlgorithmFactory& GetSingleton();
    
protected:
    
    AlgorithmFactory();
    ~AlgorithmFactory();
    
    std::shared_ptr<IAlgorithm> CreateAlgorithm(IndexType index);
    
    // Map of algorithms.
    std::map<String, IndexType> m_mAlgorithms;
    
};

#endif /* AlgorithmFactory_hpp */