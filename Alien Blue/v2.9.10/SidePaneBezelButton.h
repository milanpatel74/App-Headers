/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIControl.h>

@class NSString;

@interface SidePaneBezelButton : UIControl {

	BOOL _alternatePresentation;
	NSString* _i_title;

}

@property (readonly) NSString * title; 
@property (assign) BOOL alternatePresentation;              //@synthesize alternatePresentation=_alternatePresentation - In the implementation block
@property (retain) NSString * i_title;                      //@synthesize i_title=_i_title - In the implementation block
-(void)setPaneTitle:(id)arg1 ;
-(NSString *)i_title;
-(void)setI_title:(NSString *)arg1 ;
-(BOOL)alternatePresentation;
-(void)setAlternatePresentation:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end
