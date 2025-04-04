//
// Created by Bamboo on 2025/4/1.
//

#include "Data.h"

Data::Data(TTree* tree) : m_tree(tree){}

void Data::initialize() {
    m_tree->SetBranchAddress("ditau_mmc_mlm_m", &ditau_mmc_mlm_m);
    m_tree->SetBranchAddress("tau_0", &tau_0);
    m_tree->SetBranchAddress("tau_1", &tau_1);
    m_tree->SetBranchAddress("tau_0_p4", &tau_0_p4);
    m_tree->SetBranchAddress("tau_1_p4", &tau_1_p4);


}

void Data::execute(){

    std::cout << "ditau_mmc_mlm_m: " << ditau_mmc_mlm_m << std::endl;



}

void Data::finalize(){

    ditau_mmc_mlm_m = 0;
    tau_0 = 0;
    tau_1 = 0;
    tau_0_p4 = 0;
    tau_1_p4 = 0;

}