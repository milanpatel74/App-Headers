/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:50:29 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/34410EF6-4E83-412E-A9C2-1231076AA068/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol PLVNetworkSelectDelegate;
@class NSObject, IRCNetwork, NSArray;

@interface PLVNetworkSelectViewController : UITableViewController {

	NSObject*<PLVNetworkSelectDelegate> _delegate;
	IRCNetwork* _selectedNetwork;
	NSArray* _networks;

}

@property (retain) NSObject*<PLVNetworkSelectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IRCNetwork * selectedNetwork;                    //@synthesize selectedNetwork=_selectedNetwork - In the implementation block
@property (retain) NSArray * networks;                                        //@synthesize networks=_networks - In the implementation block
-(void)setSelectedNetwork:(IRCNetwork *)arg1 ;
-(IRCNetwork *)selectedNetwork;
-(id)initWithNetworks:(id)arg1 ;
-(void)setDelegate:(NSObject*<PLVNetworkSelectDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSObject*<PLVNetworkSelectDelegate>)delegate;
-(void)viewDidLoad;
-(NSArray *)networks;
-(void)setNetworks:(NSArray *)arg1 ;
@end
