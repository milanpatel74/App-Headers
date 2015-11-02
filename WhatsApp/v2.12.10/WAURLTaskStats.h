/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WAURLTaskStats : NSObject <NSSecureCoding, NSCopying> {

	int _mediaType;
	int _result;
	double _startTime;
	double _durationBeforeSuspend;
	long long _mediaSize;

}

@property (assign,nonatomic) int mediaType;                             //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) double startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double durationBeforeSuspend;              //@synthesize durationBeforeSuspend=_durationBeforeSuspend - In the implementation block
@property (assign,nonatomic) int result;                                //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) long long mediaSize;                       //@synthesize mediaSize=_mediaSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)durationBeforeSuspend;
-(long long)mediaSize;
-(void)setDurationBeforeSuspend:(double)arg1 ;
-(void)setMediaSize:(long long)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(int)result;
-(void)setResult:(int)arg1 ;
@end

