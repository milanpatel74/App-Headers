/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSimpleTVVideoExperience.h>

@protocol FBSimpleTVVideoExperienceDelegate, FBConnectedDevice;
@class NSString, FBSimpleTVVideoPlaybackItem, NSMutableDictionary, FBTimer, NSNumber;

@interface FBFakeSimpleTVVideoExperience : NSObject <FBSimpleTVVideoExperience> {

	id<FBSimpleTVVideoExperienceDelegate> _delegate;
	NSString* _currentlyPlayingVideoID;
	FBSimpleTVVideoPlaybackItem* _nextPlaybackItem;
	NSMutableDictionary* _userInfo;
	FBTimer* _timer;
	BOOL feedbackEnabled;
	float volume;
	id<FBConnectedDevice> _associatedDevice;
	long long _state;
	double _position;
	NSNumber* _length;

}

@property (nonatomic,retain) id<FBConnectedDevice> associatedDevice;                             //@synthesize associatedDevice=_associatedDevice - In the implementation block
@property (assign,nonatomic) long long state;                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double position;                                                    //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSNumber * length;                                                    //@synthesize length=_length - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic,__weak) id<FBSimpleTVVideoExperienceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentlyPlayingVideoID;                          //@synthesize currentlyPlayingVideoID=_currentlyPlayingVideoID - In the implementation block
@property (nonatomic,retain) FBSimpleTVVideoPlaybackItem * nextPlaybackItem;                     //@synthesize nextPlaybackItem=_nextPlaybackItem - In the implementation block
@property (assign,nonatomic) BOOL feedbackEnabled; 
@property (assign,nonatomic) float volume; 
-(void)playVideo;
-(void)setFeedbackEnabled:(BOOL)arg1 ;
-(id<FBConnectedDevice>)associatedDevice;
-(NSString *)currentlyPlayingVideoID;
-(void)setNextPlaybackItem:(FBSimpleTVVideoPlaybackItem *)arg1 ;
-(void)skipVideo;
-(void)stopExperience;
-(void)seekTo:(double)arg1 ;
-(void)fakeError;
-(void)fakeFinish;
-(FBSimpleTVVideoPlaybackItem *)nextPlaybackItem;
-(void)setAssociatedDevice:(id<FBConnectedDevice>)arg1 ;
-(void)setDelegate:(id<FBSimpleTVVideoExperienceDelegate>)arg1 ;
-(id<FBSimpleTVVideoExperienceDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSNumber *)length;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(void)setLength:(NSNumber *)arg1 ;
-(void)_setState:(long long)arg1 ;
-(BOOL)feedbackEnabled;
-(void)setVolume:(float)arg1 ;
-(void)stopVideo;
-(void)pauseVideo;
-(float)volume;
@end
