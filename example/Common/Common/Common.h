//
//  Common.h
//  PenTestOSX
//
//  Created by Luidia on 2019
//  Copyright © 2019년 Luidia. All rights reserved.
//

#ifndef PenTestOSX_Common_h
#define PenTestOSX_Common_h

enum CalibrationSize {
    Letter = 0,
    A4,
    A5,
    B5,
    B6,
    Custom,
    FT6X4,
    FT6X5,
    FT8X4,
    FT8X5,
    FT3X5,
    FT3X6,
    FT4X6,
    FT3X5_BOTTOM,
    FT3X6_BOTTOM,
    FT4X6_BOTTOM,
};

// TODO:: marker
#define FT_6X4()\
calResultPoint[0] = CGPointMake(1728, 45372);\
calResultPoint[1] = CGPointMake(1728, 54824);\
calResultPoint[2] = CGPointMake(15524, 54824);\
calResultPoint[3] = CGPointMake(15524, 45372);\

// TODO:: marker
#define FT_6X5()\
calResultPoint[0] = CGPointMake(1830, 44156);\
calResultPoint[1] = CGPointMake(1830, 56034);\
calResultPoint[2] = CGPointMake(15506, 56034);\
calResultPoint[3] = CGPointMake(15506, 44156);\

// TODO:: marker
#define FT_7X4()\
calResultPoint[0] = CGPointMake(1883, 45300);\
calResultPoint[1] = CGPointMake(1883, 55219);\
calResultPoint[2] = CGPointMake(18514, 55219);\
calResultPoint[3] = CGPointMake(18514, 45300);\

// TODO:: marker
#define FT_8X4()\
calResultPoint[0] = CGPointMake(1868, 45377);\
calResultPoint[1] = CGPointMake(1868, 54735);\
calResultPoint[2] = CGPointMake(20153, 54735);\
calResultPoint[3] = CGPointMake(20153, 45377);\

// TODO:: marker
#define FT_8X5()\
calResultPoint[0] = CGPointMake(1810, 44163);\
calResultPoint[1] = CGPointMake(1810, 55938);\
calResultPoint[2] = CGPointMake(20164, 55938);\
calResultPoint[3] = CGPointMake(20164, 44163);\

// TODO:: marker
#define FT_3X5()\
calResultPoint[0] = CGPointMake(12790, 1547);\
calResultPoint[1] = CGPointMake(12790, 13248);\
calResultPoint[2] = CGPointMake(19966, 13248);\
calResultPoint[3] = CGPointMake(19966, 1547);\

#define FT_3X5_BOTTOM()\
calResultPoint[0] = CGPointMake(46612, 53961);\
calResultPoint[1] = CGPointMake(46612, 65662);\
calResultPoint[2] = CGPointMake(53788, 65662);\
calResultPoint[3] = CGPointMake(53788, 53961);\

#define FT_3X6()\
calResultPoint[0] = CGPointMake(12790, 1532);\
calResultPoint[1] = CGPointMake(12790, 15298);\
calResultPoint[2] = CGPointMake(19966, 15298);\
calResultPoint[3] = CGPointMake(19966, 1532);\

#define FT_3X6_BOTTOM()\
calResultPoint[0] = CGPointMake(46612, 51800);\
calResultPoint[1] = CGPointMake(46612, 65566);\
calResultPoint[2] = CGPointMake(53788, 65566);\
calResultPoint[3] = CGPointMake(53788, 51800);\

#define FT_4X6()\
calResultPoint[0] = CGPointMake(11551, 1532);\
calResultPoint[1] = CGPointMake(11551, 15298);\
calResultPoint[2] = CGPointMake(21303, 15298);\
calResultPoint[3] = CGPointMake(21303, 1532);\

#define FT_4X6_BOTTOM()\
calResultPoint[0] = CGPointMake(45338, 51900);\
calResultPoint[1] = CGPointMake(45338, 65666);\
calResultPoint[2] = CGPointMake(55089, 65666);\
calResultPoint[3] = CGPointMake(55089, 51900);\

#endif
