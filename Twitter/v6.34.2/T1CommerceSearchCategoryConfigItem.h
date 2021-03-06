/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1SearchCategoryItem.h>

@class NSString;

@interface T1CommerceSearchCategoryConfigItem : NSObject <T1SearchCategoryItem> {

	char _type;
	NSString* _displayText;
	NSString* _customTimelineID;
	NSString* _customTimelineIDNumber;
	NSString* _configValue;

}

@property (nonatomic,retain) NSString * displayText;                         //@synthesize displayText=_displayText - In the implementation block
@property (assign,nonatomic) char type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * customTimelineID;                    //@synthesize customTimelineID=_customTimelineID - In the implementation block
@property (nonatomic,retain) NSString * customTimelineIDNumber;              //@synthesize customTimelineIDNumber=_customTimelineIDNumber - In the implementation block
@property (nonatomic,retain) NSString * configValue;                         //@synthesize configValue=_configValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itemWithConfigString:(id)arg1 ;
-(NSString *)configValue;
-(NSString *)customTimelineID;
-(void)setConfigValue:(NSString *)arg1 ;
-(void)setCustomTimelineIDNumber:(NSString *)arg1 ;
-(NSString *)customTimelineIDNumber;
-(void)setCustomTimelineID:(NSString *)arg1 ;
-(id)initWithDisplayText:(id)arg1 type:(char)arg2 timelineID:(id)arg3 configValue:(id)arg4 ;
-(NSString *)displayText;
-(void)setType:(char)arg1 ;
-(char)type;
-(void)setDisplayText:(NSString *)arg1 ;
@end

