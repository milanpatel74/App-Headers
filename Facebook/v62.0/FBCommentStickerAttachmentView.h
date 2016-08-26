/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>
#import <Facebook/FBMStickerViewDelegate.h>

@class FBMStickerView, FBMemStoryAttachment, FBMSticker, UIMenuItem, NSString;

@interface FBCommentStickerAttachmentView : UIControl <FBMStickerViewDelegate> {

	FBMStickerView* _stickerView;
	BOOL _disableMargins;
	BOOL _shouldRestoreMenuControllerAfterRotation;
	BOOL _disableMargin;
	int _layout;
	FBMemStoryAttachment* _storyAttachment;
	FBMSticker* _sticker;
	UIMenuItem* _viewPackButton;

}

@property (nonatomic,retain) UIMenuItem * viewPackButton;                         //@synthesize viewPackButton=_viewPackButton - In the implementation block
@property (nonatomic,retain) FBMemStoryAttachment * storyAttachment;              //@synthesize storyAttachment=_storyAttachment - In the implementation block
@property (nonatomic,readonly) FBMSticker * sticker;                              //@synthesize sticker=_sticker - In the implementation block
@property (assign,nonatomic) int layout;                                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL disableMargin;                                  //@synthesize disableMargin=_disableMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)stickerSizeForLayout:(int)arg1 ;
+(FBLayout)stickerLayoutForLayout:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(FBMemStoryAttachment *)storyAttachment;
-(FBMSticker *)sticker;
-(void)setDisableMargin:(BOOL)arg1 ;
-(void)setStoryAttachment:(FBMemStoryAttachment *)arg1 ;
-(void)_commentCellStickerLongPressed:(id)arg1 ;
-(void)_orientationWillChange:(id)arg1 ;
-(void)resumeLoadingAnimationIfNeeded;
-(void)_viewStickerPack:(id)arg1 ;
-(UIMenuItem *)viewPackButton;
-(void)_showViewPackButton;
-(FBLayout)_getImageLayout;
-(double)_getLayoutHeight;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(void)showViewPackButtonIfNeeded;
-(void)stickerViewDidResize:(id)arg1 ;
-(void)stickerViewWillBounce:(id)arg1 ;
-(void)stickerViewDidBounce:(id)arg1 ;
-(BOOL)stickerViewShouldBounce:(id)arg1 ;
-(BOOL)disableMargin;
-(void)setViewPackButton:(UIMenuItem *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(int)layout;
-(BOOL)canResignFirstResponder;
-(void)setLayout:(int)arg1 ;
-(void)_updateContent;
@end
