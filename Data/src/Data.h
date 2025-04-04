//
// Created by Bamboo on 2025/4/1.
//

#ifndef JOB_GGH_PY_DATA_H
#define JOB_GGH_PY_DATA_H

#include "TTree.h"
#include "TLorentzVector.h"


class Data {
public:
    Data(TTree* tree);

    void initialize();
    void execute();
    void finalize();


    Float_t ditau_mmc_mlm_m;
    UInt_t tau_0, tau_1;
    TLorentzVector *tau_0_p4=0, *tau_1_p4=0;

protected:
    TTree* m_tree = 0;


};


#endif //JOB_GGH_PY_DATA_H
