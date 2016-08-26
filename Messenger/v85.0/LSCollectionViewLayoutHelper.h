/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewLayout_Warpable;
@class UICollectionViewLayout, NSIndexPath;

@interface LSCollectionViewLayoutHelper : NSObject {

	UICollectionViewLayout*<UICollectionViewLayout_Warpable> _collectionViewLayout;
	NSIndexPath* _fromIndexPath;
	NSIndexPath* _toIndexPath;
	NSIndexPath* _hideIndexPath;

}

@property (nonatomic,__weak,readonly) UICollectionViewLayout*<UICollectionViewLayout_Warpable> collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) NSIndexPath * fromIndexPath;                                                                         //@synthesize fromIndexPath=_fromIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * toIndexPath;                                                                           //@synthesize toIndexPath=_toIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * hideIndexPath;                                                                         //@synthesize hideIndexPath=_hideIndexPath - In the implementation block
-(NSIndexPath *)fromIndexPath;
-(NSIndexPath *)toIndexPath;
-(void)setToIndexPath:(NSIndexPath *)arg1 ;
-(void)setFromIndexPath:(NSIndexPath *)arg1 ;
-(void)setHideIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)hideIndexPath;
-(void)rearrangeIndexPathOfLayoutAttributesForElements:(id)arg1 ;
-(id)modifiedLayoutAttributesForElements:(id)arg1 ;
-(UICollectionViewLayout*<UICollectionViewLayout_Warpable>)collectionViewLayout;
-(id)initWithCollectionViewLayout:(id)arg1 ;
@end
