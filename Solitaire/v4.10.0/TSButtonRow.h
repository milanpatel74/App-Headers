/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSButtonRowDelegate;
@class WKInterfaceController, WKInterfaceButton, TSWKClickAction, TSWatchKitData;

@interface TSButtonRow : NSObject {

	WKInterfaceController* _controller;
	WKInterfaceButton* _button;
	TSWKClickAction* _currentAction;
	TSWatchKitData* _wkData;
	id<TSButtonRowDelegate> _delegate;

}

@property (nonatomic,retain) WKInterfaceController * controller;                   //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) WKInterfaceButton * button;                    //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) TSWKClickAction * currentAction;                      //@synthesize currentAction=_currentAction - In the implementation block
@property (nonatomic,retain) TSWatchKitData * wkData;                              //@synthesize wkData=_wkData - In the implementation block
@property (assign,nonatomic,__weak) id<TSButtonRowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(TSWatchKitData *)wkData;
-(void)buttonClicked;
-(void)setWkData:(TSWatchKitData *)arg1 ;
-(WKInterfaceButton *)button;
-(void)setDelegate:(id<TSButtonRowDelegate>)arg1 ;
-(id<TSButtonRowDelegate>)delegate;
-(TSWKClickAction *)currentAction;
-(WKInterfaceController *)controller;
-(void)setController:(WKInterfaceController *)arg1 ;
-(void)setButton:(WKInterfaceButton *)arg1 ;
-(void)setCurrentAction:(TSWKClickAction *)arg1 ;
@end

