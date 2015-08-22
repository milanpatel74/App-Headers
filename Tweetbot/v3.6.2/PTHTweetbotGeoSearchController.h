/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class PTHTweetbotAccount, UITableView, PTHLocationManager, NSMutableArray, UIView, CLLocation, PTHTweetbotPlace, NSString;

@interface PTHTweetbotGeoSearchController : PTHViewController <UITableViewDelegate, UITableViewDataSource> {

	PTHTweetbotAccount* _account;
	UITableView* _tableView;
	BOOL _firstTime;
	PTHLocationManager* _locationManager;
	NSMutableArray* _pois;
	UIView* _poisHeader;
	NSMutableArray* _places;
	UIView* _placesHeader;
	unsigned long long _state;
	CLLocation* _location;
	PTHTweetbotPlace* _place;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CLLocation * location;                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) PTHTweetbotPlace * place;              //@synthesize place=_place - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)ok:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CLLocation *)location;
-(id)initWithAccount:(id)arg1 ;
-(void)setPlace:(PTHTweetbotPlace *)arg1 ;
-(PTHTweetbotPlace *)place;
-(void)setLocation:(CLLocation *)arg1 ;
@end
