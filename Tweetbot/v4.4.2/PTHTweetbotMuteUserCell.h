/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotMuteCell.h>

@class PTHTweetbotAvatarView, UILabel, PTHTweetbotUser;

@interface PTHTweetbotMuteUserCell : PTHTweetbotMuteCell {

	PTHTweetbotAvatarView* _avatarView;
	UILabel* _screenNameLabel;
	PTHTweetbotUser* _user;

}

@property (nonatomic,retain) PTHTweetbotUser * user;              //@synthesize user=_user - In the implementation block
-(id)initWithColorGroupName:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateNames;
-(void)colorThemeDidChange;
-(PTHTweetbotUser *)user;
-(void)setUser:(PTHTweetbotUser *)arg1 ;
-(void)layoutSubviews;
-(void)setFilter:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
