//
//  Photographer+Create.h
//  TopRegions
//
//  Created by ROCHANNE MIRANDA on 11/25/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import "Photographer.h"

@interface Photographer (Create)

// Adds a photographer from a given photo in a given region in the database
+ (Photographer *)createPhotographerWithPhotoInfo:(NSDictionary *)photoDictionary
                                       fromRegion:(Region *)region
                         inNSManagedContextObject:(NSManagedObjectContext *)context;


@end
