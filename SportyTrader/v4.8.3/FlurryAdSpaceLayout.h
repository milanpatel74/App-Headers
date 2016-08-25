/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FlurryAdSpaceLayout : NSObject {

	int _adWidth;
	int _adHeight;
	NSString* _fix;
	NSString* _format;
	NSString* _alignment;

}

@property (assign,nonatomic) int adWidth;                       //@synthesize adWidth=_adWidth - In the implementation block
@property (assign,nonatomic) int adHeight;                      //@synthesize adHeight=_adHeight - In the implementation block
@property (nonatomic,retain) NSString * fix;                    //@synthesize fix=_fix - In the implementation block
@property (nonatomic,retain) NSString * format;                 //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * alignment;              //@synthesize alignment=_alignment - In the implementation block
-(BOOL)isTakeover;
-(void)setAdWidth:(int)arg1 ;
-(void)setAdHeight:(int)arg1 ;
-(int)adWidth;
-(int)adHeight;
-(NSString *)fix;
-(BOOL)isInStream;
-(void)setFix:(NSString *)arg1 ;
-(void)setAlignment:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)alignment;
-(BOOL)isBanner;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
@end
