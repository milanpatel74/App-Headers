/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHColorGroupTableViewCell.h>

@class UIImageView, PTHHitInsetButton, PTHTweetbotList;

@interface PTHTweetbotUserListCell : PTHColorGroupTableViewCell {

	UIImageView* _lockView;
	PTHHitInsetButton* _infoButton;
	id _listObserver;
	PTHTweetbotList* _list;

}

@property (nonatomic,retain) PTHTweetbotList * list;              //@synthesize list=_list - In the implementation block
-(void)colorThemeDidChange;
-(id)initWithColorGroupName:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)showDetail:(id)arg1 ;
-(void)setList:(PTHTweetbotList *)arg1 ;
-(PTHTweetbotList *)list;
@end
