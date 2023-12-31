//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: baselineCompNN.cpp
//
// MATLAB Coder version            : 5.4
// C/C++ source code generated on  : 27-Jun-2023 10:37:56
//

// Include Files
#include "baselineCompNN.h"
#include <math.h>

// Function Definitions
//
// MYNEURALNETWORKFUNCTION neural network simulation function.
//
//  Auto-generated by MATLAB, 26-Jun-2023 14:36:54.
//
//  [y1] = myNeuralNetworkFunction(x1) takes these arguments:
//    x = 2xQ matrix, input #1
//  and returns:
//    y = 1xQ matrix, output #1
//  where Q is the number of samples.
//
// Arguments    : const float x1[2]
// Return Type  : float
//
float baselineCompNN(const float x1[2])
{
  static const double a[16] = {
      -6.0192860709100975,  -6.3653148083612647, -8.6467564131365826,
      -3.3505899935707477,  3.1485706739035226,  3.0482061809542405,
      -1.3619895564676034,  -0.853615800597313,  0.12168365366382218,
      -0.31645060275021442, 2.1110602292528329,  1.785102975002399,
      -2.1467665593009637,  4.7800629990818333,  6.1595417468845985,
      -5.2532936785792765};
  static const float fv1[32] = {
      4.18063688F,  7.34367085F,   10.3304796F,  -0.203081056F, -6.03786755F,
      -5.6256671F,  -0.566804469F, 1.81448567F,  3.33638573F,   -5.83937F,
      2.6163702F,   1.18431056F,   -4.01206207F, 6.16750908F,   1.39055073F,
      -2.35548878F, 3.58523035F,   0.217820793F, 0.137848631F,  5.61853456F,
      0.721720695F, 0.494231045F,  5.56994915F,  -4.96531963F,  -5.00213099F,
      0.590318084F, 4.44802856F,   -5.85432148F, -4.5020256F,   -0.706865847F,
      -4.02723885F, -5.39753675F};
  static const float fv[16] = {
      0.0322912596F,  -2.23917603F,  2.05701137F,   -0.0657268241F,
      -0.320823848F,  0.171264097F,  -0.253480226F, -0.0690602F,
      0.0634190142F,  -0.151120082F, -0.120223366F, -0.301898926F,
      -0.0671338737F, 0.116088912F,  -0.341813952F, 0.0128450207F};
  float f;
  float xp1_idx_0;
  float xp1_idx_1;
  //  ===== NEURAL NETWORK CONSTANTS =====
  //  Input 1
  //  Layer 1
  //  Layer 2
  //  Output 1
  //  ===== SIMULATION ========
  //  Dimensions
  //  samples
  //  Input 1
  //  ===== MODULE FUNCTIONS ========
  //  Map Minimum and Maximum Input Processing Function
  xp1_idx_0 = x1[0] * 2.0F + -1.0F;
  xp1_idx_1 = x1[1] * 2.0F + -1.0F;
  //  Layer 1
  //  Sigmoid Symmetric Transfer Function
  //  Layer 2
  //  Output 1
  //  Map Minimum and Maximum Output Reverse-Processing Function
  f = 0.0F;
  for (int k = 0; k < 16; k++) {
    f += fv[k] *
         (2.0F /
              (static_cast<float>(exp(static_cast<double>(
                   -2.0F * (static_cast<float>(a[k]) +
                            (fv1[k] * xp1_idx_0 + fv1[k + 16] * xp1_idx_1))))) +
               1.0F) -
          1.0F);
  }
  return ((f + -0.192577943F) - -1.0F) / 2.0F;
}

//
// File trailer for baselineCompNN.cpp
//
// [EOF]
//
