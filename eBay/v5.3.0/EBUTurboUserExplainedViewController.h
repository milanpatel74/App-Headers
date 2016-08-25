/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>

@class EBNCheckoutDataManager, NSMutableArray;

@interface EBUTurboUserExplainedViewController : EUIViewController {

	EBNCheckoutDataManager* _dataManager;
	NSMutableArray* _rowData;
	NSMutableArray* _localConstraints;

}

@property (__weak) EBNCheckoutDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (retain) NSMutableArray * rowData;                          //@synthesize rowData=_rowData - In the implementation block
@property (retain) NSMutableArray * localConstraints;                 //@synthesize localConstraints=_localConstraints - In the implementation block
+(id)viewControllerWithDataManager:(id)arg1 ;
-(void)finalizeRowData;
-(void)setupNavBar;
-(void)setupViewWithDataManager:(id)arg1 ;
-(void)setupBulletedList;
-(void)addRowWithValueColumnAttributed:(id)arg1 ;
-(NSMutableArray *)rowData;
-(void)addConstraintsForbulletPointView:(id)arg1 valueView:(id)arg2 ;
-(void)setRowData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(void)setDataManager:(EBNCheckoutDataManager *)arg1 ;
-(EBNCheckoutDataManager *)dataManager;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
