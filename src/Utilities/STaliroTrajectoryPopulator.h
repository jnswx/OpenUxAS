/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   STaliroTrajectoryPopulator.h
 * Author: etuncali
 *
 * Created on June 19, 2017, 10:21 AM
 */

#ifndef STALIROTRAJECTORYPOPULATOR_H
#define STALIROTRAJECTORYPOPULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <map>
#include "UxAS_Log.h"

namespace testgeneration
{
    namespace staliro
    {
        class c_TrajectoryPopulator
        {
        public:
            c_TrajectoryPopulator();
            virtual ~c_TrajectoryPopulator(){};
            
            void populateTrajectory(void* receivedLmcpMessage, 
                    std::map<int64_t, std::vector<double>>* trajectory);
        protected:

        };
    }
}

#endif /* STALIROTRAJECTORYPOPULATOR_H */
