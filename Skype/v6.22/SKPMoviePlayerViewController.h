/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMoviePlayerViewController.h>
#import <Skype/SKPPlayButtonDelegate.h>
#import <Skype/SKPAudioSessionManagerClient.h>

@class SKPActivityToken, UITapGestureRecognizer, SKPMoviePlayerView, NSString;

@interface SKPMoviePlayerViewController : MPMoviePlayerViewController <SKPPlayButtonDelegate, SKPAudioSessionManagerClient> {

	BOOL _audioSessionActivated;
	SKPActivityToken* _modalActivity;
	UITapGestureRecognizer* _tapMoviePlayerViewGestureRecognizer;
	SKPMoviePlayerView* _moviePlayerView;

}

@property (nonatomic,retain) SKPActivityToken * modalActivity;                                          //@synthesize modalActivity=_modalActivity - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapMoviePlayerViewGestureRecognizer;              //@synthesize tapMoviePlayerViewGestureRecognizer=_tapMoviePlayerViewGestureRecognizer - In the implementation block
@property (nonatomic,retain) SKPMoviePlayerView * moviePlayerView;                                      //@synthesize moviePlayerView=_moviePlayerView - In the implementation block
@property (assign,nonatomic) BOOL audioSessionActivated;                                                //@synthesize audioSessionActivated=_audioSessionActivated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewConstraints;
-(void)moviePlayBackStateDidChange:(id)arg1 ;
-(void)loadStateDidChange:(id)arg1 ;
-(void)deactiveAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)activateAudioSessionForPlaybackWithCompletion:(/*^block*/id)arg1 ;
-(SKPMoviePlayerView *)moviePlayerView;
-(void)playPauseVideo:(id)arg1 ;
-(void)setTapMoviePlayerViewGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapMoviePlayerViewGestureRecognizer;
-(void)setupMoviePlaybackState;
-(void)playVideo;
-(void)setupPlayState;
-(void)setupPauseState;
-(BOOL)audioSessionActivated;
-(void)setAudioSessionActivated:(BOOL)arg1 ;
-(double)playButtonCurrentPlaybackTime:(id)arg1 ;
-(void)setMoviePlayerView:(SKPMoviePlayerView *)arg1 ;
-(SKPActivityToken *)modalActivity;
-(void)setModalActivity:(SKPActivityToken *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)setupUI;
-(id)initWithContentURL:(id)arg1 ;
-(void)stopVideo;
-(void)pauseVideo;
@end
