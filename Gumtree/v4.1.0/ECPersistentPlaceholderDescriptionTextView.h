/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECPersistentPlaceholderTextView.h>

@interface ECPersistentPlaceholderDescriptionTextView : ECPersistentPlaceholderTextView {

	double _placeholderTop;

}

@property (assign,nonatomic) double placeholderTop;              //@synthesize placeholderTop=_placeholderTop - In the implementation block
-(void)moveContentView;
-(BOOL)placeholderAtBottom;
-(double)placeholderTop;
-(void)updatePlaceholderTop;
-(void)setPlaceholderTop:(double)arg1 ;
-(void)valueDidChange:(id)arg1 ;
-(double)placeholderFontSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end
