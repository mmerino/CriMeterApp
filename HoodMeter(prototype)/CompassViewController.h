//
//  CompassViewController.h
//  HoodMeter(prototype)
//
//  Created by Maria Merino  on 8/20/13.
//  Copyright (c) 2013 Maria Merino. All rights reserved.
//

#import "ViewController.h"
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreLocation/CoreLocation.h>

@interface CompassViewController : UIViewController <CLLocationManagerDelegate>
{
CLLocationManager *locationManager;
}
@property (nonatomic,retain) CLLocationManager *locationManager;


@end
