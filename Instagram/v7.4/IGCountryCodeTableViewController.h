/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol IGCountryCodeTableViewControllerDelegate;
@class NSDictionary, NSArray;

@interface IGCountryCodeTableViewController : UITableViewController {

	NSDictionary* _countryNameToCountryNumberMap;
	id<IGCountryCodeTableViewControllerDelegate> _delegate;
	NSArray* _countryDataArray;

}

@property (nonatomic,retain) NSDictionary * countryNameToCountryNumberMap;                              //@synthesize countryNameToCountryNumberMap=_countryNameToCountryNumberMap - In the implementation block
@property (assign,nonatomic,__weak) id<IGCountryCodeTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * countryDataArray;                                                //@synthesize countryDataArray=_countryDataArray - In the implementation block
-(NSDictionary *)countryNameToCountryNumberMap;
-(void)setCountryDataArray:(NSArray *)arg1 ;
-(NSArray *)countryDataArray;
-(void)setCountryNameToCountryNumberMap:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<IGCountryCodeTableViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGCountryCodeTableViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end
