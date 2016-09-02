/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocation, CLLocationManager, NSDate, MPTimer, NSString;

@interface MPGeolocationProvider : NSObject <CLLocationManagerDelegate> {

	BOOL _locationUpdatesEnabled;
	BOOL _authorizedForLocationServices;
	CLLocation* _lastKnownLocation;
	CLLocationManager* _locationManager;
	NSDate* _timeOfLastLocationUpdate;
	MPTimer* _nextLocationUpdateTimer;
	MPTimer* _locationUpdateDurationTimer;

}

@property (nonatomic,retain) CLLocation * lastKnownLocation;                     //@synthesize lastKnownLocation=_lastKnownLocation - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) BOOL authorizedForLocationServices;                 //@synthesize authorizedForLocationServices=_authorizedForLocationServices - In the implementation block
@property (nonatomic,retain) NSDate * timeOfLastLocationUpdate;                  //@synthesize timeOfLastLocationUpdate=_timeOfLastLocationUpdate - In the implementation block
@property (nonatomic,retain) MPTimer * nextLocationUpdateTimer;                  //@synthesize nextLocationUpdateTimer=_nextLocationUpdateTimer - In the implementation block
@property (nonatomic,retain) MPTimer * locationUpdateDurationTimer;              //@synthesize locationUpdateDurationTimer=_locationUpdateDurationTimer - In the implementation block
@property (assign,nonatomic) BOOL locationUpdatesEnabled;                        //@synthesize locationUpdatesEnabled=_locationUpdatesEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProvider;
-(BOOL)locationHasValidCoordinates:(id)arg1 ;
-(void)stopAllCurrentOrScheduledLocationUpdates;
-(void)resumeLocationUpdatesAfterBackgrounding;
-(void)startRecurringLocationUpdates;
-(MPTimer *)locationUpdateDurationTimer;
-(MPTimer *)nextLocationUpdateTimer;
-(void)setTimeOfLastLocationUpdate:(NSDate *)arg1 ;
-(BOOL)isAuthorizedStatus:(int)arg1 ;
-(void)currentLocationUpdateDidFinish;
-(void)setLocationUpdateDurationTimer:(MPTimer *)arg1 ;
-(void)scheduleNextLocationUpdateAfterDelay:(double)arg1 ;
-(void)setNextLocationUpdateTimer:(MPTimer *)arg1 ;
-(NSDate *)timeOfLastLocationUpdate;
-(BOOL)isLocation:(id)arg1 olderThanLocation:(id)arg2 ;
-(void)setAuthorizedForLocationServices:(BOOL)arg1 ;
-(BOOL)isLocation:(id)arg1 betterThanLocation:(id)arg2 ;
-(BOOL)authorizedForLocationServices;
-(void)dealloc;
-(id)init;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setLastKnownLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastKnownLocation;
-(void)setLocationUpdatesEnabled:(BOOL)arg1 ;
-(BOOL)locationUpdatesEnabled;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
@end
