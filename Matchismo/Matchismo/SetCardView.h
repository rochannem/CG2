//
//  SetCardView.h
//  SuperSetCard
//
//  Created by ROCHANNE MIRANDA on 10/20/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SetCardView : UIView

//@property (strong, nonatomic) NSString *shape;
@property (nonatomic,strong) NSString *symbol;
@property (nonatomic,strong) NSString *shading;
@property (nonatomic,strong) NSString *color;

@property (nonatomic) NSUInteger rank;

@property (nonatomic) BOOL faceUp;

//-(void)pinch:(UIPinchGestureRecognizer *)gesture;
              
@end
