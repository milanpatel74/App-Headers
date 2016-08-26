/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIButton.h>

@class NSArray, NSString, TGModernTextViewModel;

@interface TGUserInfoTextCollectionItemViewTextView : UIButton {

	NSArray* _currentLinkSelectionViews;
	NSString* _currentLink;
	BOOL _trackingLink;
	/*^block*/id _followLink;
	TGModernTextViewModel* _textModel;

}

@property (nonatomic,copy) id followLink;                                    //@synthesize followLink=_followLink - In the implementation block
@property (nonatomic,readonly) BOOL trackingLink;                            //@synthesize trackingLink=_trackingLink - In the implementation block
@property (nonatomic,retain) TGModernTextViewModel * textModel;              //@synthesize textModel=_textModel - In the implementation block
-(void)setTextModel:(TGModernTextViewModel *)arg1 ;
-(void)setFollowLink:(id)arg1 ;
-(id)followLink;
-(void)followLink:(id)arg1 ;
-(void)updateLinkSelection:(CGPoint)arg1 ;
-(void)clearLinkSelection;
-(BOOL)trackingLink;
-(TGModernTextViewModel *)textModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
