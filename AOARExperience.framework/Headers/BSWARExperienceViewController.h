//
//  BSWARExperience.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 8/25/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, BSWARExperienceMode) {
    BSWARExperienceModeStatues,
    BSWARExperienceModeRolex
};

@interface BSWARExperienceViewController : UIViewController

+ (instancetype)instanceWithMode:(BSWARExperienceMode)mode;

+ (void)setRegionRestrictionEnabled:(BOOL)enabled;

@end

