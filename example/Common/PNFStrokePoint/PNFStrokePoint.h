//
//  PNFStrokePoint.h
//  PenTestOSX
//
//  Created by Luidia on 2019
//  Copyright © 2019년 Luidia. All rights reserved.
//

//#import <UIKit/UIKit.h>
#import <Cocoa/Cocoa.h>

@interface PNFStrokePoint:NSObject {

	CGPoint		pt;
	float		press;
}

@property(readwrite) CGPoint pt;
@property(readwrite) float press;
@end
