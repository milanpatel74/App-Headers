/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPVASTModel.h>

@class NSString, NSURL;

@interface MPVASTMediaFile : MPVASTModel {

	NSString* _identifier;
	NSString* _delivery;
	NSString* _mimeType;
	double _bitrate;
	double _width;
	double _height;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * delivery;                //@synthesize delivery=_delivery - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) double bitrate;                          //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) double width;                            //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                           //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
+(id)modelMap;
-(NSString *)identifier;
-(double)width;
-(double)height;
-(NSURL *)URL;
-(NSString *)mimeType;
-(double)bitrate;
-(NSString *)delivery;
@end
