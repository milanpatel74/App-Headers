/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol MNMosaicLayoutDelegate;
@interface MNMosaicLayout : UICollectionViewLayout {

	CGRect _customBoundsForPrepareLayout;
	id<MNMosaicLayoutDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMosaicLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)contentWidthForPrepareLayout;
-(CGRect)collectionViewBoundsForPrepareLayout;
-(void)setDelegate:(id<MNMosaicLayoutDelegate>)arg1 ;
-(id)init;
-(id<MNMosaicLayoutDelegate>)delegate;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

