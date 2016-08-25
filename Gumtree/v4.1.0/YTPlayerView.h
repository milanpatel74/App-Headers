/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol YTPlayerViewDelegate;
@class UIWebView, NSURL, NSString;

@interface YTPlayerView : UIView <UIWebViewDelegate> {

	UIWebView* _webView;
	id<YTPlayerViewDelegate> _delegate;
	NSURL* _originURL;

}

@property (nonatomic,readonly) UIWebView * webView;                                 //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<YTPlayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * originURL;                                     //@synthesize originURL=_originURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForPlaybackQuality:(long long)arg1 ;
+(long long)playerStateForString:(id)arg1 ;
+(long long)playbackQualityForString:(id)arg1 ;
+(id)stringForPlayerState:(long long)arg1 ;
+(id)frameworkBundle;
-(void)makeWebViewTransparent;
-(BOOL)loadWithVideoId:(id)arg1 playerVars:(id)arg2 ;
-(BOOL)loadWithPlaylistId:(id)arg1 playerVars:(id)arg2 ;
-(BOOL)loadWithPlayerParams:(id)arg1 ;
-(id)stringFromEvaluatingJavaScript:(id)arg1 ;
-(void)notifyDelegateOfYouTubeCallbackUrl:(id)arg1 ;
-(id)stringForJSBoolean:(BOOL)arg1 ;
-(void)cuePlaylist:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(id)stringFromVideoIdArray:(id)arg1 ;
-(void)loadPlaylist:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(NSURL *)originURL;
-(BOOL)handleHttpNavigationToUrl:(id)arg1 ;
-(void)setOriginURL:(NSURL *)arg1 ;
-(id)createNewWebView;
-(BOOL)loadWithVideoId:(id)arg1 ;
-(BOOL)loadWithPlaylistId:(id)arg1 ;
-(void)playVideo;
-(void)seekToSeconds:(float)arg1 allowSeekAhead:(BOOL)arg2 ;
-(void)clearVideo;
-(void)cueVideoById:(id)arg1 startSeconds:(float)arg2 suggestedQuality:(long long)arg3 ;
-(void)cueVideoById:(id)arg1 startSeconds:(float)arg2 endSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(void)loadVideoById:(id)arg1 startSeconds:(float)arg2 suggestedQuality:(long long)arg3 ;
-(void)loadVideoById:(id)arg1 startSeconds:(float)arg2 endSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(void)cueVideoByURL:(id)arg1 startSeconds:(float)arg2 suggestedQuality:(long long)arg3 ;
-(void)cueVideoByURL:(id)arg1 startSeconds:(float)arg2 endSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(void)loadVideoByURL:(id)arg1 startSeconds:(float)arg2 suggestedQuality:(long long)arg3 ;
-(void)loadVideoByURL:(id)arg1 startSeconds:(float)arg2 endSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(void)cuePlaylistByPlaylistId:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(void)cuePlaylistByVideos:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(void)loadPlaylistByPlaylistId:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(void)loadPlaylistByVideos:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(long long)arg4 ;
-(id)availablePlaybackRates;
-(void)setShuffle:(BOOL)arg1 ;
-(float)videoLoadedFraction;
-(long long)playbackQuality;
-(void)setPlaybackQuality:(long long)arg1 ;
-(id)videoUrl;
-(id)videoEmbedCode;
-(int)playlistIndex;
-(void)nextVideo;
-(void)previousVideo;
-(void)playVideoAt:(int)arg1 ;
-(id)availableQualityLevels;
-(void)removeWebView;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(float)currentTime;
-(void)setDelegate:(id<YTPlayerViewDelegate>)arg1 ;
-(id<YTPlayerViewDelegate>)delegate;
-(double)duration;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)stopVideo;
-(void)pauseVideo;
-(void)setLoop:(BOOL)arg1 ;
-(id)playlist;
-(long long)playerState;
@end
