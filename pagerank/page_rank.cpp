#include "page_rank.h"

#include <stdlib.h>
#include <cmath>
#include <omp.h>
#include <utility>

#include "../common/CycleTimer.h"
#include "../common/graph.h"


// pageRank --
//
// g:           graph to process (see common/graph.h)
// solution:    array of per-vertex vertex scores (length of array is num_nodes(g))
// damping:     page-rank algorithm's damping parameter
// convergence: page-rank algorithm's convergence threshold
//
void pageRank(Graph g, double* solution, double damping, double convergence)
{

  // initialize vertex weights to uniform probability. Double
  // precision scores are used to avoid underflow for large graphs

  int numNodes = num_nodes(g);
  double equal_prob = 1.0 / numNodes;
  for (int i = 0; i < numNodes; ++i) {
    solution[i] = equal_prob;
  }

  /* 418/618 Students: Implement the page rank algorithm here.  You
     are expected to parallelize the algorithm using openMP.  Your
     solution may need to allocate (and free) temporary arrays.

     Basic page rank pseudocode:

     while (!converged) {
       total_diff = 0

       for all vertices vi {
         diff[vi] = 0
         score_new[vi] = 0

         // accumulate from neighboring nodes
         for vertices vj connected via outbound edges {
            score_new[vi] += score_old[vj] / (number of edges leaving vj);
         }

         // apply damping
         score_new[vi] = damping * score_new[vi] + (1.0 - damping) / numNodes;

         diff[vi] += abs(score_new[vi] - score_old[vi]);
         total_diff += diff[vi];
       }

       // quit when distribution has converged
       converged = total_diff < convergence;
     }

   */
}
