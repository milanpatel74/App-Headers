/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class PTHTweetbotStatus, PTHTweetbotStatusView, PTHTweetbotEntityTextFontAppearance, PTHTweetbotEntityTextColorAppearance, UIViewController;

@interface PTHTweetbotStatusSubview : UIControl {

	PTHTweetbotStatus* _status;
	PTHTweetbotStatusView* _statusView;

}

@property (nonatomic,retain) PTHTweetbotStatus * status;                                            //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotStatusView * statusView;                             //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,readonly) PTHTweetbotEntityTextFontAppearance * fontAppearance; 
@property (nonatomic,readonly) PTHTweetbotEntityTextColorAppearance * colorAppearance; 
@property (nonatomic,__weak,readonly) UIViewController * viewController; 
-(void)colorAppearanceDidChange;
-(void)fontAppearanceDidChange;
-(PTHTweetbotEntityTextColorAppearance *)colorAppearance;
-(PTHTweetbotEntityTextFontAppearance *)fontAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIViewController *)viewController;
-(PTHTweetbotStatusView *)statusView;
-(void)setStatusView:(PTHTweetbotStatusView *)arg1 ;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
@end
