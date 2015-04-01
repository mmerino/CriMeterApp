//
//  CrimeMapViewController.h
//  HoodMeter(prototype)
//
//  Created by Maria Merino  on 8/15/13.
//  Copyright (c) 2013 Maria Merino. All rights reserved.
//

#import "ViewController.h"
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface CrimeMapViewController : ViewController <CLLocationManagerDelegate, MKMapViewDelegate>

-(void)loadCrimesArray:(NSArray*)crimesArray;

@end
