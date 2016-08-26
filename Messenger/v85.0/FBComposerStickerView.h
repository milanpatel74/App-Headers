/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComposerPhotoOverlayView.h>
#import <Messenger/FBComposerPhotoOverlayViewProtocol.h>

@class UIImageView, FBMStickerView, NSNumber, NSString;

@interface FBComposerStickerView : FBComposerPhotoOverlayView <FBComposerPhotoOverlayViewProtocol> {

	UIImageView* _imageProvidedStickerView;
	FBMStickerView* _stickerView;
	NSNumber* _stickerID;

}

@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,copy) NSNumber * stickerID;                    //@synthesize stickerID=_stickerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerView:(id)arg1 ;
-(id)getCurrentStickerImage;
-(void)setStickerID:(NSNumber *)arg1 ;
-(NSNumber *)stickerID;
-(Class)photoOverlayAttachmentGestureHandlerClass;
-(void)_commonSetUpWithStickerID:(id)arg1 ;
-(void)_removeStickersViewGestures;
-(id)initWithStickerImage:(id)arg1 stickerID:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)contentView;
-(id)accessibilityIdentifier;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isAccessibilityElement;
@end
