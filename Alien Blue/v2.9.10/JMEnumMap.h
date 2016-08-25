/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface JMEnumMap : NSObject {

	NSString* _enumFamily;
	NSString* _enumIdent;
	NSString* _title;
	NSString* _shortTitle;
	long long _enumValue;

}

@property (retain) NSString * enumFamily;              //@synthesize enumFamily=_enumFamily - In the implementation block
@property (retain) NSString * enumIdent;               //@synthesize enumIdent=_enumIdent - In the implementation block
@property (retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (retain) NSString * shortTitle;              //@synthesize shortTitle=_shortTitle - In the implementation block
@property (assign) long long enumValue;                //@synthesize enumValue=_enumValue - In the implementation block
-(id)initWithFamily:(id)arg1 ident:(id)arg2 enumValue:(long long)arg3 title:(id)arg4 shortTitle:(id)arg5 ;
-(NSString *)enumFamily;
-(NSString *)enumIdent;
-(long long)enumValue;
-(void)setEnumFamily:(NSString *)arg1 ;
-(void)setEnumIdent:(NSString *)arg1 ;
-(void)setEnumValue:(long long)arg1 ;
-(void)setShortTitle:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)shortTitle;
@end
