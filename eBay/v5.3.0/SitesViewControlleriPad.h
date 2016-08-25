/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UILabel, UIImageView, UITableView, NSMutableDictionary, NSArray, NSString;

@interface SitesViewControlleriPad : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _wantsSectionIndex;
	UILabel* _informationLabel;
	UILabel* _countryLabel;
	UIImageView* _flagImageView;
	UITableView* _tableView;
	NSMutableDictionary* _firstLetterToSite;
	NSArray* _sortedIndexNames;
	NSArray* _siteArray;

}

@property (assign,nonatomic) BOOL wantsSectionIndex;                               //@synthesize wantsSectionIndex=_wantsSectionIndex - In the implementation block
@property (nonatomic,retain) UILabel * informationLabel;                           //@synthesize informationLabel=_informationLabel - In the implementation block
@property (nonatomic,retain) UILabel * countryLabel;                               //@synthesize countryLabel=_countryLabel - In the implementation block
@property (nonatomic,retain) UIImageView * flagImageView;                          //@synthesize flagImageView=_flagImageView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * firstLetterToSite;              //@synthesize firstLetterToSite=_firstLetterToSite - In the implementation block
@property (nonatomic,retain) NSArray * sortedIndexNames;                           //@synthesize sortedIndexNames=_sortedIndexNames - In the implementation block
@property (nonatomic,retain) NSArray * siteArray;                                  //@synthesize siteArray=_siteArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSiteArray:(NSArray *)arg1 ;
-(id)indexPathForSite:(id)arg1 ;
-(id)siteForIndexPath:(id)arg1 ;
-(void)setSortedIndexNames:(NSArray *)arg1 ;
-(NSArray *)sortedIndexNames;
-(UIImageView *)flagImageView;
-(void)setFlagImageView:(UIImageView *)arg1 ;
-(void)autoDetectCountryAction:(id)arg1 ;
-(BOOL)isCountryAutoDetected;
-(void)setupCountryLabels;
-(void)setWantsSectionIndex:(BOOL)arg1 ;
-(UILabel *)informationLabel;
-(UILabel *)countryLabel;
-(BOOL)wantsSectionIndex;
-(void)backHit:(id)arg1 ;
-(void)doneHit:(id)arg1 ;
-(void)setInformationLabel:(UILabel *)arg1 ;
-(void)setCountryLabel:(UILabel *)arg1 ;
-(NSMutableDictionary *)firstLetterToSite;
-(void)setFirstLetterToSite:(NSMutableDictionary *)arg1 ;
-(NSArray *)siteArray;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)selectedIndexPath;
@end
