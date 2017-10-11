//
//  BSWLocationHandler.h
//  AOARExperience
//
//  Created by Ezequiel Scaruli on 8/29/17.
//  Copyright © 2017 Papercloud. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *const BSWLocationErrorDomain = @"au.com.papercloud.AOARExperience.BSWLocationError";

typedef enum {
    BSWLocationErrorCodeNotAllowed,
    BSWLocationErrorCodeLocationNotAvailable
} BSWLocationErrorCode;

@protocol BSWAcceptedRegionMonitoringObserver;

@interface BSWLocationHandler : NSObject

// Enables or disables the accepted region monitoring. If disabled, then accepted
// region monitoring observers are not notified when entering or exiting the region.
@property (nonatomic, assign) BOOL acceptedRegionMonitoringEnabled;

+ (instancetype)sharedHandler;

- (BOOL)areLocationPermissionsGranted;

- (void)requestLocationPermissionsWithSuccess:(void (^)())success
                                      failure:(void (^)(NSError *))failure;

- (void)checkLocationIsWithinAcceptedRegionWithSuccess:(void (^)(BOOL))success
                                               failure:(void (^)(NSError *))failure;

- (void)startAcceptedRegionMonitoring;

- (void)stopAcceptedRegionMonitoring;

- (void)addAcceptedRegionMonitoringObserver:(id<BSWAcceptedRegionMonitoringObserver>)observer;

- (void)removeAcceptedRegionMonitoringObserver:(id<BSWAcceptedRegionMonitoringObserver>)observer;

@end

@protocol BSWAcceptedRegionMonitoringObserver

@optional

- (void)didEnterAcceptedRegion:(BSWLocationHandler *)handler;

- (void)didExitAcceptedRegion:(BSWLocationHandler *)handler;

@end

