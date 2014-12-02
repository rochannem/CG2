//
//  Photographer.h
//  TopRegions
//
//  Created by ROCHANNE MIRANDA on 11/28/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Region;

@interface Photographer : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Region *inRegion;

@end
