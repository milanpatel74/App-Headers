/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@class NSTimer;

@interface StatViewController : WATableViewController {

	NSTimer* _dataUpdateTimer;
	BOOL _voipEnabled;

}
+(id)controller;
-(void)wa_fontSizeDidChange;
-(void)updateView:(id)arg1 ;
-(BOOL)isButtonSectionIndex:(long long)arg1 ;
-(BOOL)isTotalSectionIndex:(long long)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

