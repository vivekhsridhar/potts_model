//
//  parameteres.h
//  potts_model
//
//  Created by Vivek Hari Sridhar on 29/09/17.
//  Copyright © 2017 Vivek Hari Sridhar. All rights reserved.
//

#ifndef parameteres_h
#define parameteres_h

#include "spin.h"
#include <fstream>

const double boltzmann_constant = 1.0;

int     timestep_number;    // timestep number
int     grid_size;
int     spin_magnetisation;
int     number_of_states;

double  spin_energy;
double  temperature;
double  beta;

spin* agent;

int main();
void FlipSpins();
void CalculateSystemProperties(int spin_id);
void CalculateSpinProperties(double& energy, int& magnetisation, int spin_id);
int  KroneckerDelta(int si, int sj);
void SetupSimulation();
void SetupSpins();

void Graphics();
void GraphicsWriter(cv::VideoWriter& video_writer, int& timestep_number, const int& num_timesteps);

#endif /* parameteres_h */
