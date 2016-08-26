/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBMemVideo, UIImageView, FBNetworkImageView;

@interface FBPhotosGridVideoView : UIView {

	FBMemVideo* _video;
	UIImageView* _videoIconView;
	FBNetworkImageView* _networkImageView;

}

@property (nonatomic,retain) UIImageView * videoIconView;                        //@synthesize videoIconView=_videoIconView - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * networkImageView;              //@synthesize networkImageView=_networkImageView - In the implementation block
@property (nonatomic,retain) FBMemVideo * video;                                 //@synthesize video=_video - In the implementation block
-(void)setNetworkImageView:(FBNetworkImageView *)arg1 ;
-(FBNetworkImageView *)networkImageView;
-(void)configureWithImageURL:(id)arg1 session:(id)arg2 ;
-(UIImageView *)videoIconView;
-(void)setVideoIconView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(FBMemVideo *)video;
-(void)setVideo:(FBMemVideo *)arg1 ;
@end
