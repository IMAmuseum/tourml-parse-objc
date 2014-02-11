//
//  TAPTourSet.h
//  launchpad-iphone
//
//  Created by David D'Amico on 2/10/14.
//  Copyright (c) 2014 IMALab. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface TAPTourSet : NSManagedObject

@property (nonatomic, strong) NSURL *tourSetUrl;
@property (nonatomic, strong) NSSet *tours;

@end
