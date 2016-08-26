/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>
#import <Telegram/TGModernConversationCollectionTouchBehaviour.h>
#import <Telegram/TGModernView.h>

@class NSTimer, NSString;

@interface TGInstantPreviewTouchAreaView : UIView <TGModernConversationCollectionTouchBehaviour, TGModernView> {

	NSTimer* _timer;
	BOOL _activated;
	/*^block*/id _touchesBeganAction;
	/*^block*/id _touchesCompletedAction;
	NSString* _viewIdentifier;
	NSString* _viewStateIdentifier;

}

@property (assign,nonatomic) BOOL activated;                              //@synthesize activated=_activated - In the implementation block
@property (nonatomic,retain) NSString * viewIdentifier;                   //@synthesize viewIdentifier=_viewIdentifier - In the implementation block
@property (nonatomic,retain) NSString * viewStateIdentifier;              //@synthesize viewStateIdentifier=_viewStateIdentifier - In the implementation block
@property (nonatomic,copy) id touchesBeganAction;                         //@synthesize touchesBeganAction=_touchesBeganAction - In the implementation block
@property (nonatomic,copy) id touchesCompletedAction;                     //@synthesize touchesCompletedAction=_touchesCompletedAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewStateIdentifier:(NSString *)arg1 ;
-(NSString *)viewStateIdentifier;
-(void)setViewIdentifier:(NSString *)arg1 ;
-(void)willBecomeRecycled;
-(void)timerEvent;
-(id)touchesCompletedAction;
-(/*^block*/id)forwardTouchToCollectionWithCompletion;
-(BOOL)scrollingShouldCancelInstantPreview;
-(id)touchesBeganAction;
-(void)setTouchesBeganAction:(id)arg1 ;
-(void)setTouchesCompletedAction:(id)arg1 ;
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)activated;
-(void)setActivated:(BOOL)arg1 ;
-(void)invalidateTimer;
-(NSString *)viewIdentifier;
@end
