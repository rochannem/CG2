//
//  GameSettings.h
//  Matchismo3
//
//  Created by ROCHANNE MIRANDA on 10/14/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GameSettings : NSObject

@property (nonatomic) int bonus;
@property (nonatomic) int penalty;
@property (nonatomic) int flipCost;

- (id)initFromUserDefaults;
- (void)synchronize;
- (void) defaults;
@end
