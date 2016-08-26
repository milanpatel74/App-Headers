/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBSimpleTVVideoPlaybackItem, NSNumber;


@protocol FBSimpleTVVideoExperience <FBConnectedExperienceBase>
@property (assign,nonatomic,__weak) id<FBSimpleTVVideoExperienceDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * currentlyPlayingVideoID; 
@property (nonatomic,retain) FBSimpleTVVideoPlaybackItem * nextPlaybackItem; 
@property (assign,nonatomic) BOOL feedbackEnabled; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) double position; 
@property (nonatomic,copy,readonly) NSNumber * length; 
@required
-(void)playVideo;
-(void)seekTo:(double)arg1;
-(void)skipVideo;
-(NSString *)currentlyPlayingVideoID;
-(FBSimpleTVVideoPlaybackItem *)nextPlaybackItem;
-(void)setNextPlaybackItem:(id)arg1;
-(void)setFeedbackEnabled:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBSimpleTVVideoExperienceDelegate>)delegate;
-(long long)state;
-(NSNumber *)length;
-(double)position;
-(BOOL)feedbackEnabled;
-(void)setVolume:(float)arg1;
-(void)stopVideo;
-(void)pauseVideo;
-(float)volume;

@end
