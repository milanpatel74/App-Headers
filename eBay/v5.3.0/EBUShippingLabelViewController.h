/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUKeyboardAccessoryTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <eBay/EBUShippingLabelDataManagerObserver.h>

@class EBULoadingToastView, UITableView, EBUShippingLabelDataManager, UIResponder, NSString;

@interface EBUShippingLabelViewController : EBUKeyboardAccessoryTableViewController <UITableViewDataSource, EBUShippingLabelDataManagerObserver> {

	EBULoadingToastView* _loadingOverlay;
	UITableView* _tableView;
	EBUShippingLabelDataManager* _dataManager;
	UIResponder* _currentResponder;

}

@property (nonatomic,retain) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) EBUShippingLabelDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) UIResponder * currentResponder;                         //@synthesize currentResponder=_currentResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modalViewControllers;
+(id)controller;
-(void)setupTableCells;
-(UIResponder *)currentResponder;
-(id)containingCellOfResponder:(id)arg1 ;
-(void)setCurrentResponder:(UIResponder *)arg1 ;
-(id)loadingOverlay;
-(void)shippingLabelUpdated:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)finishEditing:(BOOL)arg1 ;
-(void)scrollResponderToVisible:(id)arg1 ;
-(void)fedExEndUserLicenseAgreementAccepted:(id)arg1 ;
-(void)updateDraftPackage;
-(void)finishEditing:(BOOL)arg1 updateType:(unsigned long long)arg2 ;
-(void)removeModalViewControllers;
-(void)setDataManager:(EBUShippingLabelDataManager *)arg1 ;
-(EBUShippingLabelDataManager *)dataManager;
-(void)goToItem:(id)arg1 ;
-(void)cancel;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)indexPathForCell:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)done;
-(void)startEditing;
@end
