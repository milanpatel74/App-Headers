/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/PronosticsContentViewController.h>

@class Pays, NSMutableArray, UIView, UIImageView, UILabel;

@interface PronosticsMatchsVC : PronosticsContentViewController {

	Pays* currentCountry;
	NSMutableArray* tournamentsArray;
	BOOL isRefreshing;
	UIView* _noMatchsView;
	UIImageView* _noMatchsImageView;
	UILabel* _noMatchsLabel;

}

@property (nonatomic,retain) Pays * currentCountry; 
@property (nonatomic,retain) NSMutableArray * tournamentsArray; 
@property (nonatomic,retain) UIView * noMatchsView;                          //@synthesize noMatchsView=_noMatchsView - In the implementation block
@property (nonatomic,retain) UIImageView * noMatchsImageView;                //@synthesize noMatchsImageView=_noMatchsImageView - In the implementation block
@property (nonatomic,retain) UILabel * noMatchsLabel;                        //@synthesize noMatchsLabel=_noMatchsLabel - In the implementation block
-(void)viewWillAppearRoutine;
-(id)getDateLastRequest;
-(void)dataUpdateRequest;
-(void)requestFailedWithError:(id)arg1 ;
-(void)updateLastRequestDate;
-(id)flurryTag;
-(void)setCurrentCountry:(Pays *)arg1 ;
-(Pays *)currentCountry;
-(UILabel *)noMatchsLabel;
-(UIImageView *)noMatchsImageView;
-(UIView *)noMatchsView;
-(id)selectedDateKey;
-(id)URLStringForFullRequestWithDateMaths:(id)arg1 ;
-(void)fullRequestSucceededWithData:(id)arg1 andMatchsDate:(id)arg2 ;
-(id)availableDatesKey;
-(id)URLStringForDatesRequest;
-(void)setNoMatchsView:(UIView *)arg1 ;
-(void)setNoMatchsImageView:(UIImageView *)arg1 ;
-(void)setNoMatchsLabel:(UILabel *)arg1 ;
-(void)favoriteChange:(id)arg1 ;
-(NSMutableArray *)tournamentsArray;
-(void)prepareDataArray;
-(void)setTournamentsArray:(NSMutableArray *)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)refreshView;
@end

