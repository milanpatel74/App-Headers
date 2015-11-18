/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHSmartifyTextStorage.h>
#import <PTHCommon/PTHUIViewColorNameChangeCategory.h>

@class NSString;

@interface PTHTweetbotTextStorage : PTHSmartifyTextStorage <PTHUIViewColorNameChangeCategory> {

	BOOL _dynamicTextNeedsUpdate;
	NSString* _bodyColorName;
	NSString* _hashtagColorName;
	NSString* _linkColorName;
	NSString* _mentionColorName;

}

@property (nonatomic,copy) NSString * bodyColorName;                 //@synthesize bodyColorName=_bodyColorName - In the implementation block
@property (nonatomic,copy) NSString * hashtagColorName;              //@synthesize hashtagColorName=_hashtagColorName - In the implementation block
@property (nonatomic,copy) NSString * linkColorName;                 //@synthesize linkColorName=_linkColorName - In the implementation block
@property (nonatomic,copy) NSString * mentionColorName;              //@synthesize mentionColorName=_mentionColorName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBodyColorName:(NSString *)arg1 ;
-(void)setLinkColorName:(NSString *)arg1 ;
-(NSString *)bodyColorName;
-(NSString *)hashtagColorName;
-(void)setHashtagColorName:(NSString *)arg1 ;
-(NSString *)linkColorName;
-(NSString *)mentionColorName;
-(void)setMentionColorName:(NSString *)arg1 ;
-(void)colorThemeDidChange;
-(id)init;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)processEditing;
@end
