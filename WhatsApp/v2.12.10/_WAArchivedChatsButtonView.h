/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableViewCell, NSString;

@interface _WAArchivedChatsButtonView : UITableView <UITableViewDataSource, UITableViewDelegate> {

	UITableViewCell* _allArchivedChatsCell;
	id _target;
	SEL _action;

}

@property (assign,nonatomic,__weak) id target;                      //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                            //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)updateArchivedChatsCell;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)tintColorDidChange;
-(void)setAction:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
@end
