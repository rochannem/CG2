//
//  Photo+Flickr.h
//  TopRegions
//
//  Created by ROCHANNE MIRANDA on 11/27/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import "Photo.h"

@interface Photo (Flickr)

// Adds a photo into the database and returns it
+ (Photo *)addPhotoInfo:(NSDictionary *)photoDictionary
inNSManagedObjectContext:(NSManagedObjectContext *)context;

// Adds array of photos into database
+ (void)addPhotosFromArray:(NSArray *)photos // array of photo dictionaries
  inNSManagedObjectContext:(NSManagedObjectContext *)context;

@end
