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
#import "GameSettings.h"

@interface CardGameViewController : UIViewController

@property (nonatomic)NSUInteger startingCardCount;  //abstract
@property (nonatomic)BOOL addCardsAfterDelete; //abstract

@property (nonatomic, strong) CardMatchingGame *game;
@property (strong, nonatomic) GameSettings *gameSettings;
@property (nonatomic) NSInteger scoreAdjustment;

// protected
// for subclasses
- (Deck *)createDeck;   //abstract
- (NSUInteger)numberOfMatches; //abstract
- (CGFloat)cardAspectRatio; //abstract


- (UIView *)cellViewForCard:(Card *)card inRect:(CGRect)rect; //abstract
- (void) updateCell:(UIView *)cell usingCard:(Card *)card animate:(BOOL)animate; //abstract
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;
- (IBAction)Deal;
- (void)updateUI;


@end
