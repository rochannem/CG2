//
//  CardGameViewController.h
//  Matchismo
//
//  Created by ROCHANNE MIRANDA on 9/21/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//
// Abstract class. Must implement methods as describeed below.

#import <UIKit/UIKit.h>
#import "Deck.h"
#import "CardMatchingGame.h"

@interface CardGameViewController : UIViewController

@property (nonatomic)NSUInteger startingCardCount;  //abstract
@property (nonatomic)BOOL addCardsAfterDelete; //abstract


// protected
// for subclasses
- (Deck *)createDeck;   //abstract
- (NSUInteger)numberOfMatches; //abstract
- (CGFloat)cardAspectRatio; //abstract


- (UIView *)cellViewForCard:(Card *)card inRect:(CGRect)rect; //abstract
- (void) updateCell:(UIView *)cell usingCard:(Card *)card animate:(BOOL)animate; //abstract

@end
