//
//  BSWOnboardingInstructionsContentViewController.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 8/30/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSWOnboardingInstructionsContentViewController : UIViewController

+ (instancetype)instanceWithTitle:(NSString *)title
                      description:(NSAttributedString *)description
                     illustration:(UIImage *)illustration;

@end

