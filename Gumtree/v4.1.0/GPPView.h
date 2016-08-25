/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>
#import <Gumtree/GPPLayoutOptions.h>

@interface GPPView : UIView <GPPLayoutOptions> {

	BOOL _hiddenInLandscapeWhileEditing;
	BOOL _reversesSubviewsInRTL;
	BOOL _useFlexibleHeight;
	BOOL _ignoredInLayout;
	BOOL _layoutEvenIfInvisible;

}

@property (assign,nonatomic) BOOL hiddenInLandscapeWhileEditing;              //@synthesize hiddenInLandscapeWhileEditing=_hiddenInLandscapeWhileEditing - In the implementation block
@property (assign,nonatomic) BOOL reversesSubviewsInRTL;                      //@synthesize reversesSubviewsInRTL=_reversesSubviewsInRTL - In the implementation block
@property (assign,nonatomic) BOOL useFlexibleHeight;                          //@synthesize useFlexibleHeight=_useFlexibleHeight - In the implementation block
@property (assign,nonatomic) BOOL ignoredInLayout;                            //@synthesize ignoredInLayout=_ignoredInLayout - In the implementation block
@property (assign,nonatomic) BOOL layoutEvenIfInvisible;                      //@synthesize layoutEvenIfInvisible=_layoutEvenIfInvisible - In the implementation block
-(void)gppInit;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)setLayoutEvenIfInvisible:(BOOL)arg1 ;
-(void)setUseFlexibleHeight:(BOOL)arg1 ;
-(BOOL)ignoredInLayout;
-(BOOL)layoutEvenIfInvisible;
-(BOOL)useFlexibleHeight;
-(void)setIgnoredInLayout:(BOOL)arg1 ;
-(BOOL)reversesSubviewsInRTL;
-(BOOL)hiddenInLandscapeWhileEditing;
-(BOOL)shouldBeHiding;
-(void)setHiddenInLandscapeWhileEditing:(BOOL)arg1 ;
-(void)setReversesSubviewsInRTL:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(void)updateVisibility;
-(void)orientationDidChange:(id)arg1 ;
@end
