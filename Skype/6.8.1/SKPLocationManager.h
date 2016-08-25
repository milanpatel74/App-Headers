//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString;

@interface SKPLocationManager : NSObject <CLLocationManagerDelegate>
{
    CDUnknownBlockType _locationHandler;
    CLLocationManager *_locationManager;
}

@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) CDUnknownBlockType locationHandler; // @synthesize locationHandler=_locationHandler;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (long long)currentLocationPermission;
- (void)requestPermissionForLocation:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
