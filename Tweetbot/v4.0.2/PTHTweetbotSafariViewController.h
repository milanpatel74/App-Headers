/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SafariServices/SFSafariViewController.h>

@class PTHTweetbotUIActivitySafariViewControllerDelegate, _PTHTweetbotSafariViewControllerTransitioningDelegate, UIView;

@interface PTHTweetbotSafariViewController : SFSafariViewController {

	PTHTweetbotUIActivitySafariViewControllerDelegate* _delegate;
	_PTHTweetbotSafariViewControllerTransitioningDelegate* _transitioningDelegate;
	UIView* _gestureHackView;

}
-(id)initWithURL:(id)arg1 entersReaderIfAvailable:(BOOL)arg2 status:(id)arg3 account:(id)arg4 ;
-(void)handleDismiss:(id)arg1 ;
-(id)initWithURL:(id)arg1 entersReaderIfAvailable:(BOOL)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

