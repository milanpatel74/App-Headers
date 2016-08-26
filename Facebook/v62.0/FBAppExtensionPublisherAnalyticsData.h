/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBAppExtensionPublisherAnalyticsEventData;

@interface FBAppExtensionPublisherAnalyticsData : FBValueObject <NSCopying, NSCoding> {

	FBAppExtensionPublisherAnalyticsEventData* _startEvent;
	FBAppExtensionPublisherAnalyticsEventData* _successEvent;
	FBAppExtensionPublisherAnalyticsEventData* _failEvent;

}

@property (nonatomic,copy,readonly) FBAppExtensionPublisherAnalyticsEventData * startEvent;                //@synthesize startEvent=_startEvent - In the implementation block
@property (nonatomic,copy,readonly) FBAppExtensionPublisherAnalyticsEventData * successEvent;              //@synthesize successEvent=_successEvent - In the implementation block
@property (nonatomic,copy,readonly) FBAppExtensionPublisherAnalyticsEventData * failEvent;                 //@synthesize failEvent=_failEvent - In the implementation block
-(FBAppExtensionPublisherAnalyticsEventData *)failEvent;
-(FBAppExtensionPublisherAnalyticsEventData *)successEvent;
-(FBAppExtensionPublisherAnalyticsEventData *)startEvent;
-(id)initWithStartEvent:(id)arg1 successEvent:(id)arg2 failEvent:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
