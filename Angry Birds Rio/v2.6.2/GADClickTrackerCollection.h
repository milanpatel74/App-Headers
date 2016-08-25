/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/GADClickTrackerDelegate.h>

@class NSMutableSet, NSString;

@interface GADClickTrackerCollection : NSObject <GADClickTrackerDelegate> {

	NSMutableSet* _trackers;

}

@property (nonatomic,retain) NSMutableSet * trackers;               //@synthesize trackers=_trackers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)trackMediationURLsFromTemplates:(id)arg1 defaultTemplate:(id)arg2 networkID:(id)arg3 allocationID:(id)arg4 qData:(id)arg5 appKey:(id)arg6 refresh:(BOOL)arg7 durations:(id)arg8 exitCodes:(id)arg9 ;
-(void)tracker:(id)arg1 didRedirect:(id)arg2 ;
-(void)tracker:(id)arg1 didFailWithError:(id)arg2 ;
-(void)trackURL:(id)arg1 ;
-(void)trackURL:(id)arg1 cacheEnabled:(BOOL)arg2 ;
-(NSMutableSet *)trackers;
-(void)cleanupTrackers;
-(void)setTrackers:(NSMutableSet *)arg1 ;
-(void)trackURLs:(id)arg1 cacheEnabled:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
@end
