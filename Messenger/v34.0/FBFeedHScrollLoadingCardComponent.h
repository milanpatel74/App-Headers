/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>
#import <Messenger/FBHScrollImpressionLogging.h>

@class NSString;

@interface FBFeedHScrollLoadingCardComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	NSString* _analyticsPerfLoggerEvent;
	NSString* _analyticsPerfLoggerNameSpace;

}
+(id)newWithContentComponent:(id)arg1 analyticsPerfLoggerEvent:(id)arg2 analyticsPerfLoggerNameSpace:(id)arg3 ;
-(void)resignedFullyVisible;
-(void)becameFullyVisible;
@end
