//
//  PlayingCardView.h
//  SuperCard
//
//  Created by ROCHANNE MIRANDA on 2/15/13.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (nonatomic,strong) NSString *suit;

@property (nonatomic) BOOL faceUp;

-(void)pinch:(UIPinchGestureRecognizer *)gesture;

@end
