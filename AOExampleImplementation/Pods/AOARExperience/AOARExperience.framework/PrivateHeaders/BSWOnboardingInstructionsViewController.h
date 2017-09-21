//
//  BSWOnboardingInstructionsViewController.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 8/29/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BSWRootContentViewController.h"

@protocol BSWOnboardingInstructionsViewControllerDelegate;

@interface BSWOnboardingInstructionsViewController : UIViewController <BSWRootContentViewController>

@property (nonatomic, weak) id<BSWOnboardingInstructionsViewControllerDelegate> delegate;

+ (instancetype)instance;

@end

@protocol BSWOnboardingInstructionsViewControllerDelegate <NSObject>

- (void)instructionsViewControllerDidEndShowing:(BSWOnboardingInstructionsViewController *)controller;

@end

