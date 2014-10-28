//
//  PlayingCard.m
//  Matchismo
//
//  Created by ROCHANNE MIRANDA on 9/21/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import "PlayingCard.h"

@implementation PlayingCard

@synthesize suit = _suit;

+ (NSArray *)validSuits
{
    return @[@"♥️", @"♦️", @"♠️", @"♣️"];
}

+ (NSArray *)rankStrings
{
    return @[@"?", @"A", @"2", @"3", @"4", @"5", @"6", @"7", @"8", @"9", @"10", @"J", @"Q", @"K"];
}

+ (NSUInteger)maxRank
{
    return [[self rankStrings] count] - 1;
}

- (NSString *)contents
{
    return [[PlayingCard rankStrings][self.rank] stringByAppendingString:self.suit];
}

- (void)setSuit:(NSString *)suit
{
    if ([[PlayingCard validSuits] containsObject:suit]) {
        _suit = suit;
    }
}

- (NSString *)suit
{
    return _suit ? _suit : @"?";
}

- (void)setRank:(NSUInteger)rank
{
    if (rank <= [PlayingCard maxRank]) {
        _rank = rank;
    }
}

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    if ([otherCards count] == 1) {
        id card = [otherCards firstObject];
        if ([card isKindOfClass:[PlayingCard class]]) {
            PlayingCard *otherCard = (PlayingCard *)card;
            if (otherCard.rank == self.rank) {
                score = 4;
            } else if ([otherCard.suit isEqualToString:self.suit]) {
                score = 1;
            }
        }
    }
    if ([otherCards count] > 1) {
        for (id card in otherCards) {
            if ([card isKindOfClass:[PlayingCard class]]) {
                PlayingCard *otherCard = (PlayingCard *)card;
                if (otherCard.rank == self.rank) {
                    score += 2;
                } else if ([otherCard.suit isEqualToString:self.suit]) {
                    score++;
                }
            }
        }
    }
    
    return score;
}

@end
