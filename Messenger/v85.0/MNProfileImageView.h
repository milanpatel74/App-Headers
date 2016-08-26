/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface MNProfileImageView : UIView {

	NSMutableArray* _imageViews;
	NSArray* _images;
	BOOL _shouldLog;
	BOOL _isPlaceHolderImage;
	id _profileImagesIdentifier;

}

@property (nonatomic,readonly) NSMutableArray * imageViews;              //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) id profileImagesIdentifier;                 //@synthesize profileImagesIdentifier=_profileImagesIdentifier - In the implementation block
-(void)setProfileImages:(id)arg1 animated:(BOOL)arg2 isPlaceHolderImage:(BOOL)arg3 ;
-(void)_layoutOneImage;
-(void)_layoutTwoImages;
-(void)_layoutThreeImages;
-(void)_logProfilePhotoView;
-(double)_horizontalSeparatorLeft;
-(double)_verticalSeparatorTop;
-(void)_prepareImageViews:(unsigned long long)arg1 ;
-(id)profileImagesIdentifier;
-(BOOL)isPlaceHolderImage;
-(void)setProfileImagesIdentifier:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_imageView;
-(NSMutableArray *)imageViews;
@end
