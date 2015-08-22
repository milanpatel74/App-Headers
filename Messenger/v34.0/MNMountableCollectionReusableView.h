/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIView, UICollectionViewLayoutAttributes;

@interface MNMountableCollectionReusableView : UICollectionReusableView {

	UIView* _contentView;
	UICollectionViewLayoutAttributes* _layoutAttributes;

}

@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
+(Class)layerClass;
-(void)setAnchorPointWithoutChangingFrame:(CGPoint)arg1 ;
-(BOOL)_isParentCollectionViewBeingUpdated;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
@end
