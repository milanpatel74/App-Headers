/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusSubview.h>

@class UILabel, UIImageView, NSFormatter;

@interface PTHTweetbotStatusTitleView : PTHTweetbotStatusSubview {

	UILabel* _nameLabel;
	UILabel* _timeLabel;
	UIImageView* _favoriteImageView;
	UIImageView* _conversationImageView;
	UIImageView* _popularImageView;
	NSFormatter* _timeFormatter;
	BOOL _registeredForSecondNotification;
	BOOL _hideTime;
	BOOL _favorited;
	BOOL _popular;
	BOOL _conversation;

}

@property (assign,nonatomic) BOOL hideTime;                                        //@synthesize hideTime=_hideTime - In the implementation block
@property (assign,getter=isFavorited,nonatomic) BOOL favorited;                    //@synthesize favorited=_favorited - In the implementation block
@property (assign,getter=isPopular,nonatomic) BOOL popular;                        //@synthesize popular=_popular - In the implementation block
@property (assign,getter=isConversation,nonatomic) BOOL conversation;              //@synthesize conversation=_conversation - In the implementation block
+(id)timeDifferenceFormatter;
+(id)absoluteDateFormatter;
+(void)initialize;
-(void)colorAppearanceDidChange;
-(void)fontAppearanceDidChange;
-(BOOL)isFavorited;
-(void)setFavorited:(BOOL)arg1 ;
-(BOOL)hideTime;
-(void)setHideTime:(BOOL)arg1 ;
-(void)_updateTime;
-(void)_cellDisplayDidChange;
-(void)_updateTimeVisibility;
-(void)_statusWasUpdated;
-(void)setPopular:(BOOL)arg1 ;
-(BOOL)isPopular;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setStatus:(id)arg1 ;
-(void)_updateText;
-(void)setConversation:(BOOL)arg1 ;
-(BOOL)isConversation;
@end

