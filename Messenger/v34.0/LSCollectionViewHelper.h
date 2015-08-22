/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSIndexPath, UICollectionViewCell, UIImageView, CADisplayLink, UICollectionView, UILongPressGestureRecognizer, UIGestureRecognizer, LSCollectionViewLayoutHelper, NSString;

@interface LSCollectionViewHelper : NSObject <UIGestureRecognizerDelegate> {

	NSIndexPath* originalIndexPath;
	NSIndexPath* lastIndexPath;
	UICollectionViewCell* lastCell;
	UIImageView* mockCell;
	CGPoint mockCenter;
	CGPoint fingerTranslation;
	CADisplayLink* timer;
	long long scrollingDirection;
	BOOL canWarp;
	BOOL canScroll;
	CGPoint lastPanPoint;
	CGAffineTransform pickupScaleTransform;
	BOOL _enabled;
	BOOL _tiltToRemoveEnabled;
	UICollectionView* _collectionView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIGestureRecognizer* _panPressGestureRecognizer;
	double _scrollingSpeed;
	double _minimumPressDuration;
	double _startRemoveTiltThreshold;
	double _removeTiltMaxDegree;
	double _startRemoveThreshold;
	UIEdgeInsets _scrollingEdgeInsets;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * panPressGestureRecognizer;                        //@synthesize panPressGestureRecognizer=_panPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollingEdgeInsets;                                         //@synthesize scrollingEdgeInsets=_scrollingEdgeInsets - In the implementation block
@property (assign,nonatomic) double scrollingSpeed;                                                    //@synthesize scrollingSpeed=_scrollingSpeed - In the implementation block
@property (assign,nonatomic) double minimumPressDuration;                                              //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL tiltToRemoveEnabled;                                                 //@synthesize tiltToRemoveEnabled=_tiltToRemoveEnabled - In the implementation block
@property (assign,nonatomic) double startRemoveTiltThreshold;                                          //@synthesize startRemoveTiltThreshold=_startRemoveTiltThreshold - In the implementation block
@property (assign,nonatomic) double removeTiltMaxDegree;                                               //@synthesize removeTiltMaxDegree=_removeTiltMaxDegree - In the implementation block
@property (assign,nonatomic) double startRemoveThreshold;                                              //@synthesize startRemoveThreshold=_startRemoveThreshold - In the implementation block
@property (nonatomic,readonly) LSCollectionViewLayoutHelper * layoutHelper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutChanged;
-(LSCollectionViewLayoutHelper *)layoutHelper;
-(void)handleScroll:(id)arg1 ;
-(id)indexPathForItemClosestToPoint:(CGPoint)arg1 inCellBounds:(BOOL)arg2 ;
-(BOOL)_fbRect:(CGRect)arg1 containsPointInclusive:(CGPoint)arg2 ;
-(BOOL)tiltToRemoveEnabled;
-(id)imageFromCell:(id)arg1 ;
-(double)startRemoveThreshold;
-(void)invalidatesScrollTimer;
-(double)startRemoveTiltThreshold;
-(double)removeTiltMaxDegree;
-(UIEdgeInsets)scrollingEdgeInsets;
-(void)setupScrollTimerInDirection:(long long)arg1 ;
-(id)indexPathForItemClosestToPoint:(CGPoint)arg1 ;
-(void)warpToIndexPath:(id)arg1 ;
-(void)tiltIndexPath:(id)arg1 currentPoint:(CGPoint)arg2 ;
-(double)scrollingSpeed;
-(UIGestureRecognizer *)panPressGestureRecognizer;
-(void)setScrollingEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setScrollingSpeed:(double)arg1 ;
-(void)setTiltToRemoveEnabled:(BOOL)arg1 ;
-(void)setStartRemoveTiltThreshold:(double)arg1 ;
-(void)setRemoveTiltMaxDegree:(double)arg1 ;
-(void)setStartRemoveThreshold:(double)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)handleLongPressGesture:(id)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(UICollectionView *)collectionView;
-(BOOL)enabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)minimumPressDuration;
-(id)initWithCollectionView:(id)arg1 ;
@end
