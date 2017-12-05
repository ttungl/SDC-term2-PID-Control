# **PID Controller Project**
[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)
    
    Tung Thanh Le
    ttungl at gmail dot com
   

---

#### Project description: 

+ The results are below with [video demo case 1](https://youtu.be/-nDjcm7bBr8) and [case 2](https://youtu.be/6dhbnDeH93Y) for a full lap.

* Case 1: Fixed throttle value around 30 mph.

<img src="https://github.com/ttungl/SDC-term2-PID-Control/blob/master/output/case1-1.gif" height="149" width="270"> <img src="https://github.com/ttungl/SDC-term2-PID-Control/blob/master/output/case%201-2.gif" height="149" width="270"> 

* Case 2: Using PID for both steering and throttle values.

<img src="https://github.com/ttungl/SDC-term2-PID-Control/blob/master/output/case2-1.gif" height="149" width="270"> <img src="https://github.com/ttungl/SDC-term2-PID-Control/blob/master/output/case2-2.gif" height="149" width="270">

#### The goals / steps of this project are the following:
* No tire may leave the drivable portion of the track surface. 

This implementation followed the [rubric points](https://review.udacity.com/#!/rubrics/824/view). The details will be explained in the next sections. 

#### Discussion

+ Describes the effect of the P, I, D component of the PID algorithm in their implementation:
  
  * The Proportional Control (P): This causes the car steering proportionally to the car's distance from the center of the track (cross track error (CTE)). If the car goes to the right, it steers to the left. If "P" is too high, the oscillation will be large, and the car will be likely to waggle out of the track.

  * The Integral Control (I): This sums up all the CTEs from all steps until that point of time, it helps prevent the car performing bias on a side of the track. If "I" is too high, the oscillation will be quicker and it retards the response to the speed. If it is too low, the car will be drifted on a side in a long term period.

  * The Derivative Control (D): This helps the car correct the changes quickly (i.e. steering faster) and smoothly. If "D" is too high, it leads to steering changes of large angles, and if it is too low, it results in oscillation with overshooting. 

  * Case 1: Fixed throttle value around 30 mph.
    + P: This [demo](https://youtu.be/tW18mDud1_Q) demonstrates the proportional controller for controlling the car. 
    + PI: This [demo](https://youtu.be/TtSkCDoeCaI) demonstrates the P-I controllers for controlling the car. 
    + PD: This [demo](https://youtu.be/nuCv8yUmmYQ) demonstrates the P-D controllers performance. 
    + PID: This [demo](https://youtu.be/-nDjcm7bBr8) performs the PID controller by combining three controllers. 

  * Case 2: Using PID for both steering and throttle values.
    + P: This [demo](https://youtu.be/NWOQzM9yhd4) demonstrates the proportional controller for controlling the car. 
    + PI: This [demo](https://youtu.be/ProArN8M0tg) demonstrates the P-I controllers for controlling the car. 
    + PD: This [demo](https://youtu.be/UTgf1RHjhjc) demonstrates the P-D controllers performance. 
    + PID: This [demo](https://youtu.be/6dhbnDeH93Y) performs the PID controller by combining three controllers. 

+ Hyperparameter tuning/optimization:

+ Final hyperparameters chosen (P, I, D coefficients):

+ Conclusion:

