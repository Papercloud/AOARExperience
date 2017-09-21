//
//  BSWDetectStatueViewController.h
//  AOARExperience
//
//  Created by ChristianBieniak on 22/8/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BSWRootContentViewController.h"

@interface BSWDetectStatueViewController : UIViewController <BSWRootContentViewController>

+ (instancetype)instance;

/**
 presents the vision view controller
 **/
+ (void)presentFrom:(UIViewController *)viewController;

@end
