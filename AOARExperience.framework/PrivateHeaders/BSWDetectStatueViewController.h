//
//  BSWDetectStatueViewController.h
//  AOARExperience
//
//  Created by ChristianBieniak on 22/8/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import "BSWRootContentViewController.h"
#import "BSWARExperienceViewController.h"

@interface BSWDetectStatueViewController : UIViewController <BSWRootContentViewController>

+ (instancetype)instanceWithMode:(BSWARExperienceMode)mode;

@end

