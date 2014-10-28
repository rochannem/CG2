//
//  PlayingCardViewController.m
//  Matchismo
//
//  Created by ROCHANNE MIRANDA on 10/13/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import "PlayingCardViewController.h"
#import "PlayingCardDeck.h"


@interface PlayingCardViewController ()

@end

@implementation PlayingCardViewController

- (Deck *)createDeck
{
    return [[PlayingCardDeck alloc] init];
}
@end
