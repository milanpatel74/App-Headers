/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, FBUserSession, NSDate, FBPermalinkImpressionTracker, FBAnalyticsReferrerPerformanceLogger;

@interface FBPermalinkLogger : NSObject {

	NSString* _storyGraphQLID;
	NSArray* _parentTrackingCodes;
	NSString* _analyticsModule;
	FBUserSession* _session;
	BOOL _viewDidAppearWithAnimation;
	NSDate* _viewAppearTime;
	FBPermalinkImpressionTracker* _impressionTracker;
	id _appWillResignActiveObservationHandle;
	id _appDidBecomeActiveObservationHandle;
	FBAnalyticsReferrerPerformanceLogger* _referrerPerformanceLogger;

}

@property (nonatomic,readonly) FBAnalyticsReferrerPerformanceLogger * referrerPerformanceLogger;              //@synthesize referrerPerformanceLogger=_referrerPerformanceLogger - In the implementation block
-(FBAnalyticsReferrerPerformanceLogger *)referrerPerformanceLogger;
-(void)logRequestStarted;
-(void)logRequestSucceeded;
-(void)logRenderedContent;
-(void)logRequestFailed;
-(id)initWithReferrerPerformanceLogger:(id)arg1 storyGraphQLID:(id)arg2 parentTrackingCodes:(id)arg3 analyticsModule:(id)arg4 session:(id)arg5 ;
-(void)logShowUnit:(id)arg1 ;
-(void)logViewDidLoad;
-(void)logViewDidAppearAnimated:(BOOL)arg1 feedStoryLogicalUniqueID:(id)arg2 ;
-(void)logViewDidDisappearWithUnpublishedCharacterCount:(unsigned long long)arg1 ;
-(void)finishLogging;
-(void)logRedirectedToFallbackURL;
-(void)_recordPermalinkTap;
-(void)_becomeInactive;
-(void)_logViewDidDisappearWithUnpublishedCharacterCount:(unsigned long long)arg1 extra:(id)arg2 ;
-(void)_logShowGroupUnit:(id)arg1 ;
-(void)_logShowEventUnit:(id)arg1 ;
-(void)logViewDidDisappearWithUnpublishedCharacterCount:(unsigned long long)arg1 dismissalType:(unsigned long long)arg2 ;
-(void)_becomeActive;
@end
