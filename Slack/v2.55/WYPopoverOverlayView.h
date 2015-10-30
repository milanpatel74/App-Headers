/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@protocol WYPopoverOverlayViewDelegate;
@class NSArray;

@interface WYPopoverOverlayView : UIView {

	BOOL _isAccessible;
	BOOL _testHits;
	id<WYPopoverOverlayViewDelegate> _delegate;
	NSArray* _passthroughViews;

}

@property (assign,nonatomic) id<WYPopoverOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL testHits;                                          //@synthesize testHits=_testHits - In the implementation block
@property (assign,nonatomic) NSArray * passthroughViews;                             //@synthesize passthroughViews=_passthroughViews - In the implementation block
-(BOOL)testHits;
-(void)setTestHits:(BOOL)arg1 ;
-(BOOL)isPassthroughView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WYPopoverOverlayViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<WYPopoverOverlayViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
@end
