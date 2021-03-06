/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
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

