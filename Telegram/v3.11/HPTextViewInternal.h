/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UITextView.h>

@class TGWeakDelegate;

@interface HPTextViewInternal : UITextView {

	BOOL _isPasting;
	BOOL _freezeContentOffset;
	BOOL _disableContentOffsetAnimation;
	BOOL _enableFirstResponder;
	TGWeakDelegate* _responderStateDelegate;

}

@property (assign,nonatomic) BOOL isPasting;                                       //@synthesize isPasting=_isPasting - In the implementation block
@property (assign,nonatomic) BOOL freezeContentOffset;                             //@synthesize freezeContentOffset=_freezeContentOffset - In the implementation block
@property (assign,nonatomic) BOOL disableContentOffsetAnimation;                   //@synthesize disableContentOffsetAnimation=_disableContentOffsetAnimation - In the implementation block
@property (nonatomic,retain) TGWeakDelegate * responderStateDelegate;              //@synthesize responderStateDelegate=_responderStateDelegate - In the implementation block
@property (assign,nonatomic) BOOL enableFirstResponder;                            //@synthesize enableFirstResponder=_enableFirstResponder - In the implementation block
+(void)addTextViewMethods;
-(void)setEnableFirstResponder:(BOOL)arg1 ;
-(void)textViewAdjustScrollRange:(NSRange)arg1 animated:(BOOL)arg2 ;
-(void)textViewEnsureSelectionVisible;
-(void)setScrollable:(BOOL)arg1 ;
-(BOOL)isPasting;
-(void)setIsPasting:(BOOL)arg1 ;
-(BOOL)freezeContentOffset;
-(void)setFreezeContentOffset:(BOOL)arg1 ;
-(BOOL)disableContentOffsetAnimation;
-(void)setDisableContentOffsetAnimation:(BOOL)arg1 ;
-(TGWeakDelegate *)responderStateDelegate;
-(void)setResponderStateDelegate:(TGWeakDelegate *)arg1 ;
-(BOOL)enableFirstResponder;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setAttributedText:(id)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setText:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)paste:(id)arg1 ;
@end
