//
//  SetCard.h
//  Matchismo3
//
//  Created by ROCHANNE MIRANDA on 10/13/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import "Card.h"

// Each card in Set has:

// number   - 1, 2, 3
// symbol   - diamond, squiggle, oval
// shading  - solid, striped, open
// color    - red, green, purple

@interface SetCard : Card

@property (nonatomic) NSUInteger number;
@property (nonatomic,strong) NSString *symbol;
@property (nonatomic,strong) NSString *shading;
@property (nonatomic,strong) NSString *color;

+(NSArray *)validSymbols;
+(NSArray *)validShadings;
+(NSArray *)validColors;

@end
