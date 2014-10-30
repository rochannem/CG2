//
//  PadView.h
//  Matchismo
//
//  Created by ROCHANNE MIRANDA on 10/24/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PadView : UIView
@property (nonatomic) BOOL pinchedViews;

-(void)pinch:(UIPinchGestureRecognizer *)gesture;
-(void)pan:(UIPanGestureRecognizer *)gesture;

@end
