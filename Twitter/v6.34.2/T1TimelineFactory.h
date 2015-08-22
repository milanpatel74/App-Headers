/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTimelineFactory.h>

@class NSDictionary, NSString;

@interface T1TimelineFactory : NSObject <TFNTwitterTimelineFactory> {

	NSDictionary* _entries;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_setupStreamOptionsForAccount:(id)arg1 ;
+(id)sharedTimelineFactory;
-(void)_setupEntries;
-(void)_accountFeatureSwitchesDidUpdate:(id)arg1 ;
-(void)_deviceFeatureSwitchesDidUpdate:(id)arg1 ;
-(id)timelineIdentifiersForAccount:(id)arg1 ;
-(id)inUseTimelineIdentifiersForAccount:(id)arg1 ;
-(id)timelineForAccount:(id)arg1 identifier:(id)arg2 savedPlistDictionary:(id)arg3 ;
-(id)titleForTimelineWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)iconForTimelineWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)panelIDForTimelineWithIdentifier:(id)arg1 ;
-(id)rootViewControllerForTimeline:(id)arg1 account:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
