/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Telegram/TGModernConversationCollectionViewInstantPreviewRecognizerDelegate.h>

@protocol TGModernConversationCollectionTouchBehaviour;
@class TGModernViewStorage, UIView, NSString;

@interface TGModernConversationCollectionView : UICollectionView <UIGestureRecognizerDelegate, TGModernConversationCollectionViewInstantPreviewRecognizerDelegate> {

	double _indicatorInset;
	BOOL _delayVisibleItemsUpdate;
	double _lastRelativeBoundsReport;
	BOOL _disableDecorationViewUpdates;
	map<long, UIView<TGModernView> *, std::less<long>, std::allocator<std::pair<const long, UIView<TGModernView> *> > >* _currentVisibleDecorationViews;
	TGModernViewStorage* _viewStorage;
	id<TGModernConversationCollectionTouchBehaviour> _currentInstantPreviewTarget;
	double _ignoreBackgroundTouchBeforeDate;
	UIView* _headerView;
	/*^block*/id _touchCompletion;
	SCD_Struct_TG131 _unreadMessageRange;

}

@property (nonatomic,copy) id touchCompletion;                                 //@synthesize touchCompletion=_touchCompletion - In the implementation block
@property (assign,nonatomic) SCD_Struct_TG131 unreadMessageRange;              //@synthesize unreadMessageRange=_unreadMessageRange - In the implementation block
@property (nonatomic,retain) UIView * headerView;                              //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alloc;
+(void)load;
-(void)updateVisibleItemsNow;
-(void)instantPreviewGestureDidEnd;
-(void)instantPreviewGestureDidBegin;
-(void)instantPreviewGestureDidMove;
-(void)setUnreadMessageRange:(SCD_Struct_TG131)arg1 ;
-(void)instantPreviewGesture:(id)arg1 ;
-(void)setTouchCompletion:(id)arg1 ;
-(void)endInstantPreviewGesture;
-(id)touchCompletion;
-(id)touchBehaviourForViewOrSuperviews:(id)arg1 ;
-(void)updateVisibleDecorationViews;
-(CGRect)headerViewFrame;
-(BOOL)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 beforeDecorations:(/*^block*/id)arg3 animated:(BOOL)arg4 animationFactor:(float)arg5 ;
-(BOOL)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 beforeDecorations:(/*^block*/id)arg3 animated:(BOOL)arg4 animationFactor:(float)arg5 insideAnimation:(/*^block*/id)arg6 ;
-(BOOL)updateRelativeBounds;
-(void)setDelayVisibleItemsUpdate:(BOOL)arg1 ;
-(void)scrollToTopIfNeeded;
-(void)setDisableDecorationViewUpdates:(BOOL)arg1 ;
-(BOOL)disableDecorationViewUpdates;
-(id)viewForDecorationAtIndex:(int)arg1 ;
-(id)visibleDecorations;
-(void)updateDecorationAssets;
-(double)implicitTopInset;
-(SCD_Struct_TG131)unreadMessageRange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)resizableSnapshotViewFromRect:(CGRect)arg1 afterScreenUpdates:(BOOL)arg2 withCapInsets:(UIEdgeInsets)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)updateHeaderView;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end
