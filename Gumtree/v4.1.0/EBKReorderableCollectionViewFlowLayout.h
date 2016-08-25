/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView, NSIndexPath, CADisplayLink, NSString;

@interface EBKReorderableCollectionViewFlowLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate> {

	double _scrollingSpeed;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIView* _currentView;
	NSIndexPath* _selectedItemIndexPath;
	CADisplayLink* _displayLink;
	CGPoint _currentViewCenter;
	CGPoint _panTranslationInCollectionView;
	UIEdgeInsets _scrollingTriggerEdgeInsets;

}

@property (assign,nonatomic) double scrollingSpeed;                                                      //@synthesize scrollingSpeed=_scrollingSpeed - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollingTriggerEdgeInsets;                                    //@synthesize scrollingTriggerEdgeInsets=_scrollingTriggerEdgeInsets - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;                //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                            //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                                       //@synthesize currentView=_currentView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedItemIndexPath;                                        //@synthesize selectedItemIndexPath=_selectedItemIndexPath - In the implementation block
@property (assign,nonatomic) CGPoint currentViewCenter;                                                  //@synthesize currentViewCenter=_currentViewCenter - In the implementation block
@property (assign,nonatomic) CGPoint panTranslationInCollectionView;                                     //@synthesize panTranslationInCollectionView=_panTranslationInCollectionView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,readonly) id<EBKReorderableCollectionViewDataSource> dataSource; 
@property (nonatomic,readonly) id<EBKReorderableCollectionViewDelegateFlowLayout> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleApplicationWillResignActive:(id)arg1 ;
-(void)invalidatesScrollTimer;
-(void)setSelectedItemIndexPath:(NSIndexPath *)arg1 ;
-(void)handleScroll:(id)arg1 ;
-(double)scrollingSpeed;
-(CGPoint)currentViewCenter;
-(void)setCurrentViewCenter:(CGPoint)arg1 ;
-(CGPoint)panTranslationInCollectionView;
-(void)setCurrentView:(UIView *)arg1 ;
-(void)setPanTranslationInCollectionView:(CGPoint)arg1 ;
-(void)invalidateLayoutIfNecessary;
-(UIEdgeInsets)scrollingTriggerEdgeInsets;
-(void)setupScrollTimerInDirection:(long long)arg1 ;
-(void)setUpGestureRecognizersOnCollectionView;
-(void)setScrollingSpeed:(double)arg1 ;
-(void)setScrollingTriggerEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)handleLongPressGesture:(id)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(void)setDefaults;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<EBKReorderableCollectionViewDataSource>)dataSource;
-(id<EBKReorderableCollectionViewDelegateFlowLayout>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(NSIndexPath *)selectedItemIndexPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setupCollectionView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIView *)currentView;
@end
