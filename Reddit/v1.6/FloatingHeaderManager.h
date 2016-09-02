/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FloatingHeaderCallbackProtocol;
#import <Reddit/Reddit-Structs.h>
@class UIScrollView;

@interface FloatingHeaderManager : NSObject {

	id<FloatingHeaderCallbackProtocol> _delegate;
	double _suggestedTransformY;
	UIScrollView* _scrollView;
	double _allowedMaxTransformY;
	double _initialResistanceDistance;
	double _suggestedTransformYBeforeCalculatingResistance;
	UIEdgeInsets _originalScrollViewInsets;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                          //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets originalScrollViewInsets;                              //@synthesize originalScrollViewInsets=_originalScrollViewInsets - In the implementation block
@property (assign,nonatomic) double allowedMaxTransformY;                                        //@synthesize allowedMaxTransformY=_allowedMaxTransformY - In the implementation block
@property (assign,nonatomic) double initialResistanceDistance;                                   //@synthesize initialResistanceDistance=_initialResistanceDistance - In the implementation block
@property (assign,nonatomic) double suggestedTransformYBeforeCalculatingResistance;              //@synthesize suggestedTransformYBeforeCalculatingResistance=_suggestedTransformYBeforeCalculatingResistance - In the implementation block
@property (assign,nonatomic,__weak) id<FloatingHeaderCallbackProtocol> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double suggestedTransformY;                                         //@synthesize suggestedTransformY=_suggestedTransformY - In the implementation block
-(double)suggestedTransformY;
-(id)initWithScrollView:(id)arg1 allowedMaxTransformY:(double)arg2 initialResistanceDistance:(double)arg3 ;
-(void)setAllowedMaxTransformY:(double)arg1 ;
-(void)setInitialResistanceDistance:(double)arg1 ;
-(void)setOriginalScrollViewInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)originalScrollViewInsets;
-(double)suggestedTransformYBeforeCalculatingResistance;
-(void)setSuggestedTransformYBeforeCalculatingResistance:(double)arg1 ;
-(double)allowedMaxTransformY;
-(double)initialResistanceDistance;
-(void)setSuggestedTransformY:(double)arg1 ;
-(void)calculateTransformYFromOldOffset:(double)arg1 toNewOffset:(double)arg2 ;
-(id)initWithScrollView:(id)arg1 allowedMaxTransformY:(double)arg2 ;
-(void)resetFloatingHeaderPosition;
-(void)setDelegate:(id<FloatingHeaderCallbackProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FloatingHeaderCallbackProtocol>)delegate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
