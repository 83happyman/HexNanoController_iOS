//
//  VerticalScaleView.h
//  iGCS
//
//  Created by Claudio Natoli on 12/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DoubleBufferedAsyncView.h"

@interface VerticalScaleView : DoubleBufferedAsyncView

@property (nonatomic) NSInteger scale;
@property (nonatomic) float value;
@property (nonatomic) float targetDelta;

@property (nonatomic) BOOL ceilingThresholdEnabled;
@property (nonatomic) float ceilingThreshold;
@property (nonatomic, retain) UIColor* ceilingThresholdBackground;

- (void) drawToContext:(CGContextRef)ctx rect:(CGRect)rect;

@end
