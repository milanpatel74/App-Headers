/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary, NSRegularExpression, NSArray;

@interface _PTHTweetbotRegexMediaParserItem : NSObject {

	NSString* _expressionString;
	NSDictionary* _previewFormats;
	NSString* _mediaFormat;
	NSRegularExpression* _expression;
	NSArray* _hosts;
	long long _mediumType;
	double _thumbnailAspectRatio;

}

@property (nonatomic,__weak,readonly) NSArray * hosts;                   //@synthesize hosts=_hosts - In the implementation block
@property (nonatomic,readonly) long long mediumType;                     //@synthesize mediumType=_mediumType - In the implementation block
@property (nonatomic,readonly) double thumbnailAspectRatio;              //@synthesize thumbnailAspectRatio=_thumbnailAspectRatio - In the implementation block
-(id)_url:(id)arg1 withFormat:(id)arg2 ;
-(id)mediumURLForURL:(id)arg1 ;
-(BOOL)canParseURL:(id)arg1 ;
-(id)previewURLDictionaryForURL:(id)arg1 ;
-(BOOL)hasPreviewURLs;
-(NSArray *)hosts;
-(long long)mediumType;
-(double)thumbnailAspectRatio;
-(id)expression;
-(id)initWithDictionary:(id)arg1 ;
@end
