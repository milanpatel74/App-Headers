/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBGoodFriendsPromptsExperimentContext : FBExperimentContext {

	BOOL _enabled;
	double _expiryTime;
	NSString* _promptTitle;
	NSString* _promptSubtitle;
	NSString* _placeholderText;

}

@property (nonatomic,readonly) BOOL enabled;                                 //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) double expiryTime;                            //@synthesize expiryTime=_expiryTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptTitle;                  //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptSubtitle;               //@synthesize promptSubtitle=_promptSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(double)expiryTime;
-(NSString *)promptTitle;
-(NSString *)promptSubtitle;
-(BOOL)enabled;
-(NSString *)placeholderText;
@end
