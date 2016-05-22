#ifndef _KALMAN_H_
#define _KALMAN_H_
 
 #ifdef __cplusplus
extern "C" {
#endif

 typedef struct  {
     /* on Kalman the filter the Variables */ 
     double Q_angle; // Process for variance at The Noise The Accelerometer 
     double Q_bias; // Process Noise variance for BIAS at The Gyro 
     double R_measure; // the Measurement Noise variance - Actually at The variance of the this IS at The Noise Measurement 
 
     double Angle; // at The Angle Calculated by the filter at The on Kalman - Part of 2X1 State the Vector at The 
     double BIAS; // at The Gyro at The BIAS Calculated by the filter on Kalman - Part of the Vector State at The 2X1 
     double Rate; // Photos Unbiased Rate Calculated from at The Calculated Rate and at The BIAS - you have have to Call to Update at The getAngle Rate 
 
     double P [ 2 ] [ 2 ]; // the Error covariance Matrix - This IS A 2x2 Matrix 
     double K [ 2 ]; // on Kalman GAIN - This IS A 2X1 the Vector 
     double Y; // Angle Difference 
     double S; // Estimate error 
 }on_kalman;

void    the_Init (on_kalman *klm);
double getAngle ( on_kalman *klm, double newAngle, double newRate, double dt);

 #ifdef __cplusplus
}
 #endif
#endif 


