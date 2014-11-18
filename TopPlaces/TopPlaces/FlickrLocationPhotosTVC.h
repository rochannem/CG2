//
//  FlickrLocationPhotosTVC.h
//  TopPlaces
//
//  Created by ROCHANNE MIRANDA on 11/12/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import "FlickrPhotoTVC.h"

// Class displays tableview of top Flickr photos from a
// specific location
@interface FlickrLocationPhotosTVC : FlickrPhotoTVC

// Location of photos (place_id)
@property (nonatomic, strong) id location;
@end
