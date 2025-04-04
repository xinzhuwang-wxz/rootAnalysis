//
// Created by Bamboo on 2025/4/1.
//

#ifndef JOB_GGH_BASEALGORITHM_H
#define JOB_GGH_BASEALGORITHM_H
#include "Data.h"

class BaseAlgorithm {
public:
    BaseAlgorithm() = default;
    virtual ~BaseAlgorithm() = default;

    virtual void initialize(Data* data) = 0;
    virtual void execute() = 0;
    virtual void finalize() = 0;
};

#endif //JOB_GGH_PY_ALGORITHM_H
