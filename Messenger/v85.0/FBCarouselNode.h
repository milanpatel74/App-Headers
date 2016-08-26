/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandableNode.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBRichStoryElement, FBCarouselNodeDelegate, FBRichStoryFrameSetter;
@class NSDictionary, NSMutableDictionary, NSArray, _FBSmartScrollNode, UIGestureRecognizer, FBInterpolatedValue, ASImageNode, FBRichStoryBlockDisplayContext, UIScrollView, NSString;

@interface FBCarouselNode : FBExpandableNode <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	NSDictionary* _elementNodes;
	NSMutableDictionary* _activeElementNodes;
	NSArray* _elements;
	_FBSmartScrollNode* _scrollViewNode;
	BOOL _shouldPageInline;
	id<FBRichStoryElement> _selectedElement;
	UIGestureRecognizer* _tapRecognizer;
	FBInterpolatedValue* _interpolatedSelectedElementCenterX;
	ASImageNode* _nextElementIndicatorNode;
	double _nextElementIndicatorPulsePercentage;
	BOOL _showNextElementIndicator;
	id<FBCarouselNodeDelegate> _delegate;
	id<FBRichStoryFrameSetter> _frameSetter;
	FBRichStoryBlockDisplayContext* _displayContext;

}

@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) double selectedElementCenterX; 
@property (nonatomic,retain) FBRichStoryBlockDisplayContext * displayContext;                //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,readonly) BOOL flipped; 
@property (assign,nonatomic,__weak) id<FBCarouselNodeDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBRichStoryFrameSetter> frameSetter;                         //@synthesize frameSetter=_frameSetter - In the implementation block
@property (assign,nonatomic) BOOL showNextElementIndicator;                                  //@synthesize showNextElementIndicator=_showNextElementIndicator - In the implementation block
@property (assign,nonatomic) BOOL shouldPageInline;                                          //@synthesize shouldPageInline=_shouldPageInline - In the implementation block
@property (nonatomic,readonly) id<FBRichStoryElement> currentlyCenteredElement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(BOOL)isPannedToEdge:(unsigned)arg1 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id<FBRichStoryFrameSetter>)frameSetter;
-(void)setFrameSetter:(id<FBRichStoryFrameSetter>)arg1 ;
-(BOOL)shouldPageInline;
-(void)setDisplayContext:(FBRichStoryBlockDisplayContext *)arg1 ;
-(BOOL)flipped;
-(CGPoint)_resetOffset;
-(void)setShowNextElementIndicator:(BOOL)arg1 ;
-(double)_centerXForElement:(id)arg1 ;
-(id)_elementAtPoint:(CGPoint)arg1 ;
-(id<FBRichStoryElement>)currentlyCenteredElement;
-(void)setCurrentElement:(id)arg1 withAnimation:(SCD_Struct_FB93)arg2 ;
-(double)selectedElementCenterX;
-(CGRect)_currentViewport;
-(id)_elementsInRect:(CGRect)arg1 ;
-(void)_tappedNextElementIndicator;
-(void)_startIndicatorAnimation;
-(void)_stopIndicatorAnimation;
-(BOOL)showNextElementIndicator;
-(void)_layoutNextElementIndicator;
-(id)elementAfterElement:(id)arg1 ;
-(void)_animateToSelectedElementCenterX:(double)arg1 withConfiguration:(SCD_Struct_FB93)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CGRect)_layoutElements;
-(void)_updateNextElementIndicatorVisibility;
-(void)setSelectedElementCenterX:(double)arg1 ;
-(void)_updateActiveElementNodes;
-(id)initWithNodes:(id)arg1 elements:(id)arg2 displayContext:(id)arg3 ;
-(void)setShouldPageInline:(BOOL)arg1 ;
-(void)didCollapse;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB93)arg1 ;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB93)arg1 ;
-(void)didExpand;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(FBRichStoryBlockDisplayContext *)displayContext;
-(void)setDelegate:(id<FBCarouselNodeDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<FBCarouselNodeDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)reset;
-(UIScrollView *)scrollView;
-(void)layout;
-(void)_stopAnimation;
-(void)didLoad;
-(void)_handleTap:(id)arg1 ;
@end
