/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBTextView.h>
#import <Messenger/MNMenuHostResponder.h>

@class UIResponder, NSString;

@interface FBMTextViewInternal : FBTextView <MNMenuHostResponder> {

	BOOL _shouldHideCaret;
	unsigned long long _placeholderAlignment;
	UIResponder* _menuResponder;

}

@property (assign,nonatomic,__weak) UIResponder * menuResponder;                           //@synthesize menuResponder=_menuResponder - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCaret;                                         //@synthesize shouldHideCaret=_shouldHideCaret - In the implementation block
@property (assign,nonatomic,__weak) id<FBMTextViewInternalDelegate> delegate; 
@property (assign,nonatomic) unsigned long long placeholderAlignment;                      //@synthesize placeholderAlignment=_placeholderAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 textInputContextIdentifier:(id)arg2 ;
-(void)setShouldHideCaret:(BOOL)arg1 ;
-(void)setMenuResponder:(UIResponder *)arg1 ;
-(void)setPlaceholderAlignment:(unsigned long long)arg1 ;
-(BOOL)shouldHideCaret;
-(void)handleMenuDidHide;
-(unsigned long long)placeholderAlignment;
-(CGRect)_placeholderRectForPlaceholderAlignment:(unsigned long long)arg1 ;
-(BOOL)_isMenuVisible;
-(UIResponder *)menuResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)delete:(id)arg1 ;
@end
