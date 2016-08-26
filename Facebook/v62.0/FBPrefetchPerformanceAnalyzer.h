/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSObject, FBAnalytics;

@interface FBPrefetchPerformanceAnalyzer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unordered_map<FBPrefetchTarget *, FBPrefetchDurations, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::__1::allocator<std::__1::pair<FBPrefetchTarget *const, FBPrefetchDurations> > >* _durationMap;
	FBAnalytics* _analytics;

}
-(id)initWithAnalytics:(id)arg1 ;
-(void)_logPrefetchingPerformance;
-(void)prefetchingStarted;
-(void)requestedContextForTarget:(id)arg1 ;
-(void)prefetchingStartedForTarget:(id)arg1 ;
-(void)prefetchingCompletedForTarget:(id)arg1 ;
@end
