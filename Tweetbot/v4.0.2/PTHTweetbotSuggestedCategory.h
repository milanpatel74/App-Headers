/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class NSString, PTHTweetbotCursor;

@interface PTHTweetbotSuggestedCategory : PTHTweetbotObject {

	NSString* _name;
	NSString* _slug;
	long long _size;

}

@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * slug;                                         //@synthesize slug=_slug - In the implementation block
@property (assign,nonatomic) long long size;                                        //@synthesize size=_size - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * usersCursor; 
+(id)newWithAccount:(id)arg1 dictionary:(id)arg2 ;
-(PTHTweetbotCursor *)usersCursor;
-(void)updateFromDictionary:(id)arg1 ;
-(void)setSlug:(NSString *)arg1 ;
-(NSString *)slug;
-(long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSize:(long long)arg1 ;
@end

