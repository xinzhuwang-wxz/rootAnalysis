//
// Created by Bamboo on 2025/4/3.
//

#include "Algorithm.h"

Algorithm::Algorithm() {
}

Algorithm::~Algorithm() {
    if (h_ditau_m) delete h_ditau_m;
}

void Algorithm::initialize(Data *data) {
    m_data = data;
}

void Algorithm::execute() {
    if(h_ditau_m) h_ditau_m->Fill( m_data->ditau_mmc_mlm_m );
}

void Algorithm::finalize() {
    h_ditau_m = 0;
}

