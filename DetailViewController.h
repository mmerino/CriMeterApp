//
//  DetailViewController.h
//  HoodMeter(prototype)
//
//  Created by Maria Merino  on 8/22/13.
//  Copyright (c) 2013 Maria Merino. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "Crime.h"
@class Crime;

@interface DetailViewController : UIViewController <CLLocationManagerDelegate, MKMapViewDelegate>

@property (nonatomic, strong)Crime *crime;

@end
