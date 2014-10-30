//
//  Card.h
//  Matchismo
//
//  Created by ROCHANNE MIRANDA on 9/21/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong,nonatomic) NSString *contents;

@property (nonatomic,getter = isChosen) BOOL chosen;
@property (nonatomic,getter = isMatched) BOOL matched;
@property (nonatomic,weak)NSString *description;

-(int)match:(NSArray *)otherCards;
@end
