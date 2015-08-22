/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Twitter/TFNTwitterCardView.h>

@protocol TFNTwitterCardViewDelegate, TFNTwitterCardViewLayoutDelegate;
@class TFNTwitterCardContext, T1NativeOffersCardForwardView, T1NativeOffersCardFullView, UIView;

@interface T1NativeOffersCardView : UIView <TFNTwitterCardView> {

	TFNTwitterCardContext* _cardContext;
	id<TFNTwitterCardViewDelegate> _delegate;
	id _layoutState;
	id<TFNTwitterCardViewLayoutDelegate> _layoutDelegate;
	T1NativeOffersCardForwardView* _forwardView;
	T1NativeOffersCardFullView* _fullView;

}

@property (nonatomic,retain) T1NativeOffersCardForwardView * forwardView;                             //@synthesize forwardView=_forwardView - In the implementation block
@property (nonatomic,retain) T1NativeOffersCardFullView * fullView;                                   //@synthesize fullView=_fullView - In the implementation block
@property (nonatomic,readonly) TFNTwitterCardContext * cardContext;                                   //@synthesize cardContext=_cardContext - In the implementation block
@property (nonatomic,retain) id layoutState;                                                          //@synthesize layoutState=_layoutState - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterCardViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterCardViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,readonly) UIView * previewImageView; 
-(TFNTwitterCardContext *)cardContext;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(T1NativeOffersCardFullView *)fullView;
-(T1NativeOffersCardForwardView *)forwardView;
-(void)_cardContextUpdated;
-(void)_delegateUpdated;
-(void)setForwardView:(T1NativeOffersCardForwardView *)arg1 ;
-(void)setFullView:(T1NativeOffersCardFullView *)arg1 ;
-(void)setDelegate:(id<TFNTwitterCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<TFNTwitterCardViewDelegate>)delegate;
-(void)prepareForReuse;
-(id)layoutState;
-(void)setLayoutState:(id)arg1 ;
-(id<TFNTwitterCardViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<TFNTwitterCardViewLayoutDelegate>)arg1 ;
@end
