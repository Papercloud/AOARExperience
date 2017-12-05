//
//  BCOVPlaybackService+AOARExperience.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 11/28/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <BrightcovePlayerSDK/BrightcovePlayerSDK.h>

@interface BCOVPlaybackService (AOARExperience)

- (void)findVideosWithIds:(NSArray *)ids
                  success:(void (^)(NSArray *))success
                  failure:(void (^)(NSError *))failure;

@end

