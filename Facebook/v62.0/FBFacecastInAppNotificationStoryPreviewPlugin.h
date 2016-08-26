/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBVideoPluginView.h>

@class FBVideoPlaybackController, CKComponentHostingView, NSString;

@interface FBFacecastInAppNotificationStoryPreviewPlugin : UIView <CKComponentProvider, FBVideoPluginView> {

	CKComponentHostingView* _hostingView;
	FBVideoPlaybackController* _videoController;
	CGRect _videoFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect videoFrame;                                               //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController;              //@synthesize videoController=_videoController - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 story:(id)arg2 toolbox:(id)arg3 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
@end
