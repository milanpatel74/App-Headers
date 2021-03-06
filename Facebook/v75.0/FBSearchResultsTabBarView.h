/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBSearchResultsTabBarViewLayoutDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Facebook/FBSearchResultsTabBarViewProtocol.h>

@protocol FBSearchResultsTabBarViewDelegate;
@class UICollectionView, UIView, FBSearchResultsTabBarDataSource, NSString;

@interface FBSearchResultsTabBarView : UIView <FBSearchResultsTabBarViewLayoutDelegate, UICollectionViewDelegate, FBSearchResultsTabBarViewProtocol> {

	UICollectionView* _collectionView;
	UIView* _bottomHairlineView;
	FBSearchResultsTabBarDataSource* _dataSource;
	unsigned long long _selectedIndex;
	id<FBSearchResultsTabBarViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSearchResultsTabBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                                   //@synthesize selectedIndex=_selectedIndex - In the implementation block
+(double)tabBarHeight;
-(id)initWithModels:(id)arg1 userSession:(id)arg2 ;
-(void)collectionViewLayout:(id)arg1 didSnapOnItemWithIndexPath:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBSearchResultsTabBarViewDelegate>)arg1 ;
-(id<FBSearchResultsTabBarViewDelegate>)delegate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
@end

