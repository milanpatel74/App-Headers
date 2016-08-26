/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol FBPaymentsItemImageCollectionViewItemImageCellDelegate;
@class FBNetworkImageView, FBPaymentsImage;

@interface FBPaymentsItemImageCollectionViewItemImageCell : UICollectionViewCell {

	FBNetworkImageView* _networkImageView;
	id<FBPaymentsItemImageCollectionViewItemImageCellDelegate> _delegate;
	FBPaymentsImage* _paymentsImage;

}

@property (assign,nonatomic,__weak) id<FBPaymentsItemImageCollectionViewItemImageCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBPaymentsImage * paymentsImage;                                                           //@synthesize paymentsImage=_paymentsImage - In the implementation block
-(void)_initNetworkImageViewIfNeeded;
-(void)_setDefaultImage:(id)arg1 ;
-(void)setPaymentsImage:(FBPaymentsImage *)arg1 ;
-(FBPaymentsImage *)paymentsImage;
-(void)setDelegate:(id<FBPaymentsItemImageCollectionViewItemImageCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBPaymentsItemImageCollectionViewItemImageCellDelegate>)delegate;
-(void)_setImageURL:(id)arg1 ;
@end
