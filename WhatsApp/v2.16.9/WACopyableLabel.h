/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UILabel.h>

@class NSAttributedString;

@interface WACopyableLabel : UILabel {

	NSAttributedString* _originalAttributedText;
	BOOL _copyEnabled;
	NSAttributedString* _highlightedAttributedText;

}

@property (assign,nonatomic) BOOL copyEnabled;                                          //@synthesize copyEnabled=_copyEnabled - In the implementation block
@property (nonatomic,copy) NSAttributedString * highlightedAttributedText;              //@synthesize highlightedAttributedText=_highlightedAttributedText - In the implementation block
-(void)showPopupMenu;
-(NSAttributedString *)highlightedAttributedText;
-(BOOL)copyEnabled;
-(void)menuControllerDidHideMenu:(id)arg1 ;
-(void)setCopyEnabled:(BOOL)arg1 ;
-(void)setHighlightedAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)copy:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
@end
