/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBComposerMediaEditingViewDelegate;
@class NSArray, NSString, FBMediaEditingLoopingIconsButton, FBLoopingIconsAnimationButton, FBUserSession, UIGestureRecognizer;

@interface FBComposerMediaEditingView : UIView {

	NSArray* _icons;
	NSString* _title;
	FBMediaEditingLoopingIconsButton* _umgEntryButton;
	FBLoopingIconsAnimationButton* _livePhotoButton;
	FBUserSession* _session;
	BOOL _isLivePhotoEnabled;
	BOOL _isToolIconAnimated;
	BOOL _showLivePhoto;
	BOOL _showToolIcon;
	UIGestureRecognizer* _livePhotoButtonGestureRecognizer;
	UIGestureRecognizer* _umgEntryButtonGestureRecognizer;
	id<FBComposerMediaEditingViewDelegate> _delegate;
	unsigned long long _mediaAttachmentType;

}

@property (assign,nonatomic,__weak) id<FBComposerMediaEditingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long mediaAttachmentType;                              //@synthesize mediaAttachmentType=_mediaAttachmentType - In the implementation block
-(id)initWithIcons:(id)arg1 andTitle:(id)arg2 ;
-(void)setIsToolIconAnimated:(BOOL)arg1 ;
-(void)setShowToolIcon:(BOOL)arg1 ;
-(void)_updateLivePhotoButton;
-(void)_setupUMGEntryButton;
-(void)_didTapUnifiedGalleryViewButton:(id)arg1 ;
-(void)_startAnimatingUMGEntryButtonIfNeeded;
-(void)_didTapLivePhotoButton:(id)arg1 ;
-(void)setIsLivePhotoEnabled:(BOOL)arg1 ;
-(unsigned long long)mediaAttachmentType;
-(void)setMediaAttachmentType:(unsigned long long)arg1 ;
-(void)setShowLivePhoto:(BOOL)arg1 ;
-(void)setShowUMGEntryButton:(BOOL)arg1 ;
-(void)setDelegate:(id<FBComposerMediaEditingViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBComposerMediaEditingViewDelegate>)delegate;
-(void)setUserSession:(id)arg1 ;
@end
