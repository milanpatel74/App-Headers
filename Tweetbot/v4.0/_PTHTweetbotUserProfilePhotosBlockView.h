/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class PTHTweetbotEntity, UIViewController;

@interface _PTHTweetbotUserProfilePhotosBlockView : UIControl {

	PTHTweetbotEntity* _entity;
	UIViewController* _controller;

}

@property (nonatomic,retain) PTHTweetbotEntity * entity;                        //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)_showMedia;
-(id)initWithEntity:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(PTHTweetbotEntity *)entity;
-(void)setEntity:(PTHTweetbotEntity *)arg1 ;
@end
