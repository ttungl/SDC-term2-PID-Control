# **PID Controller Project**
[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)
    
    Tung Thanh Le
    ttungl at gmail dot com
   

---

#### Project description: 

+ The results are below with [video demo case 1](https://youtu.be/-nDjcm7bBr8) and [case 2](https://youtu.be/6dhbnDeH93Y) for a full lap.

* Case 1: Fixed throttle value around 30 mph.

<img src="https://github.com/ttungl/SDC-term2-PID-Control/blob/master/output/case1-1.gif" height="149" width="270"> <img src="https://github.com/ttungl/SDC-term2-PID-Control/blob/master/output/case%201-2.gif" height="149" width="270"> 

* Case 2: Using PID for both steering and throttle values (Added the percentages for them to mitigate the overshooting values).

<img src="https://github.com/ttungl/SDC-term2-PID-Control/blob/master/output/case2-1.gif" height="149" width="270"> <img src="https://github.com/ttungl/SDC-term2-PID-Control/blob/master/output/case2-2.gif" height="149" width="270">

#### The goals / steps of this project are the following:
* No tire may leave the drivable portion of the track surface. 

This implementation followed the [rubric points](https://review.udacity.com/#!/rubrics/824/view). The details will be explained in the next sections. 

#### Discussion

+ Describes the effect of the P, I, D component of the PID algorithm in their implementation:
  * Case 1: Fixed throttle value around 30 mph.
    + P: [demo](https://youtu.be/tW18mDud1_Q)
    + PI: [demo](https://youtu.be/TtSkCDoeCaI)
    + PD: [demo](https://youtu.be/nuCv8yUmmYQ)
    + PID: [demo](https://youtu.be/-nDjcm7bBr8)

  * Case 2: Using PID for both steering and throttle values.
    + P: [demo](https://youtu.be/NWOQzM9yhd4)
    + PI: [demo](https://youtu.be/ProArN8M0tg)
    + PD: [demo](https://youtu.be/UTgf1RHjhjc)
    + PID: [demo](https://youtu.be/6dhbnDeH93Y)

+ Hyperparameter tuning/optimization:

+ Final hyperparameters chosen (P, I, D coefficients):

+ Conclusion:

