//
//  UIImage+AOARExperience.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 11/28/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (AOARExperience)

+ (void)loadImageFromURL:(NSURL *)URL
                 success:(void (^)(UIImage *))success
                 failure:(void (^)(NSError *))failure;

@end

