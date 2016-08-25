/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFSafariViewController.h>

@class PTHTweetbotUIActivitySafariViewControllerDelegate;

@interface PTHTweetbotSafariViewController : SFSafariViewController {

	PTHTweetbotUIActivitySafariViewControllerDelegate* _delegate;
	long long _preferredStatusBarStyle;

}

@property (nonatomic,readonly) long long preferredStatusBarStyle;              //@synthesize preferredStatusBarStyle=_preferredStatusBarStyle - In the implementation block
-(id)initWithURL:(id)arg1 entersReaderIfAvailable:(BOOL)arg2 status:(id)arg3 account:(id)arg4 ;
-(long long)preferredStatusBarStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
