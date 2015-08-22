/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/OTHERDataHubOperation.h>
#import <ECBCricketApp/NSURLConnectionDelegate.h>
#import <ECBCricketApp/NSURLConnectionDataDelegate.h>

@class ECBFixturesDataHubEntity, NSString;

@interface ECBFixturesDataHubOperation : OTHERDataHubOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	ECBFixturesDataHubEntity* fixturesEntity;
	NSString* _startDate;

}

@property (nonatomic,retain) NSString * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadLiveFixtures;
-(void)loadFixtures;
-(void)handleResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)storeFixturesWithMatches:(id)arg1 ;
-(void)updateStatus;
-(void)main;
-(void)setStartDate:(NSString *)arg1 ;
-(NSString *)startDate;
@end
