/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol FBStorylineMoreTabDelegate;
@class NSArray, NSString;

@interface FBStorylineMoreTab : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _items;
	id<FBStorylineMoreTabDelegate> _moreTabDelegate;

}

@property (assign,nonatomic,__weak) id<FBStorylineMoreTabDelegate> moreTabDelegate;              //@synthesize moreTabDelegate=_moreTabDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureCell:(id)arg1 forItemType:(long long)arg2 ;
-(id<FBStorylineMoreTabDelegate>)moreTabDelegate;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 items:(id)arg3 ;
-(void)setMoreTabDelegate:(id<FBStorylineMoreTabDelegate>)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end
