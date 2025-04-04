//
// Created by Bamboo on 2025/4/3.
//


#ifndef JOB_GGH_PY_ALGORITHM_H
#define JOB_GGH_PY_ALGORITHM_H

#include "BaseAlgorithm.h"
#include "Data.h"
#include "TString.h"
#include "TH1D.h"

//继承baseAlgorithm
class Algorithm : public BaseAlgorithm {
public:
    Algorithm();
    virtual ~Algorithm() override;
    void initialize(Data* data) override;
    void execute() override;
    void finalize() override;

    TH1D* h_ditau_m = 0;

protected:
    Data* m_data = 0;
};


#endif //JOB_GGH_PY_ALGORITHM_H
