/**
 * \copyright
 * Copyright (c) 2012-2017, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 * \file   StaggeredCouplingTerm.cpp
 *
 * Created on November 7, 2016, 12:14 PM
 */

#include "StaggeredCouplingTerm.h"
#include "Process.h"

namespace ProcessLib
{
const StaggeredCouplingTerm createVoidStaggeredCouplingTerm()
{
    std::unordered_map<std::type_index, Process const&> coupled_processes;
    std::unordered_map<std::type_index, GlobalVector const&> coupled_xs;
    const bool empty = true;
    return StaggeredCouplingTerm(coupled_processes, coupled_xs, 0.0, empty);
}

}  // end of ProcessLib
