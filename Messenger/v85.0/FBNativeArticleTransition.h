/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/POPAnimationDelegate.h>

@protocol FBNativeArticleTransitionDelegate;
@class FBRichStoryBlock, NSDictionary, FBTransitionFrameSetter, NSString;

@interface FBNativeArticleTransition : NSObject <POPAnimationDelegate> {

	BOOL _trackTouches;
	BOOL _animated;
	BOOL _hasBegunSettling;
	id<FBNativeArticleTransitionDelegate> _delegate;
	FBRichStoryBlock* _storyBlock;
	NSDictionary* _presentationAttributes;
	NSDictionary* _priorPresentationAttributes;
	FBTransitionFrameSetter* _transitionLayout;
	long long _gestureDirection;
	double _transitionProgress;

}

@property (assign,nonatomic,__weak) id<FBNativeArticleTransitionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBRichStoryBlock * storyBlock;                                    //@synthesize storyBlock=_storyBlock - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * presentationAttributes;                       //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * priorPresentationAttributes;                  //@synthesize priorPresentationAttributes=_priorPresentationAttributes - In the implementation block
@property (nonatomic,readonly) FBTransitionFrameSetter * transitionLayout;                       //@synthesize transitionLayout=_transitionLayout - In the implementation block
@property (nonatomic,readonly) long long gestureDirection;                                       //@synthesize gestureDirection=_gestureDirection - In the implementation block
@property (nonatomic,readonly) BOOL trackTouches;                                                //@synthesize trackTouches=_trackTouches - In the implementation block
@property (nonatomic,readonly) BOOL animated;                                                    //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) BOOL isAnimating; 
@property (assign,nonatomic) double transitionProgress;                                          //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) BOOL hasBegunSettling;                                              //@synthesize hasBegunSettling=_hasBegunSettling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stateWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 priorPresentationAttributes:(id)arg3 transitionLayout:(id)arg4 gestureDirection:(long long)arg5 trackTouches:(BOOL)arg6 animated:(BOOL)arg7 ;
-(void)pop_animationDidReachToValue:(id)arg1 ;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 priorPresentationAttributes:(id)arg3 transitionLayout:(id)arg4 gestureDirection:(long long)arg5 trackTouches:(BOOL)arg6 animated:(BOOL)arg7 ;
-(long long)gestureDirection;
-(void)setHasBegunSettling:(BOOL)arg1 ;
-(NSDictionary *)priorPresentationAttributes;
-(BOOL)trackTouches;
-(void)animateToTransitionProgress:(double)arg1 animationConfiguration:(SCD_Struct_FB93)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)hasBegunSettling;
-(FBRichStoryBlock *)storyBlock;
-(void)setDelegate:(id<FBNativeArticleTransitionDelegate>)arg1 ;
-(id<FBNativeArticleTransitionDelegate>)delegate;
-(BOOL)animated;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(FBTransitionFrameSetter *)transitionLayout;
-(NSDictionary *)presentationAttributes;
@end
