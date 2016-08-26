/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Telegram/PSCoding.h>

@class NSData, NSString;

@interface TGAudioWaveform : NSObject <NSCoding, PSCoding> {

	int _peak;
	NSData* _samples;

}

@property (nonatomic,readonly) NSData * samples;                    //@synthesize samples=_samples - In the implementation block
@property (nonatomic,readonly) int peak;                            //@synthesize peak=_peak - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKeyValueCoder:(id)arg1 ;
-(void)encodeWithKeyValueCoder:(id)arg1 ;
-(id)initWithSamples:(id)arg1 peak:(int)arg2 ;
-(id)bitstream;
-(id)initWithBitstream:(id)arg1 bitsPerSample:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)samples;
-(int)peak;
@end
