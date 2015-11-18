/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@class NSString, WAMergedContact;

@interface WANotificationSettingsViewController : WATableViewController {

	NSString* _jid;
	WAMergedContact* _mergedContact;

}

@property (nonatomic,copy) NSString * jid;                                 //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) WAMergedContact * mergedContact;              //@synthesize mergedContact=_mergedContact - In the implementation block
+(id)controller;
-(void)setJid:(NSString *)arg1 ;
-(NSString *)jid;
-(void)wa_fontSizeDidChange;
-(void)setMergedContact:(WAMergedContact *)arg1 ;
-(WAMergedContact *)mergedContact;
-(void)setCallSound:(id)arg1 ;
-(id)allJIDsForCurrentContact;
-(void)setNotificationSound:(id)arg1 ;
-(void)showSoundPickerControllerWithTag:(long long)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
@end
