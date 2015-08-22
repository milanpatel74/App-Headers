/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusCursorController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class PTHTweetbotUser, NSString;

@interface PTHTweetbotMentionsController : PTHTweetbotStatusCursorController <UIGestureRecognizerDelegate> {

	PTHTweetbotUser* _tweetbotUser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTweetbotUser:(id)arg1 ;
-(id)searchTitle;
-(id)nothingFoundTitle;
-(BOOL)shouldShowRemoteNotification:(id)arg1 ;
-(void)_updateUnreadTab;
-(void)_playNewItemsSoundIfNeeded;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end
