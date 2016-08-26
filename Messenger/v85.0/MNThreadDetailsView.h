/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MNLoadingView, UITableView, UICollectionView, MNStackedContainerScrollView;

@interface MNThreadDetailsView : UIView {

	UIView* _detailsHeaderView;
	MNLoadingView* _loadingView;
	BOOL _showHeaderAsCell;
	CGRect _keyboardFrame;
	UITableView* _tableView;
	UICollectionView* _collectionView;
	unsigned long long _layoutMode;
	MNStackedContainerScrollView* _containerScrollView;

}

@property (assign,nonatomic) CGRect keyboardFrame;                                            //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;                                   //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) MNStackedContainerScrollView * containerScrollView;              //@synthesize containerScrollView=_containerScrollView - In the implementation block
-(double)_keyboardTopY;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(void)_updateHeaderViewFrameWithSize:(CGSize)arg1 ;
-(void)_updateLayoutMode;
-(void)_updateFooterViewFrame;
-(id)initWithFrame:(CGRect)arg1 headerView:(id)arg2 showHeaderAsCell:(BOOL)arg3 ;
-(void)hideLoadingView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UITableView *)tableView;
-(UICollectionView *)collectionView;
-(void)_layoutContainerView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setContainerScrollView:(MNStackedContainerScrollView *)arg1 ;
-(MNStackedContainerScrollView *)containerScrollView;
-(void)showLoadingView;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(unsigned long long)layoutMode;
@end
