/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBMStickerViewDelegate.h>

@protocol FBStickerAttachmentListener;
@class FBMStickerView, FBMSticker, UIButton, NSString;

@interface FBStickerViewContainerForComponent : UIView <FBMStickerViewDelegate> {

	FBMStickerView* _stickerView;
	FBMSticker* _sticker;
	id<FBStickerAttachmentListener> _stickerAttachmentListener;
	UIButton* _removeStickerButton;
	BOOL _canRemoveSticker;

}

@property (assign,nonatomic,__weak) id<FBStickerAttachmentListener> stickerAttachmentListener;              //@synthesize stickerAttachmentListener=_stickerAttachmentListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(void)configureStickerViewWithSticker:(id)arg1 userSession:(id)arg2 canRemoveSticker:(BOOL)arg3 ;
-(void)setStickerAttachmentListener:(id<FBStickerAttachmentListener>)arg1 ;
-(void)_didTapStickerView;
-(void)_didTapRemoveStickerButton;
-(id<FBStickerAttachmentListener>)stickerAttachmentListener;
-(void)layoutSubviews;
-(void)startAnimation;
@end
