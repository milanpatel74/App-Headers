/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:55 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <Tweetbot/PTHTweetbotPostDraftUpdateProtocol.h>

@class UILabel, UIButton, PTHTweetbotPostDraft, NSString;

@interface PTHTweetbotPostGeoController : PTHViewController <PTHTweetbotPostDraftUpdateProtocol> {

	UILabel* _label;
	BOOL _firstTime;
	UIButton* _toggleButton;
	PTHTweetbotPostDraft* _draft;

}

@property (nonatomic,retain) UIButton * toggleButton;                   //@synthesize toggleButton=_toggleButton - In the implementation block
@property (nonatomic,retain) PTHTweetbotPostDraft * draft;              //@synthesize draft=_draft - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)draftDidUpdate;
-(PTHTweetbotPostDraft *)draft;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setToggleButton:(UIButton *)arg1 ;
-(UIButton *)toggleButton;
@end

