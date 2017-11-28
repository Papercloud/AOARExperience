//
//  BSWStateManager.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 11/23/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BSWRootContentViewController.h"
#import "BSWARExperienceViewController.h"

typedef NS_ENUM(NSUInteger, BSWStep) {
    BSWStepLocationAuthorization,
    BSWStepLocationRange,
    BSWStepInstructions,
    BSWStepDetection
};

@interface BSWStateManager : NSObject

+ (UIViewController<BSWRootContentViewController> *)initialViewControllerWithMode:(BSWARExperienceMode)mode;

+ (UIViewController<BSWRootContentViewController> *)nextViewControllerForStep:(BSWStep)step
                                                                         mode:(BSWARExperienceMode)mode;

@end

