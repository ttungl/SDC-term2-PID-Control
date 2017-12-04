#include "PID.h"
#include <cmath>
#include <iostream>

// using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

/**
Init
**/
void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;
	this->p_error = 0.0;
	this->i_error = 0.0;
	this->d_error = 0.0;

	// tuning parameters
	step_count = 1; 
	num_init_steps = 50; 
	num_eval_steps = 3000; 
	total_error = 0.0;

}

/**
Update Error
**/
void PID::UpdateError(double cte) {
	if (step_count==1) {
		p_error = cte;
	}
	d_error = cte - p_error; // D
	i_error += cte; // I
	p_error = cte; // P
	
	// update total_error after passing the init steps
	if ((step_count % num_eval_steps) > num_init_steps) {
		total_error += pow(cte, 2); // cte^2
	}

	step_count++;
}

/**
Total Error
**/
double PID::TotalError() {
	// total_error = 0.0;
	return total_error;

}

