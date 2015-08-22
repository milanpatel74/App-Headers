/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGMediaRequestDelegate.h>

@class UITableView, NSArray, NSDictionary, UIImage, NSString;

@interface IGAnalyticsViewController : IGViewController <UITableViewDelegate, UITableViewDataSource, IGMediaRequestDelegate> {

	UITableView* _tableView;
	NSArray* _logLines;
	NSArray* _prefixKeysWithUN;
	NSDictionary* _displayedEvent;
	UIImage* _solidGreenImage;
	UIImage* _solidGreenImageRounded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_imageWithImage:(id)arg1 scaledToSize:(CGSize)arg2 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(id)_imageWithColor:(id)arg1 ;
-(void)_onHideTap:(id)arg1 ;
-(void)_linkToUserCell:(id)arg1 withEventDict:(id)arg2 pk:(id)arg3 ;
-(void)_linkToMediaCell:(id)arg1 withEventDict:(id)arg2 ;
-(void)_updateCell:(id)arg1 withEventDict:(id)arg2 ;
-(id)initWithLogDicts:(id)arg1 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewDidLoad;
@end
