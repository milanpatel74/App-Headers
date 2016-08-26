/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWatchAndMoreViewConfiguration.h>

@protocol FBWatchAndMoreHeaderControllingFBWatchAndMoreViewControllerDelegate, FBWatchAndMoreContentControllingFBWatchAndMoreViewControllerDelegate;
@class FBMemFeedStory, FBMemVideo, FBVideoToolbox, FBFontFoundry, NSArray, UIViewController, NSString;

@interface FBWatchAndShopViewConfiguration : NSObject <FBWatchAndMoreViewConfiguration> {

	BOOL _enableHeader;
	BOOL _enableSwipeAway;
	UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate> _headerViewController;
	UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate> _contentViewController;
	FBMemFeedStory* _story;
	FBMemVideo* _video;
	FBVideoToolbox* _videoToolbox;
	FBFontFoundry* _fontFoundry;
	unsigned long long _videoPlayerOptions;
	NSArray* _trackingCodes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate> headerViewController;                //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) FBMemFeedStory * story;                                                                                                        //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) FBMemVideo * video;                                                                                                            //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) FBVideoToolbox * videoToolbox;                                                                                                 //@synthesize videoToolbox=_videoToolbox - In the implementation block
@property (nonatomic,retain) FBFontFoundry * fontFoundry;                                                                                                   //@synthesize fontFoundry=_fontFoundry - In the implementation block
@property (assign,nonatomic) unsigned long long videoPlayerOptions;                                                                                         //@synthesize videoPlayerOptions=_videoPlayerOptions - In the implementation block
@property (assign,nonatomic) BOOL enableHeader;                                                                                                             //@synthesize enableHeader=_enableHeader - In the implementation block
@property (assign,nonatomic) BOOL enableSwipeAway;                                                                                                          //@synthesize enableSwipeAway=_enableSwipeAway - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                                                                                                         //@synthesize trackingCodes=_trackingCodes - In the implementation block
-(void)setStory:(FBMemFeedStory *)arg1 ;
-(FBMemFeedStory *)story;
-(NSArray *)trackingCodes;
-(FBFontFoundry *)fontFoundry;
-(FBVideoToolbox *)videoToolbox;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(unsigned long long)videoPlayerOptions;
-(id)initWithHeaderViewController:(id)arg1 withContentViewController:(id)arg2 story:(id)arg3 video:(id)arg4 videoToolbox:(id)arg5 fontFoundry:(id)arg6 videoPlayerOptions:(unsigned long long)arg7 enableHeader:(BOOL)arg8 enableSwipeAway:(BOOL)arg9 trackingCodes:(id)arg10 ;
-(BOOL)enableHeader;
-(BOOL)enableSwipeAway;
-(void)setVideoToolbox:(FBVideoToolbox *)arg1 ;
-(void)setFontFoundry:(FBFontFoundry *)arg1 ;
-(void)setVideoPlayerOptions:(unsigned long long)arg1 ;
-(void)setEnableHeader:(BOOL)arg1 ;
-(void)setEnableSwipeAway:(BOOL)arg1 ;
-(UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate>)contentViewController;
-(void)setContentViewController:(UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate>)arg1 ;
-(UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate>)headerViewController;
-(void)setHeaderViewController:(UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate>)arg1 ;
-(FBMemVideo *)video;
-(void)setVideo:(FBMemVideo *)arg1 ;
@end
