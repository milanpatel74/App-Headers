/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol RhythmClickHandlerDelegate;
@class NSObject, NSString, UIView, UIWindow, UIViewController, NSURL;

@interface RhythmClickHandler : NSObject <MFMailComposeViewControllerDelegate, UIAlertViewDelegate> {

	NSObject*<RhythmClickHandlerDelegate> clickHandlerDelegate;
	BOOL willCallClickActionDone;
	int eventType;
	NSString* eventLabel;
	BOOL eventFailed;
	BOOL waitingMediaPreload;
	UIView* containerView;
	UIWindow* extraWindow;
	BOOL movieLoadedInBackground;
	UIViewController* videoController;
	BOOL outstandingActionOnGoing;
	NSURL* callUrl;

}

@property (nonatomic,retain) NSObject*<RhythmClickHandlerDelegate> clickHandlerDelegate; 
@property (nonatomic,readonly) BOOL willCallClickActionDone; 
@property (nonatomic,retain) UIView * containerView; 
@property (nonatomic,readonly) int eventType; 
@property (nonatomic,readonly) NSString * eventLabel; 
@property (nonatomic,readonly) BOOL eventFailed; 
@property (nonatomic,readonly) BOOL movieLoadedInBackground; 
@property (assign,nonatomic) BOOL outstandingActionOnGoing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldStartLoadForRequestWithURL:(id)arg1 webView:(id)arg2 ;
-(void)setClickHandlerDelegate:(NSObject*<RhythmClickHandlerDelegate>)arg1 ;
-(void)resumeAdAfterDelay;
-(id)extractQueryParametersFromUrl:(id)arg1 ;
-(BOOL)isVPAIDJSCommand:(id)arg1 command:(id*)arg2 ;
-(BOOL)handleVPAIDJSCommand:(id)arg1 parameters:(id)arg2 webView:(id)arg3 ;
-(void)doMap:(id)arg1 ;
-(void)doWebcal:(id)arg1 ;
-(BOOL)isTelephoneNumber:(id)arg1 ;
-(void)doCall:(id)arg1 ;
-(void)doItunes:(id)arg1 ;
-(void)doBrowser:(id)arg1 ;
-(id)urlify:(id)arg1 ;
-(NSObject*<RhythmClickHandlerDelegate>)clickHandlerDelegate;
-(BOOL)willCallClickActionDone;
-(NSString *)eventLabel;
-(BOOL)eventFailed;
-(BOOL)movieLoadedInBackground;
-(BOOL)outstandingActionOnGoing;
-(void)setOutstandingActionOnGoing:(BOOL)arg1 ;
-(void)dealloc;
-(UIView *)containerView;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setContainerView:(UIView *)arg1 ;
-(int)eventType;
@end
