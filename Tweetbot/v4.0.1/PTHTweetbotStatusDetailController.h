/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <Tweetbot/PTHTweetbotStatusDetailControllerProtocol.h>

@class PTHTweetbotStatus, UIScrollView, PTHTweetbotViewControllerStateView, NSMutableArray, PTHTweetbotStatusDetailConversationController, PTHTweetbotStatusDetailRepliesController, PTHTweetbotStatusDetailStatusController, PTHTweetbotStatusDetailMediaController, PTHTweetbotStatusDetailActionController;

@interface PTHTweetbotStatusDetailController : PTHViewController <PTHTweetbotStatusDetailControllerProtocol> {

	PTHTweetbotStatus* _status;
	UIScrollView* _scrollView;
	PTHTweetbotViewControllerStateView* _stateView;
	NSMutableArray* _childControllers;
	PTHTweetbotStatusDetailConversationController* _conversationController;
	PTHTweetbotStatusDetailRepliesController* _repliesController;
	PTHTweetbotStatusDetailStatusController* _statusController;
	PTHTweetbotStatusDetailMediaController* _mediaController;
	PTHTweetbotStatusDetailActionController* _actionController;
	BOOL _resetContentOffsetFromPreview;

}

@property (nonatomic,readonly) PTHTweetbotStatus * status;              //@synthesize status=_status - In the implementation block
-(void)childControllerDidUpdate:(id)arg1 ;
-(void)childControllerDidShow:(id)arg1 ;
-(void)_updatePreview;
-(void)previewingStatusDidChange;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)previewActionItems;
-(void)_share:(id)arg1 ;
-(PTHTweetbotStatus *)status;
-(id)initWithStatus:(id)arg1 ;
@end
