/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDate, MPMusicPlayerController, NSString;

@interface IGAudioSession : NSObject {

	NSDate* _resignedActiveTime;
	MPMusicPlayerController* _musicPlayerController;
	NSString* _currentAudioCategory;
	BOOL _overrideMuteSwitch;
	double _previousVolume;

}

@property (assign,nonatomic) BOOL overrideMuteSwitch;              //@synthesize overrideMuteSwitch=_overrideMuteSwitch - In the implementation block
@property (assign,nonatomic) double previousVolume;                //@synthesize previousVolume=_previousVolume - In the implementation block
+(id)sharedInstance;
-(void)setPreviousVolume:(double)arg1 ;
-(double)previousVolume;
-(BOOL)overrideMuteSwitch;
-(void)setOverrideMuteSwitch:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)volumeChanged:(id)arg1 ;
-(void)updateCategory;
-(void)audioSessionRouteChange:(id)arg1 ;
-(void)didBecomeActive;
-(void)willResignActive;
@end
