/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGCollectionMenuController.h>

@class TGConversation, TGUser, TGCachedConversationMember, TGCheckCollectionItem, TGCommentCollectionItem;

@interface TGChannelModeratorController : TGCollectionMenuController {

	TGConversation* _conversation;
	TGUser* _user;
	TGCachedConversationMember* _originalMember;
	TGCachedConversationMember* _member;
	TGCheckCollectionItem* _moderatorItem;
	TGCheckCollectionItem* _editorItem;
	TGCommentCollectionItem* _accessLevelHelpItem;
	/*^block*/id _done;

}

@property (nonatomic,copy) id done;              //@synthesize done=_done - In the implementation block
-(void)moderatorPressed;
-(void)editorPressed;
-(void)dismissPressed;
-(void)updateAccessLevelHelp;
-(id)initWithConversation:(id)arg1 user:(id)arg2 member:(id)arg3 ;
-(id)done;
-(void)setDone:(id)arg1 ;
-(void)donePressed;
@end
