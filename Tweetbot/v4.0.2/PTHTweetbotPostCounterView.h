/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:54 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UILabel.h>
#import <Tweetbot/PTHTweetbotPostDraftUpdateProtocol.h>

@class PTHTweetbotPostDraft, NSString;

@interface PTHTweetbotPostCounterView : UILabel <PTHTweetbotPostDraftUpdateProtocol> {

	PTHTweetbotPostDraft* _draft;

}

@property (nonatomic,retain) PTHTweetbotPostDraft * draft;              //@synthesize draft=_draft - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)draftDidUpdate;
-(PTHTweetbotPostDraft *)draft;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

