//
//  BSWRootContentViewController.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 9/4/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BSWRootContentViewController <NSObject>

- (BOOL)shouldShowHelp;

- (BOOL)hasDynamicBackground;

@optional

- (void)showHelp;

@end

