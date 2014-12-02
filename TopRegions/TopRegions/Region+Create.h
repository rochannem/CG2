//
//  Region+Create.h
//  TopRegions
//
//  Created by ROCHANNE MIRANDA on 11/27/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import "Region.h"
#import "Photo.h"

@interface Region (Create)

// Adds region for given photo into the database
+ (void)addRegionForPhotoInfo:(NSDictionary *)photoDictionary
                        withPhoto:(Photo *)photo
         inNSManagedObjectContext:(NSManagedObjectContext *)context;

@end
