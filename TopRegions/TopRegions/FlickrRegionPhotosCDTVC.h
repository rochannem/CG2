//
//  FlickrRegionPhotosCDTVC.h
//  TopPlaces
//
//  Created by ROCHANNE MIRANDA on 11/23/14.
//  Copyright (c) 2014 TopEspCG. All rights reserved.
//

#import "CoreDataTableViewController.h"
#import "FlickrPhotoCDTVC.h"
#import "Region.h"

// Class displays tableview of top Flickr photos from a
// specific region
@interface FlickrRegionPhotosCDTVC : FlickrPhotoCDTVC

// Region of photos in the database
@property (nonatomic, strong) Region *region;
@end
