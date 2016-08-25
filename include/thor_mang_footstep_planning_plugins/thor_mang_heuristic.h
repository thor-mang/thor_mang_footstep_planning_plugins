//=================================================================================================
// Copyright (c) 2016, Alexander Stumpf, TU Darmstadt
// All rights reserved.

// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the Simulation, Systems Optimization and Robotics
//       group, TU Darmstadt nor the names of its contributors may be used to
//       endorse or promote products derived from this software without
//       specific prior written permission.

// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//=================================================================================================

#ifndef THOR_MANG_HEURISTIC_H__
#define THOR_MANG_HEURISTIC_H__

#include <vigir_footstep_planning_lib/math.h>

#include <vigir_footstep_planning_plugins/plugins/heuristic_plugin.h>



namespace thor_mang_footstep_planning
{
using namespace vigir_footstep_planning;

class ThorMangHeuristic
  : public HeuristicPlugin
{
public:
  ThorMangHeuristic();

  bool loadParams(const vigir_generic_params::ParameterSet& global_params = vigir_generic_params::ParameterSet()) override;

  double getHeuristicValue(const State& from, const State& to, const State& start, const State& goal) const override;

protected:
  double step_cost_;
  double diff_angle_cost_;

  /// longest step width
  double max_step_dist_x_inv_;
  double max_step_dist_y_inv_;
};
}

#endif
