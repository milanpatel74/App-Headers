/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@class NSString;

@interface WAAutoDownloadSettingsViewController : WATableViewController {

	NSString* _autoDownloadImagesString;
	NSString* _autoDownloadAudioString;
	NSString* _autoDownloadVideosString;
	NSString* _autoDownloadNeverString;
	NSString* _autoDownloadWifiString;
	NSString* _autoDownloadCellularString;
	BOOL _showResetButton;

}
-(void)wa_tintColorDidChange;
-(void)wa_fontSizeDidChange;
-(void)updateSettingsDisplay;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
