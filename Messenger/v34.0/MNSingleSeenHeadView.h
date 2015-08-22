/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAnimationActionOverriding.h>
#import <Messenger/MNSeenHeadView.h>

@class UIImageView, MNSeenHeadActionOverrider, FBMUser, NSURL, UIImage, NSString;

@interface MNSingleSeenHeadView : UIView <MNAnimationActionOverriding, MNSeenHeadView> {

	UIImageView* _headView;
	UIImageView* _headBorderView;
	MNSeenHeadActionOverrider* _seenHeadActionOverrider;
	unsigned long long _seenHeadSize;
	FBMUser* _DEPRECATED_user;
	NSURL* _imageURL;

}

@property (nonatomic,copy) FBMUser * DEPRECATED_user;                      //@synthesize DEPRECATED_user=_DEPRECATED_user - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                               //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * headImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long seenHeadSize;              //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
+(CGSize)sizeForSeenHeadSize:(unsigned long long)arg1 ;
-(BOOL)shouldOverrideActionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(id)actionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 andTemplateAnimation:(id)arg4 ;
-(unsigned long long)seenHeadSize;
-(void)setSeenHeadSize:(unsigned long long)arg1 ;
-(FBMUser *)DEPRECATED_user;
-(void)setDEPRECATED_user:(FBMUser *)arg1 ;
-(void)setHeadImage:(UIImage *)arg1 ;
-(UIImage *)headImage;
-(void)setHeadImage:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithUsesManhattanPath:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end
