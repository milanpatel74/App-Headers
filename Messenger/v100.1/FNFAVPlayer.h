/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol FNFAVPlayer <NSObject>
@property (assign,nonatomic) float rate; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) BOOL allowsExternalPlayback; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@required
-(float)volume;
-(void)setVolume:(float)arg1;
-(SCD_Struct_FB25*)currentTime;
-(id)currentItem;
-(void)setRate:(float)arg1;
-(float)rate;
-(void)play;
-(void)pause;
-(long long)status;
-(BOOL)allowsExternalPlayback;
-(NSError *)error;
-(void)removeTimeObserver:(id)arg1;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_FB25)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(void)seekToTime:(SCD_Struct_FB25)arg1 toleranceBefore:(SCD_Struct_FB25)arg2 toleranceAfter:(SCD_Struct_FB25)arg3;
-(void)seekToTime:(SCD_Struct_FB25)arg1 toleranceBefore:(SCD_Struct_FB25)arg2 toleranceAfter:(SCD_Struct_FB25)arg3 completionHandler:(/*^block*/id)arg4;
-(void)seekToTime:(SCD_Struct_FB25)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setAllowsExternalPlayback:(BOOL)arg1;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1;
-(void)seekToTime:(SCD_Struct_FB25)arg1;

@end

