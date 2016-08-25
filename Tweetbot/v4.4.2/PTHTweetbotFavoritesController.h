/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusCursorController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class PTHTweetbotUser, NSString;

@interface PTHTweetbotFavoritesController : PTHTweetbotStatusCursorController <UIGestureRecognizerDelegate> {

	PTHTweetbotUser* _tweetbotUser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTweetbotUser:(id)arg1 ;
-(id)searchTitle;
-(id)nothingFoundTitle;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end
