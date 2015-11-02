/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)menuControllerDidHideMenu:(id)arg1 ;
-(void)showPopupMenu;
-(NSAttributedString *)highlightedAttributedText;
-(BOOL)copyEnabled;
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

