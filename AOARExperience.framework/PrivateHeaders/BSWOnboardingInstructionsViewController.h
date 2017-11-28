//
//  BSWOnboardingInstructionsViewController.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 8/29/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import "BSWRootContentViewController.h"
#import "BSWARExperienceViewController.h"

@protocol BSWOnboardingInstructionsViewControllerDelegate;

@interface BSWOnboardingInstructionsViewController : UIViewController <BSWRootContentViewController>

@property (nonatomic, weak) id<BSWOnboardingInstructionsViewControllerDelegate> delegate;

+ (instancetype)instanceWithMode:(BSWARExperienceMode)mode;

+ (BOOL)instructionsHaveBeenSeenForMode:(BSWARExperienceMode)mode;

+ (void)setInstructionsHaveBeenSeen:(BOOL)seen forMode:(BSWARExperienceMode)mode;

@end

@protocol BSWOnboardingInstructionsViewControllerDelegate <NSObject>

- (void)instructionsViewControllerDidEndShowing:(BSWOnboardingInstructionsViewController *)controller;

@end

