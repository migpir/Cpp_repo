//============================================================================
// Name        : proj3.cpp
// Author      : Miguel H. Peralta
// Version     :
// Copyright   : Your copyright notice
// Description : This program implements a Kalman filter to obtain the
//             : best estimate of the position of a train running along a
//             : linear track with no turns.  The position and velocity are
//             : predicted 2 seconds ahead every 10 samples per second.
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;




int main() {

//  Ground speed and position

//  Set true trajectory

// Xtrue is the true position of the train

//  MOTION EQUATIONS


	// Previous state (initial guess): Our guess is that the train starts
	// at 0.0 with velocity that equals to 50% of the real velocity


    // Current state estimate

	// Motions equation: Xk = Phi*Xk_prev + Noise.  Or, Xk(n) = Xk(n-1) +Vk(n-1)*dt
	// of course, V is not measured but it is estimated
	// Phi represents the dynamics of the system: it is the motion equation

	// The error matrix (or the confidence matrix): P states whether we should give more weight
	// to the new measurement or to the model estimate



	// Q is the process noise covariance.  It represents the amount of uncertainty
	// in the model.  In our case, we arbitratily assume that the model is
	// perfect ( no acceleration allowed for the train; or in other words: any acceleration
	// is considered to be a noise).


	// M is the measurement matrix.  We measure X, so M(1) = 1
	// We do not measure V, so M(2) = 0


	// R is the measurement noise covariance.  Generally R and sigma_meas
	// can vary between samples.


	//******************************************************//
	//                   Kalman Iteration
	//*****************************************************//

	   // Buffers for later display


	   //For Nsamples, Z is the measurement vector. In this example
	   // Z = True_Data + Random_Gaussian_Noise


	   //  Kalman iteration

	   // K is Kalman gain.  If K is large, more weight goes to the
	   // measurement.  If K is small, more weight goes to the model prediction.

	   // For the next iteration

	   // end;


	cout << "Test printout"<< endl;
	return 0;
}
