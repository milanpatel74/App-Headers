/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Telegram/PSCoding.h>

@class NSString, TGAudioWaveform;

@interface TGDocumentAttributeAudio : NSObject <NSCoding, PSCoding> {

	BOOL _isVoice;
	int _duration;
	NSString* _title;
	NSString* _performer;
	TGAudioWaveform* _waveform;

}

@property (nonatomic,readonly) BOOL isVoice;                            //@synthesize isVoice=_isVoice - In the implementation block
@property (nonatomic,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * performer;                    //@synthesize performer=_performer - In the implementation block
@property (nonatomic,readonly) int duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) TGAudioWaveform * waveform;              //@synthesize waveform=_waveform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIsVoice:(BOOL)arg1 title:(id)arg2 performer:(id)arg3 duration:(int)arg4 waveform:(id)arg5 ;
-(id)initWithKeyValueCoder:(id)arg1 ;
-(void)encodeWithKeyValueCoder:(id)arg1 ;
-(BOOL)isVoice;
-(NSString *)performer;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)duration;
-(NSString *)title;
-(TGAudioWaveform *)waveform;
@end

